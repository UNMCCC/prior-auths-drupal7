<?php
/**
 * @file
 * Definition of EntityEligibilityStatusMQMigration.
 */
class EntityEligibilityStatusMQMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 0;
    $options['delimiter'] = ",";

    $columns = array(
      0 => array('sch_id', 'The MQ schedule ID'),
      1 => array('pat_id1', 'the MQ patient ID'),
      2 => array('sub_status', 'The submission status'),
      3 => array('es_last_date_checked','Last time the Status was checked'),
      4 => array('elig_status','The Eligibility Status, a number from 2 to 6'),
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/Eligibility_Status.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->body = t('Latests Mosaiq Eligibility Status for coming appointments');

    $this->destination = new MigrateDestinationEntityAPI('hdx','hdx');

    $source_key_schema = array('sch_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
      ),
    );

    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema('hdx'));

    $this->addFieldMapping('field_sch_id_ref', 'sch_id')
      ->description('lookup existing sch id in prepareRow');

    // send these eligs to uid 1
    // $this->addFieldMapping('uid')->defaultValue('1');

    $this->addFieldMapping('field_elig_status','elig_status');
    $this->addFieldMapping('field_date_check','es_last_date_checked');

    $this->addUnmigratedSources(array(
      'sub_status',
      'pat_id1',
    ));
    $this->addUnmigratedDestinations(array(
      'id',
      'type',
      'field_hdx_status',
      'field_date_check:timezone',	 // Timezone
      'field_date_check:rrule',	// Recurring event rule
      'field_date_check:to',    //	End date date
      'path',	 // Path alias
    ));
  }


  public function prepareRow($row) {

     parent::prepareRow($row);

    //date
    //if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->date, $matches)){
    //} else if(preg_match('/\d+\/\d+\/\d+/',$row->date, $matches)){
    //  $row->date = $row->date . ' 12:00:00 PM';
    //}

    // Is there a Sch ID?
    $sch_id = $this->getSchid($row);
    if($sch_id>0){
      $row->sch_id = $sch_id;
    }else{
       return FALSE;
    }
  }

  public function getSchid($row) {
    // query database here, match with $row element,
    // return nid for this person, otherwise false.
    // $field_values = array();

    // Search for an already migrated person entity with the same title
    // (title is "givenName" "surName")


    if ( !empty($row->sch_id) ){
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'schedule');
      $query->entityCondition('bundle', 'schedule');
      $query->fieldCondition('field_schedule_id', 'value', (int)$row->sch_id, '=');

      $results = $query->execute();
      if (!empty($results['schedule'])) {
        $id = reset($results['schedule'])->id;
//        watchdog('hdx_migration', "query matches: $id");
        return($id);
      }else{
       // make a new patient to-do  --- should just run the previous migration...
       // the query should not really get here.
       watchdog('hdx_migration', "no schedule yet : $row->sch_id");
       return;
      }
    }else{
        //there is no MRN, this is an orphan order
        watchdog('hdx_migration', "orphan schedule");
        return;
    }
    return $id;
  }


}
