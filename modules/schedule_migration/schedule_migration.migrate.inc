<?php

/**
 * @file
 * Migrate module integration with the Schedule Migration module.
 */

/**
 * Implements hook_migrate_api().
 */
function schedule_migration_migrate_api() {
  $info = array(
    'api' => 2,
    'groups' => array(
      SCHEDULE_MIGRATION_GROUP => array(
        'title' => t('Schedule Migration from CSV'),
      ),
    ),
    'migrations' => array(
      'TaxonomyInsurance' => array(
        'class_name' => 'TaxonomyInsuranceMigration',
      ),
      'TaxonomyActivityMedOnc' => array(
        'class_name' => 'TaxonomyActivityMedOncMigration',
      ),
      'TaxonomyActivityMedicare' => array(
        'class_name' => 'TaxonomyActivityMedicareMigration',
      ),
      'ContentPatient' => array(
        'class_name' => 'ContentPatientMigration',
      ),
      'ContentPatientFromOrders' => array(
        'class_name' => 'ContentPatientOrderMigration',
      ),
      'EntityMedicareSchedule' => array(
        'class_name' => 'EntityScheduleMedicareMigration',
      ),
      'EntityMedOncSchedule' => array(
        'class_name' => 'EntityScheduleMedOncMigration',
      ),
      'EntityChemoSchedule' => array(
        'class_name' => 'EntityScheduleChemoMigration',
      ),
      'ContentOrder' => array(
        'class_name' => 'ContentOrderMigration',
      ),      
      'ContentOrderSameday' => array(
        'class_name' => 'ContentOrderSamedayMigration',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = SCHEDULE_MIGRATION_GROUP;
  }

  // Allow other modules to alter our migration classes.
  $overrides = module_invoke_all('schedule_migration_overrides');
  foreach ($overrides as $machine_name => $override) {
    if (isset($info['migrations'][$machine_name])) {
      $info['migrations'][$machine_name] = $override + $info['migrations'][$machine_name];
    }
  }

  return $info;
}
