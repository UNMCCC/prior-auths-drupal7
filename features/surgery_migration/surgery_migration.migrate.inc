<?php

/**
 * @file
 * Migrate module integration with the Surgery Migration module.
 */

/**
 * Implements hook_migrate_api().
 */
function surgery_migration_migrate_api() {
  $info = array(
    'api' => 2,
    'groups' => array(
      SURGERY_MIGRATION_GROUP => array(
        'title' => t('Surgery Migration from CSV'),
      ),
    ),
    'migrations' => array(
      'ContentSurgeryPatient' => array(
        'class_name' => 'ContentSurgeryPatientMigration',
      ),
      'EntitySurgery' => array(
        'class_name' => 'EntitySurgeryMigration',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = SURGERY_MIGRATION_GROUP;
  }

  // Allow other modules to alter our migration classes.
  $overrides = module_invoke_all('surgery_migration_overrides');
  foreach ($overrides as $machine_name => $override) {
    if (isset($info['migrations'][$machine_name])) {
      $info['migrations'][$machine_name] = $override + $info['migrations'][$machine_name];
    }
  }

  return $info;
}
