<?php
/**
 * @file
 * Definition of EntitySurgeryMigration.
 */
class EntitySurgeryMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 1;  //To-do, tweak source to add header
    $options['delimiter'] = ",";
    $columns = array(
       0 => array('pat_name','The patient name'),
       1 => array('mrn','The Patient MRN'),
       2 => array('fin','Ignore Fin'),
       3 => array('location','Ignore loc'),
       4 => array('proc_name','The order name as in Cerner'),
       5 => array('activity_type', 'Ignore The activity'),
       6 => array('date_of_surgery', 'The scheduled date of surgery'),
       7 => array('order_details','The order details'),
       8 => array('order_date', 'The create date for the order'),
       9 => array('order_status', 'Ignore The Cerner status'),
       10 => array('completed_by','Ignore the Completed by'),
       11 => array('completed_date','Ignore this date'),
       12 => array('ins_provider', 'The insurance provider (ref)'),
       13 => array('ins_ver', 'Ignore the Ins Ver'),
       14 => array('pcc_notes','Ignore notes'),
       15 => array('surg_key','the key'),
       16 => array('pat_nid','to be used to linkout'),
       17 => array('first','first name placeholder'),
       18 => array('last','last name placeholder'),
       19 => array('middle','middle name placeholder'),
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/surgeries/Surgery.csv';

    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->body = t('CSV Surgery Orders');

    $this->destination = new MigrateDestinationEntityAPI('surgery_orders','surgery_orders');

    // Tell Migrate the unique IDs for this migration live - watch for multiple appts.
    $source_key_schema = array('surg_key' => array(
        'type' => 'varchar',
        'length' => '512',
        'not null' => TRUE,
        'description' => 'the order id name is the key',
      ),
    );

    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema('surgery_orders'));
    $this->addFieldMapping('field_surg_order_schedule_date', 'date_of_surgery'); // may need to work on
    $this->addFieldMapping('field_surg_order_create_date', 'order_date');        // need work, this is a term ref!!
    $this->addFieldMapping('field_insurance_payer_', 'ins_provider') 
      ->description('lookup insurance term in prepareRow');                      // spin off term ref, or not?
    $this->addFieldMapping('field_patient_reference1', 'pat_nid')
      ->description('lookup existing identifiers or create one in prepareRow');  // UNSURE this works, pat_id1 undef.
    $this->addFieldMapping('field_s_o_pa_status')->defaultValue('None');
    $this->addFieldMapping('field_surg_proc_name_termref', 'proc_name')
      ->description('filter certain cases in preparerow');                       //this is also a term ref!!
    $this->addFieldMapping('field_surg_order_details', 'order_details');
    $this->addFieldMapping('uid')->defaultValue('296');


    $this->addUnmigratedSources(array(
      'mrn',
      'pat_name',
      'fin',
      'location',
      'activity_type',
      'completed_by',
      'order_status',
      'ins_ver',
      'completed_date',
      'pcc_notes',
    ));
    $this->addUnmigratedDestinations(array(
      'created',
      'changed',
      'path',
      'id',
      'type',
      'field_surg_order_schedule_date:timezone',//   Timezone
      'field_surg_order_schedule_date:rrule',  //        Recurring event rule
      'field_surg_order_schedule_date:to',     //	End date date
      'field_surg_proc_name_termref:source_type',	//Option: Set to 'tid' when the value is a source ID
      'field_surg_proc_name_termref:create_term',	//Option: Set to TRUE to create referenced terms when necessary
      'field_surg_proc_name_termref:ignore_case',
      'field_surg_order_create_date:timezone',	      // Timezone
      'field_surg_order_create_date:rrule',	//  Recurring event rule
      'field_surg_order_create_date:to',	//  End date date
      'field_insurance_payer_:source_type',     //  Option: Set to 'tid' when the value is a source ID
      'field_insurance_payer_:create_term',
      'field_insurance_payer_:ignore_case',
      'field_staff_notes',
    ));
  }

  /**
  * Prepare a proper unique key.
  */
  public function prepareKey($key, $row) {
    $key = array();
    $row->surg_key = $row->mrn . $row->date_of_surgery . $row->fin;
    $key['surg_key'] = $row->surg_key;
    return $key;
  }
  public function prepareRow($row) {

    parent::prepareRow($row);

    // Filter out some procedures.
    switch ($row->proc_name) {
      case 'OSIS CT Scan PA/Referral':
      case 'OSIS Mammography PA/Referral':
      case 'OSIS MRI PA/Referral':
      case 'OSIS Spec Proc PA/Referral':
      case 'OSIS Ultrasound PA/Referral':
      case 'RAD CT-MRI-NM.Pet-FL PA Referral':
      case 'RAD Outpt Interventional PA/Referral':
      case 'RAD Gen Radiology PA/Referral':
      case 'RAD Inpt Interventional PA/Referral':
      case 'RAD Spec Proc/Vasc PA/Referral':
      case 'SRMC Interventional Radiology PA/Referral':
        $this->queueMessage('Procedure not considered', MigrationBase::MESSAGE_INFORMATIONAL);
        return FALSE;
        break;
    }
    //dates
    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->date_of_surgery, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->date_of_surgery, $matches)){
       $row->date_of_surgery = $row->date_of_surgery . ' 12:00:00 PM';
    }

    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->order_date, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->order_date, $matches)){
       $row->order_date = $row->order_date . ' 12:00:00 PM';
    }

    // parse name parts -- Always like "Last name, First M"
    $fname = explode(',',$row->pat_name);  // separate last name
    $row->last = $fname[0];
    $firstmiddle = explode(' ', trim($fname[1])); //deal with first name
    $sizename = count($firstmiddle);
      // The name comes as a full string.  Good luck parsing parts!
    if($sizename == 1){ // 1 els (one is a space)
        $row->first = $firstmiddle[0];
    }elseif($sizename ==2){
        if (strlen($firstmiddle[1]) <= 2) { // chances this is a middle name
            $row->first  = $firstmiddle[0];
            $row->middle = $firstmiddle[1];
        }else{
            $row->first  = $firstmiddle[0] . ' ' . $firstmiddle[1];
        }
    }elseif($sizename >=3){
        for($fi=0; $fi < ($sizename-1); $fi++){
            if($fi>0){
                $row->first .= $firstmiddle[$fi] . ' ';
            }
            $row->first  = $row->first . ' ' . $firstmiddle[$fi] ;
        }
        $row->middle = $fname[$sizename];
    }
    // Is there a patient associated with the source pat name?
    $nid = $this->getPatient($row);
    if(is_array($nid)){
       $row->pat_nid = $nid;
       $row->pat_nid = $this->getExistingPatientMRN($row);
       return;
    }


  }
  
  

  public function getPatient($row) {
      // query database here, match with $row element, if exists, return false.
      // Search for an already migrated person.
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'patient');
      $query->fieldCondition('field_given_name', 'value', $row->first, '=');
      $query->fieldCondition('field_last_name', 'value', $row->last, '=');
      if ($row->middle){
            $query->fieldCondition('field_middle_name', 'value', $row->middle, '=');
           
      }
      $results = $query->execute();
      if (!empty($results['node'])) {
        
          return array_keys($results['node']);
      }
  }

  public function getExistingPatientMRN($row) {
      $nids = $row->pat_nid;
      foreach ($nids as $nid) {
           $node = node_load($nid, NULL, TRUE);

           if ($node->field_mrn[LANGUAGE_NONE][0]['value'] == $row->mrn){
               $this->queueMessage("Pat node matches MRN", MigrationBase::MESSAGE_INFORMATIONAL);
               return $nid;
           }else{
               dpm($node->field_mrn[LANGUAGE_NONE][0]['value']); dpm($row->mrn);
               $this->queueMessage("Pat node doesnt match MRN", MigrationBase::MESSAGE_INFORMATIONAL);
           }
           return;
      }
  }
  
}
