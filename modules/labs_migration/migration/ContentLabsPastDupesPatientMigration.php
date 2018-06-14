<?php
/**
 * @file
 * Definition of ContentPatientMigration.
 * For now, this will assume that you
 * downloaded all the scanned note files in
 * imports folder or destination
 */

class ContentLabsPastDupesPatientMigration extends Migration {
  protected $dependencies = array();
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 0;
    $options['delimiter'] = ",";

    $columns = array(
      0 => array('pat_id1', 'Another cryptic unique number used for keys'),
      1 => array('start_date', 'The scheduled start date time of labs'),
      2 => array('hsp_code', 'The lab code'),
      3 => array('hsp_code_description', 'The lab code description'),
      4 => array('lab_order_create_date', 'The time when lab order was placed'),
      5 => array('comment', 'The comments on the lab order'),
      6 => array('provider_last', 'The provider last name'),
      7 => array('provider_first', 'The provider first name'),
      8 => array('pat_last', 'The patient last name'),
      9 => array('pat_first', 'The patient first name'),
      10 => array('pat_middle', 'The patient middle name'),
      11 => array('mrn','The medical record number'),
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/labs_past_with_dupes.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);

    $this->body = t('CSV Labs Patients');

    $this->map = new MigrateSQLMap($this->machineName,
        array('pat_id1' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
            'description' => 'the pat id is the unique key',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->destination = new MigrateDestinationNode('patient');

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_given_name','pat_first');
    $this->addFieldMapping('field_last_name','pat_last');
    $this->addFieldMapping('field_middle_name','pat_middle');
    $this->addFieldMapping('field_mrn','mrn');
    $this->addFieldMapping('field_mq_pat_id','pat_id1')
     ->description('Ensure not already in system, prepareRow()');

    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('log')->defaultValue('Migrated from CSV Chemo-add-On');

    $this->addUnmigratedSources(array(
      'start_date',
      'hsp_code',
      'hsp_code_description',
      'lab_order_create_date',
      'comment',
      'provider_last',
      'provider_first',
    ));

    $this->addUnmigratedDestinations(array(
      'language',       // Language  (fr, en, ...)
      'tnid',           // The translation set id for this node
      'translate',      //      A boolean indicating whether this translation page needs to be updated
      'revision_uid',   //      Modified (uid)
      'is_new',
      'created',
      'changed',
      'path',
      'comment',
    ));
  }
  public function prepareRow($row) {

    // do we have this patient?
    $pat_id1 = $this->getPatient($row);
    if($pat_id1 == -999999999999){
      return FALSE;
    }else{
      $row->pat_id1 = $pat_id1;
      return TRUE;
    }
  }
  public function getPatient($row) {
    // query database here, match with $row element, if exists, return false.
    // Search for an already migrated person.

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->entityCondition('bundle', 'patient');
    $query->fieldCondition('field_mq_pat_id', 'value',(int)$row->pat_id1, '=');
    $results = $query->execute();
    if (!empty($results['node'])) {
      watchdog('labs_migration', "Existing Patient: Skip node creation: $row->pat_last $row->pat_first");
      return -999999999999; 
    }else{
      $pat_id1 = $row->pat_id1;
      return $pat_id1;
    }
  }
  public function prepare($node, $row) {

    // Force the auto_entitylabel module to leave $node->title alone.
    $node->auto_entitylabel_applied = TRUE;

  }
}
