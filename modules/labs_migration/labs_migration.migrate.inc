<?php

/**
 * @file
 * Migrate module integration with the Labs Migration module.
 */

/**
 * Implements hook_migrate_api().
 */
function labs_migration_migrate_api() {
  $info = array(
    'api' => 2,
    'groups' => array(
      LABS_MIGRATION_GROUP => array(
        'title' => t('Labs Migration from CSV'),
      ),
    ),
    'migrations' => array(
      'ContentLabsPatient' => array(
        'class_name' => 'ContentLabsPatientMigration',
      ),
      'ContentLabsPastDupesPatient' => array(
        'class_name' => 'ContentLabsPastDupesPatientMigration',
      ),
      'EntityLabs' => array(
        'class_name' => 'EntityLabsMigration',
      ),
      'EntityLabsPastDupes' => array(
        'class_name' => 'EntityLabsPastDupesMigration',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = LABS_MIGRATION_GROUP;
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
