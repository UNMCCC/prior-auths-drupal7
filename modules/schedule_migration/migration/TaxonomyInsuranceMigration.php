<?php
/**
 * @file
 * Definition of TaxonomyInsuranceMigration.
 * For now, this will assume that you
 * created one csv file with all your
 * Payers
 * You may have done something like
 * SELECT Distinct General_Primary_Payer_Name
 * FROM  vw_PatientInsurances 
 * WHERE General_Primary_Payer_Name is NOT NULL
 * ORDER BY General_Primary_Payer_Name
 */
class TaxonomyInsuranceMigration extends Migration {
  protected $dependencies = array();
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $options = array(); 
    $options['header_rows'] = 0; 
    $options['delimiter'] = ","; 
    $columns = array(
      0 => array('keyword', 'The Payer Name'),
   );
    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/insurances.csv';
    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->description = t('Schedule migration for the payers');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'keyword' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'the uniqu payer name found in the mosaiq view patient insurances',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->destination = new MigrateDestinationTerm('insurance');
    $this->addFieldMapping('name', 'keyword');
  }
}

