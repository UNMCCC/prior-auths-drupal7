<?php
/**
 * @file
 * Definition of ContentPatientMigration.
 * For now, this will assume that you
 * downloaded all the scanned note files in
 * imports folder or destination
 */

class ContentPatientMigration extends Migration {
  protected $dependencies = array();
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 0;
    $options['delimiter'] = ",";

    $columns = array(
      0 => array('date', 'The scheduled date of appointment'),
      1 => array('mrn', 'The medical record number'),
      2 => array('lastname', 'The patient last name'),
      3 => array('firstname', 'The scanned first name'),
      4 => array('middle', 'A Middle name'),
      5 => array('location', 'The location where patient is scheduled to'),
      6 => array('activity', 'The activity'),
      7 => array('ins_provider', 'The insurance provider (ref)'),
   );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/SQL_Chemo_AddOn_FEED.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);

    $this->body = t('CSV Chemo Add On Schedule ');

    $this->map = new MigrateSQLMap($this->machineName,
      array('mrn' => array(
           'type' => 'int',
           'unsigned' => TRUE,
           'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->destination = new MigrateDestinationNode('patient');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_name','firstname');
    $this->addFieldMapping('field_name:given','firstname');
    $this->addFieldMapping('field_name:family','lastname');
    $this->addFieldMapping('field_name:middle','middle');
    $this->addFieldMapping('field_mrn','mrn')
     ->description('Ensure not already in system, prepareRow()');

    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('log')->defaultValue('Migrated from CSV Chemo-add-On');

    $this->addUnmigratedSources(array(
      'date',
      'location',
      'activity',
      'ins_provider',
    ));

    $this->addUnmigratedDestinations(array(
      'field_name:generational',
      'field_name:credentials',
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

    //date
    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->date, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->date, $matches)){
      $row->date = $row->date . ' 12:00:00 PM';
    }

    // do we have this patient?
    $mrnid = $this->getPatient($row);
    $row->mrn = $mrnid;
  }

  public function getPatient($row) {
    // query database here, match with $row element, if exists, return false.
    // Search for an already migrated person.

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->entityCondition('bundle', 'patient');
    $query->fieldCondition('field_mrn', 'value',(int)$row->mrn, '=');
    $results = $query->execute();
    if (!empty($results['node'])) {
      watchdog('schedule_migration', "Existing Patient: Skip node creation: $row->lastname $row->firstname");
      return FALSE; 
    }else{
      $mrnid = $row->mrn;
      return $mrnid;
    }
  }

  public function prepare($node, $row) {

    // Force the auto_entitylabel module to leave $node->title alone.
    $node->auto_entitylabel_applied = TRUE;

  }
}
