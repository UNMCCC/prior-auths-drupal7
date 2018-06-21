<?php
/**
 * @file
 * Definition of ContentSurgeryPatientMigration.
 * For now, this will assume that you
 * downloaded all the scanned note files in
 * imports folder or destination
 */

class ContentSurgeryPatientMigration extends Migration {
  protected $dependencies = array();
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $options = array();
    $options['header_rows'] = 1;
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
       15 => array('surg_key','uniquer key placeholder'),
       16 => array('first','first name placeholder'),
       17 => array('last','last name placeholder'),
       18 => array('middle','middle name placeholder'),
    );

    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/surgeries/Surgery.csv';
    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->body = t('CSV Surgery Orders');

    $this->map = new MigrateSQLMap($this->machineName,
      array('surg_key' => array(
        'type' => 'varchar',
        'length' => '512',
        'not null' => TRUE,
        'description' => 'the order id name is the key',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->destination = new MigrateDestinationNode('patient');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_given_name','first')
        ->description('prepareRow');
    $this->addFieldMapping('field_last_name','last')
        ->description('prepareRow');
    $this->addFieldMapping('field_middle_name','middle')
        ->description('prepareRow');
    $this->addFieldMapping('field_mrn','mrn');
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('log')->defaultValue('Migrated from CSV Cerner Surgery Orders');

    $this->addUnmigratedSources(array(
       'pat_name',
       'fin',
       'proc_name',
       'activity_type',
       'completed_by',
       'order_status',
       'ins_ver',
       'ins_provider',
       'date_of_surgery',
       'order_details',
       'order_date',
       'completed_date',
       'pcc_notes',
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
      'field_mq_pat_id',
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
    //date
    if(preg_match('/\d+\/\d+\/\d+\s\d+/',$row->date, $matches)){
    } else if(preg_match('/\d+\/\d+\/\d+/',$row->date, $matches)){
      $row->date = $row->date . ' 12:00:00 PM';
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
    // do we have this patient?
    $mrn = $this->getPatient($row);
    if(is_array($mrn)){
      $row->nids = $mrn;
      $mrn = $this->getExistingPatientMRN($row);
      return FALSE;
    }else{
      $row->mrn = $mrn;
      return TRUE;
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
    }else{
      $mrn = $row->mrn;
      return $mrn;
    }
  }
  public function getExistingPatientMRN($row) {
    $nids = $row->nids;
    foreach ($nids as $nid) {
      $node = node_load($nid, NULL, TRUE);

      if ($node->field_mrn[LANGUAGE_NONE][0]['value'] == $row->mrn){
          return;
      }else{
          $mssg = 'getExistingPatient:' . $nid . ' node DOES not matches MRN ' . $row->mrn;
          $this->queueMessage($mssg, MigrationBase::MESSAGE_INFORMATIONAL);
      }
      return;
    }
  }
  public function prepare($node, $row) {

    // Force the auto_entitylabel module to leave $node->title alone.
    $node->auto_entitylabel_applied = TRUE;

  }
}
