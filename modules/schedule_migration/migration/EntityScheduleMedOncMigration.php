<?php
/**
 * @file
 * Definition of EntityScheduleMedOncMigration.
 */
class EntityScheduleMedOncMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 0;  //To-do, tweak source to add header
    $options['delimiter'] = ",";

    $columns = array(
      0 => array('date', 'The scheduled date of appointment'),
      1 => array('time', 'The scheduled time of appointment'),
      2 => array('mrn', 'The medical record number'),
      3 => array('pat_id1', 'Another cryptic unique number used for keys'),
      4 => array('lastname', 'The patient last name'),
      5 => array('firstname', 'The scanned first name'),
      6 => array('middle', 'A Middle name'),
      7 => array('location', 'The location where patient is scheduled to'),
      8 => array('activity', 'The activity'),
      9 => array('ins_provider', 'The insurance provider (ref)'),
     10 => array('notes', 'Relevant notes'),
     11 => array('sch_key', 'construct a unique key for migration')
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/MO_Schedule.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->body = t('CSV Chemo Add On Schedule');

    $this->destination = new MigrateDestinationEntityAPI('schedule','schedule');

    // Tell Migrate the unique IDs for this migration live - watch for multiple appts.
    $source_key_schema = array('sch_key' => array(
        'type' => 'varchar',
        'length' => '512',
        'not null' => TRUE,
        'description' => 'the order id name is the key',
      ),
    );

    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema('schedule'));

    $this->addFieldMapping('field_location', 'location');//this is also a term ref!!
    $this->addFieldMapping('field_department')->defaultValue('MedOnc');
    $this->addFieldMapping('field_app_date', 'date'); // may need to work on
    $this->addFieldMapping('field_activity', 'activity');// need work, this is a term ref!!
    $this->addFieldMapping('field_insurance_payer_', 'ins_provider') 
      ->description('lookup insurance term in prepareRow'); // spin off term ref, or not?
    $this->addFieldMapping('field_patient_reference1', 'pat_id1')
      ->description('lookup existing identifiers or create one in prepareRow');

    $this->addFieldMapping('field_notes', 'notes');

    // Assign these schedules to whoever process the medical oncology schedules.
    // Now I.Mad -> UID 296
    // You would change the UID by looking up the system assigned User ID.
    // How do you find that ID ? You go to the https://WEBROOT/pa/admin/people and hover over
    // the user you want to assing, take note of the ID (for example: https://WEBROOT/pa/user/59 )

    $this->addFieldMapping('uid')->defaultValue('296');

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

  /**
   * Prepare a proper unique key.
  */
  public function prepareKey($key, $row) {
        $key = array();
        $row->sch_key = $row->pat_id1 . $row->activity . $row->date . $row->time;
        $key['sch_key'] = $row->sch_key;
        return $key;
  }
  public function prepareRow($row) {

     parent::prepareRow($row);

    //date
    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->date, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->date, $matches)){
      $row->date = $row->date . ' 12:00:00 PM';
    }

    // Is there a pat Id1?
    $pat_id1 = $this->getPatientId($row);
    if($pat_id1>0){
        $row->pat_id1 = $pat_id1;
    }else{

        watchdog('schedule_migration', "orphan schedule? : $row->lastname, $row->pat_id1, $row->date");
        return FALSE;
    }
  }

  public function getPatientId($row) {
    // query database here, match with $row element,
    // return nid for this person, otherwise false.
    // $field_values = array();

    // Search for an already migrated person entity with the same title
    // (title is "givenName" "surName")

    if (!empty($row->pat_id1)) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'patient');
      $query->fieldCondition('field_mq_pat_id', 'value', (int)$row->pat_id1, '=');
      $results = $query->execute();
      if (!empty($results['node'])) {
        $nid = reset($results['node'])->nid;
//        watchdog('schedule_migration', "query matches: $nid");
        return($nid);
      }else{
       // make a new patient to-do  --- should just run the previous migration...
       // the query should not really get here.
       watchdog('schedule_migration', "medonc no patient found? : $row->lastname, $row->pat_id1");
       return;
      }
    }else{
        //there is no MRN, this is an orphan order
        watchdog('schedule_migration', "orphan medonc schedule : $row->lastname, $row->start_date");
        return;
    }
    return;
  }


}
