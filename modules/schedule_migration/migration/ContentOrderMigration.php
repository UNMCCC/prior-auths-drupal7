<?php

/**
 * @file
 * Definition of ContentOrderMigration.
 * For now, this will assume that you
 * downloaded all the datasource files in
 * destination.
 */

class ContentOrderMigration extends Migration {
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
      4 => array('last_name', 'The patient name'),
      5 => array('first_name', 'The patient name'),
      6 => array('middle_name', 'The patient name'),
      7 => array('payer', 'The insurer'),
      8 => array('order_description', 'The order description'),
      9 => array('order_status', 'The order status'),
      10 => array('orc_id_drug', 'Dummy field'),
      11 => array('sch_id', 'Dummy field'),
   );

   $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/orders.csv';

   $this->source = new MigrateSourceCSV($csv_file, $columns, $options);

   $this->description = t('CSV order feed from MQ todays orders');

   $this->map = new MigrateSQLMap($this->machineName,
      array(
        'orc_id_drug' => array(
          'type' => 'varchar',
          'length' => '512',
          'not null' => TRUE,
          'description' => 'the order id name is the key',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->destination = new MigrateDestinationNode('order');

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('log')->defaultValue('Migrated from CSV Mq todays orders');
    $this->addFieldMapping('title','orc_id_drug');
    $this->addFieldMapping('field_patient_ref', 'pat_id1')
       ->description('lookup existing pat_id1s, or create one in prepareRow');
    $this->addFieldMapping('field_schedule_ref', 'sch_id')
       ->description('lookup existing chemo schedules');
    $this->addFieldMapping('field_start_date','start_date'); // @todo  prepare date
    $this->addFieldMapping('field_drug','order_description'); 
    $this->addFieldMapping('field_order_status','order_status');
    $this->addFieldMapping('field_order_id','orc_id');
    $this->addFieldMapping('field_insurance_payer_', 'payer');

    $this->addUnmigratedSources(array(
      'mrn',            // encrypted.
      'first_name',    // The patient frist name
      'last_name',    // The patient last name
      'middle_name',    // The patient's middle name
    ));

    $this->addUnmigratedDestinations(array(
       'field_start_date:timezone',          //	Timezone
       'field_start_date:rrule',             //	Recurring event rule
       'field_start_date:to',
       'path',
       'created',
       'changed',
       'comment',
       'language',               //   Language (fr, en, ...)
       'tnid',                   //   The translation set id for this node
       'translate',	         //   A boolean indicating whether this translation page needs to be updated
       'revision_uid',	         //   Modified (uid)
       'is_new',
    ));
  }

  /**
   * Prepare a proper unique key.
   */
  public function prepareKey($key, $row) {
    $key = array();
    $row->orc_id_drug = $row->orc_id . $row->order_description;
    $key['orc_id_drug'] = $row->orc_id_drug;
    return $key;
  }

  public function prepareRow($row) {

     parent::prepareRow($row);
    // Is there a pat ID?
    $patid = $this->getPatID($row);
    $row->pat_id1 = $patid;

    // Is there a chemo sch?
    $schid = $this->getSchID($patid);
    $row->sch_id = $schid;
  }

  public function getPatID($row) {
    // query database here, match with $row element, 
    // return nid for this person, otherwise false.
    //$field_values = array();

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
        return($nid);
      }else{
       // make a new patient to-do
        watchdog('schedule_migration', "no MRN match: $row->mrn");
      } 
    }else{
        //there is no MRN, this is an orphan order
        watchdog('schedule_migration', "orphan order: $row->create_date, $row->drug");
    }
    return;
  }

  public function getSchID($patid) {
        // query database here, match with $row element,
        // return nid for this person, otherwise false.
        // Search for an already migrated schedule entity with the same DOS
        // use the NID recently retrieved for the sch id.

        if ($patid) {
//            $sdate = (str)$row->start_date;
            $query = new EntityFieldQuery();
            $query->entityCondition('entity_type', 'schedule');
            $query->entityCondition('bundle', 'schedule');
            $query->fieldCondition('field_patient_reference1', 'target_id', $patid, '=');
            $results = $query->execute();
            //HERE
            if (!empty($results['schedule'])) {
                $id = reset($results['schedule'])->id;
                return($id);
            }else{
                // make a new patient to-do
                watchdog('schedule_migration', "no sch match: $row->start_date");
            }
        }else{
            //there is no MRN, this is an orphan order
            watchdog('schedule_migration', "orphan order: $row->create_date, $row->drug");
        }
        return;
  }
}
