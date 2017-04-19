<?php
/**
 * @file
 * Definition of TaxonomyActivityMedicareMigration.
 * For now, this will assume that you
 * created one csv file with all your activities
 * 
 * You filter out activities from Excel, out them
 * in server.
 */
class TaxonomyActivityMedicareMigration extends Migration {
  protected $dependencies = array();
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $options = array(); 
    $options['header_rows'] = 0; 
    $options['delimiter'] = ","; 
    $columns = array(
      0 => array('keyword', 'The obscure activity code'),
   );
    $csv_file = DRUPAL_ROOT . '/' . 'sites/default/files/imports/activitymedicare.csv';
    $this->source = new MigrateSourceCSV($csv_file, $columns, $options);
    $this->description = t('Schedule migration for the medicare activity codes');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'keyword' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'the unique term for activity',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->destination = new MigrateDestinationTerm('activity');
    $this->addFieldMapping('name', 'keyword');
  }
}

