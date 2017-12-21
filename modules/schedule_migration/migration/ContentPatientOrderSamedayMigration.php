<?php
/**
 * @file
 * Definition of ContentPatientOrderSamedayMigration.
 * For now, lets ensure the patient in orders 
 * are in the system, otherwise, create them
 */

class ContentPatientOrderSamedayMigration extends Migration {
  protected $dependencies = array();
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 0;
    $options['delimiter'] = ",";

    $columns = array(
      0 => array('orc_id', 'The unique order id'),
      1 => array('start_date', 'The treatment start date and appt date'),
      2 => array('mrn', 'The patient medical record number - MRN'),
      3 => array('pat_id1', 'Another cryptic unique number used for keys'),
      4 => array('lastname', 'The patient name'),
      5 => array('firstname', 'The patient name'),
      6 => array('middle', 'The patient name'),
      7 => array('payer', 'The insurer'),
      8 => array('order_description', 'The order description'),
      9 => array('order_status', 'The order status'),
      10 => array('orc_id_drug', 'Dummy field'),
   );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/sameday_orders.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);

    $this->body = t('CSV Patients from Chemo Orders');

    $this->map = new MigrateSQLMap($this->machineName,
      array('pat_id1' => array(
           'type' => 'int',
           'unsigned' => TRUE,
           'not null' => TRUE,
           'description' => 'the unique MRN',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->destination = new MigrateDestinationNode('patient');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_given_name','firstname');
    $this->addFieldMapping('field_last_name','lastname');
    $this->addFieldMapping('field_middle_name','middle');
    $this->addFieldMapping('field_mrn','mrn');
    $this->addFieldMapping('field_mq_pat_id','pat_id1')
     ->description('Ensure not already in system, prepareRow()');

    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('log')->defaultValue('Migrated from CSV Chemo-add-On');

    $this->addUnmigratedSources(array(
      'orc_id',
      'start_date',
      'payer',
      'order_description',
      'order_status',
      'orc_id_drug',
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
//      watchdog('schedule_migration', "Existing Patient: Skip node creation: $row->lastname $row->firstname");
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
