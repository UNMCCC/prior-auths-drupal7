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
      'ContentPatient' => array(
        'class_name' => 'ContentPatientMigration',
      ),
      'EntitySchedule' => array(
        'class_name' => 'EntityScheduleMigration',
      ),
      'ContentOrder' => array(
        'class_name' => 'ContentOrderMigration',
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
