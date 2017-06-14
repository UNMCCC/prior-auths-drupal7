<?php
/**
 * @file
 * Definition of EntityScheduleRadOncMigration.
 */
class EntityScheduleRadOncMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 0;  //To-do, tweak source to add header
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
      8 => array('notes', 'Relevant notes'),
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/RO_Schedule.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->body = t('CSV Chemo Add On Schedule');

    $this->destination = new MigrateDestinationEntityAPI('schedule','schedule');

    // Tell Migrate the unique IDs for this migration live - watch for multiple appts.
    $source_key_schema = array('mrn' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    );

    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema('schedule'));

    $this->addFieldMapping('field_location', 'location');//this is also a term ref!!
    $this->addFieldMapping('field_department')->defaultValue('RadOnc');
    $this->addFieldMapping('field_app_date', 'date'); // may need to work on
    $this->addFieldMapping('field_activity', 'activity');// need work, this is a term ref!!
    $this->addFieldMapping('field_insurance_payer_', 'ins_provider') 
      ->description('lookup insurance term in prepareRow'); // spin off term ref, or not?
    $this->addFieldMapping('field_patient_reference', 'mrn')
      ->description('lookup existing mrns, or create one in prepareRow');
    $this->addFieldMapping('field_notes', 'notes');

    $this->addUnmigratedSources(array(
      'lastname',
      'firstname',
      'middle',
    ));
    $this->addUnmigratedDestinations(array(
      'created',
      'changed',
      'path',
      'field_app_date:timezone',//   Timezone
      'field_app_date:rrule',  //        Recurring event rule
      'field_app_date:to',     //	End date date
      'field_activity:source_type',	//Option: Set to 'tid' when the value is a source ID
      'field_activity:create_term',	//Option: Set to TRUE to create referenced terms when necessary
      'field_activity:ignore_case',
      'field_location:source_type',	//Option: Set to 'tid' when the value is a source ID
      'field_location:create_term',	//Option: Set to TRUE to create referenced terms when necessary
      'field_location:ignore_case',
      'field_pa_status',
      'field_staff_notes',
      'field_auth_number',
      'field_insurance_payer_:create_term',
      'field_insurance_payer_:ignore_case',
      'field_department:create_term',
      'field_department:ignore_case',
    ));
  }
 
  public function prepareRow($row) {

     parent::prepareRow($row);

    //date
    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->date, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->date, $matches)){
      $row->date = $row->date . ' 12:00:00 PM';
    }

    // Is there a pat MRN?
    $mrnid = $this->getMrn($row);
    $row->mrn = $mrnid;
  }

  public function getMrn($row) {
    // query database here, match with $row element,
    // return nid for this person, otherwise false.
    $field_values = array();

    // Search for an already migrated person entity with the same title
    // (title is "givenName" "surName")

    if (!empty($row->mrn)) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'patient');
      $query->fieldCondition('field_mrn', 'value', (int)$row->mrn, '=');
      $results = $query->execute();
      if (!empty($results['node'])) {
        $nid = reset($results['node'])->nid;
//        watchdog('schedule_migration', "query matches: $nid");
        return($nid);
      }else{
       // make a new patient to-do  --- should just run the previous migration...
       // the query should not really get here.
      }
    }else{
        //there is no MRN, this is an orphan order
        watchdog('schedule_migration', "orphan schedule : $row->last_name, $row->start_date");
    }
    return $nid;
  }


}
