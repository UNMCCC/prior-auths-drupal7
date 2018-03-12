<?php

/**
 * @file
 * Migrate module integration with the Schedule Migration module.
 */

/**
 * Implements hook_migrate_api().
 */
function hdx_migration_migrate_api() {
  $info = array(
    'api' => 2,
    'groups' => array(
      HDX_MIGRATION_GROUP => array(
        'title' => t('HDX Migration from CSV'),
      ),
    ),
    'migrations' => array(
      'EntityHdx' => array(
        'class_name' => 'EntityHdxMigration',
      ),
      'EntityEligibilityStatusMQ' => array(
        'class_name' => 'EntityEligibilityStatusMQMigration',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = HDX_MIGRATION_GROUP;
  }

  // Allow other modules to alter our migration classes.
  $overrides = module_invoke_all('hdx_migration_overrides');
  foreach ($overrides as $machine_name => $override) {
    if (isset($info['migrations'][$machine_name])) {
      $info['migrations'][$machine_name] = $override + $info['migrations'][$machine_name];
    }
  }

  return $info;
}
