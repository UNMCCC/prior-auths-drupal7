<?php
/**
 * @file
 * Definition of EntityLabsMigration.
 */
class EntityLabsMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 0;  //To-do, tweak source to add header
    $options['delimiter'] = ",";

    $columns = array(
      0 => array('pat_id1', 'Another cryptic unique number used for keys'),
      1 => array('start_date', 'The scheduled start date time of labs'),
      2 => array('hsp_code', 'The lab code'),
      3 => array('hsp_code_description', 'The lab code description'),
      4 => array('lab_order_create_date', 'The date time when lab order was placed'),
      5 => array('comment', 'The comments on the lab order'),
      6 => array('provider_last', 'The provider last name'),
      7 => array('provider_first', 'The provider first name'),
      8 => array('pat_last', 'The patient last name'),
      9 => array('pat_first', 'The patient first name'),
      10 => array('pat_middle', 'The patient middle name'),
      11 => array('mrn','The medical record number'),
      12 => array('lab_key', 'The unique key to be built'),
      13 => array('uid_as_fct_min','to se set depending on current minute'),
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/labs.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->body = t('Labs orders Add Ons');

    $this->destination = new MigrateDestinationEntityAPI('labs','labs');

    // Tell Migrate the unique IDs for this migration live - watch for multiple appts.
    $source_key_schema = array('lab_key' => array(
          'type' => 'varchar',
          'length' => '512',
          'not null' => TRUE,
          'description' => 'the lab order id and start date are the uniques key',
      ),
    );

    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema('labs'));


    $this->addFieldMapping('field_start_date', 'start_date'); // may need to work on
    $this->addFieldMapping('field_cpt_code', 'hsp_code')
      ->description('lookup HSP CODE term in prepareRow'); // code in file
    $this->addFieldMapping('field_patient_reference1', 'pat_id1')
          ->description('lookup existing identifiers or create one in prepareRow');
    $this->addFieldMapping('field_lab_comment', 'comment');
    $this->addFieldMapping('field_lab_status')->defaultValue('new');
    $this->addFieldMapping('field_create_date', 'lab_order_create_date');
    $this->addFieldMapping('field_ordering_md', 'provider_last')
        ->description('add first name in prepareRow');
    //Change the UID when needed!
    $this->addFieldMapping('uid','uid_as_fct_min')
        ->description('UID depends on whether 05 or 35');

    $this->addUnmigratedSources(array(
      'hsp_code_description',  // already there.
      'pat_last',
      'pat_first',
      'pat_middle',
      'provider_first', // concat in prepareRow
      'mrn',
    ));
    $this->addUnmigratedDestinations(array(
      'path',
      'id',
      'created',
      'changed',
      'type',
      'field_start_date:timezone',// Timezone
      'field_start_date:rrule',   // Recurring event rule
      'field_start_date:to',      // End date date
      'field_create_date:timezone',// Timezone
      'field_create_date:rrule',   // Recurring event rule
      'field_create_date:to',      // End date date
      'field_cpt_code:source_type',	//Option: Set to 'tid' when the value is a source ID
      'field_cpt_code:create_term',	//Option: Set to TRUE to create referenced terms when necessary
      'field_cpt_code:ignore_case',
    ));
  }
  /**
   * Prepare a proper unique key.
  */
  public function prepareKey($key, $row) {
    $key = array();
    $row->lab_key = $row->pat_id1 . $row->start_date . $row->hsp_code;
    $key['lab_key'] = $row->lab_key;
    return $key;
  }

  public function prepareRow($row) {

     parent::prepareRow($row);

    //dates
    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->start_date, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->start_date, $matches)){
      $row->start_date = $row->start_date . ' 12:00:00 PM';
    }

    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->create_date, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->create_date, $matches)){
       $row->create_date = $row->create_date . ' 12:00:00 PM';
    }

    // concat MD name.
    $row->provider_last .= ', ' . $row->provider_first;

    // What time is it? execute at HH:05 and HH:35.
    $mymin = date("i");
    $dmin = floor($mymin/10);
    if (($dmin % 2) == 1)
      { $row->uid_as_fct_min = 1091 ;}  //Jackie Villareal  at :35 echo((floor(35/10)) % 2);
    if (($dmin % 2) == 0)
      { $row->uid_as_fct_min = 1092;}   // Erin Morin  at :05   echo((floor(5/10)) % 2);

    // Is there a pat Id1?
    $pat_id1 = $this->getPatientId($row);
    $row->pat_id1 = $pat_id1;
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
//        watchdog('labs_migration', "query matches: $nid");
        return($nid);
      }else{
       // make a new patient to-do  --- should just run the previous migration...
       // the query should not really get here.
      }
    }else{
        //there is no MRN, this is an orphan order
        watchdog('labs_migration', "orphan lab? : $row->last_name, $row->start_date");
    }
    return;
  }


}
