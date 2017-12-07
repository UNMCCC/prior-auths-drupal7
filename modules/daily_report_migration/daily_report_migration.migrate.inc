<?php

/**
 * @file
 * Migrate module integration with the Report Migration module.
 */

/**
 * Implements hook_migrate_api().
 */
function daily_report_migration_migrate_api() {
  $info = array(
    'api' => 2,
    'groups' => array(
      DAILY_REPORT_MIGRATION_GROUP => array(
        'title' => t('Daily Report Migration from microCSVs'),
      ),
    ),
    'migrations' => array(
      'EntityDailyReport' => array(
        'class_name' => 'EntityDailyReportMigration',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = DAILY_REPORT_MIGRATION_GROUP;
  }

  // Allow other modules to alter our migration classes.
  $overrides = module_invoke_all('daily_report_migration_overrides');
  foreach ($overrides as $machine_name => $override) {
    if (isset($info['migrations'][$machine_name])) {
      $info['migrations'][$machine_name] = $override + $info['migrations'][$machine_name];
    }
  }

  return $info;
}
