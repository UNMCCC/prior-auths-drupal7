<?php
/**
 * @file
 * Definition of EntityHdxMigration.
 */
class EntityHdxMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 1;
    $options['delimiter'] = ",";

    $columns = array(
      0 => array('tid', 'The trans id'),
      1 => array('resp_status', 'hdx response status'),
      2 => array('resp_error', 'The Response Error'),
      3 => array('rej_reason_code','Reject Reason Code'),
      4 => array('rej_reason_code_t','Reject Reason Code Translation'),
      5 => array('viewed', 'viewed'),
      6 => array('done_st', 'Done Status'),
      7 => array('done_reason', 'Why is this done'),
      8 => array('accepted', 'Was it accepted'),
      9 => array('req_date', 'The req. date'),
     10 => array('resp_date', 'The resp. date'),
     11 => array('pat_last_req', 'Patient Last Request'),
     12 => array('pat_last_resp', 'Patient Last Name Response'),
     13 => array('pat_first_req', 'Patient First Name Request'),
     14 => array('pat_first_resp', 'Patient First Name Response'),
     15 => array('pat_middle_req', 'Patient Middle Name Request'),
     16 => array('pat_middle_resp', 'Patient Middle Name Response'),
     17 => array('pat_suffix_req', 'Patient Suffix Name Request'),
     18 => array('pat_suffix_resp', 'Patient Suffix Name Response'),
     19 => array('dob_req', 'Date of Birth Request'),
     20 => array('dob_resp', 'Date of Birth Response'),
     21 => array('gender_req', 'Gender Request'),
     22 => array('gender_resp', 'Gender Response'),
     23 => array('ssn_req', 'SSN Request'),
     24 => array('ssn_resp', 'SSN Response'),
     25 => array('mid_req', 'Member ID Request'),
     26 => array('mid_resp', 'Member Id Response'),
     27 => array('group_req', 'Group Number Request'),
     28 => array('group_resp', 'Group Number Response'),
     29 => array('payer','Payer'),
     30 => array('payer_add','Payer Address'),
     31 => array('cov','Coverage'),
     32 => array('cov_tr','Coverage Translation'),
     33 => array('prov','Provider'),
     34 => array('src','Source'),
     35 => array('start_date', 'Start Date'),
     36 => array('stop_date', 'Stop Date'),
     37 => array('usrid','User ID'),
     38 => array('batchid','Batch ID'),
     39 => array('pat_acc_n','Patient Account #'),
     40 => array('mrn','Medical Record #'),
     41 => array('plan_code','User Def 1 - payer plan code'),
     42 => array('dept','User Def 2 - department'),
     43 => array('ins_type','Ins Type'),
     44 => array('plan_desc','Plan Descr'),
     45 => array('sch_id','User Def 3 - schedule id'),
     46 => array('some','some'),
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/ELP_UNMCCC.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->body = t('HDX Insurance Eligibility');

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

    // send these hdx to uid 1
    $this->addFieldMapping('uid')->defaultValue('1');

    $this->addFieldMapping('field_hdx_status','cov');

    $this->addUnmigratedSources(array(
      'lastname',
      'firstname',
      'middle',
    ));
    $this->addUnmigratedDestinations(array(
      'created',
      'changed',
      'path',
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

    // get the TID for the insurance
   // if (!empty($row->plan_code)) {
    //    $query = new EntityFieldQuery();
    //    $query->entityCondition('entity_type', 'taxonomy_term');
   //     $query->entityCondition('bundle', 'insurance');
   //     $query->propertyCondition('name', $row->plan_code);
    //    $results = $query->execute();
   //     if (!empty($results['taxonomy_term'])) {
   //         $tid = reset($results['taxonomy_term'])->tid;
   //     }else{
   //         // cannot find a tid with that plan code, abort.
   //         watchdog('hdx_migration', "no insurance term: $row->plan_code, $row->sch_id");
   //        return;
   //     }
   // }
   // if ( (!empty($row->sch_id)) and (isset($tid)) ){
    if (!empty($row->sch_id)){
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'schedule');
      $query->entityCondition('bundle', 'schedule');
      $query->fieldCondition('field_schedule_id', 'value', (int)$row->sch_id, '=');
     // $query->fieldCondition('field_insurance_payer_','target_id',$tid);
     // $query->fieldCondition('field_insurance_payer_','value',$tid);
      $results = $query->execute();
      if (!empty($results['schedule'])) {
        $id = reset($results['schedule'])->id;
//        watchdog('hdx_migration', "query matches: $id");
        return($id);
      }else{
       // make a new patient to-do  --- should just run the previous migration...
       // the query should not really get here.
       watchdog('hdx_migration', "no schedule yet : $row->mrn, $row->pat_last_req, $row->sch_id");
       return;
      }
    }else{
        //there is no MRN, this is an orphan order
        watchdog('hdx_migration', "orphan schedule : $row->pat_last_req, $row->mrn");
        return;
    }
    return $id;
  }


}
