<?php
/**
 * @file
 * pa_daily_productivity_bundles.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function pa_daily_productivity_bundles_eck_bundle_info() {
  $items = array(
    'pa_daily_reports_chemo_daily' => array(
      'machine_name' => 'pa_daily_reports_chemo_daily',
      'entity_type' => 'pa_daily_reports',
      'name' => 'chemo_daily',
      'label' => 'Chemo Daily',
      'config' => array(),
    ),
    'pa_daily_reports_medicare_daily' => array(
      'machine_name' => 'pa_daily_reports_medicare_daily',
      'entity_type' => 'pa_daily_reports',
      'name' => 'medicare_daily',
      'label' => 'Medicare Daily',
      'config' => array(),
    ),
    'pa_daily_reports_mo_daily' => array(
      'machine_name' => 'pa_daily_reports_mo_daily',
      'entity_type' => 'pa_daily_reports',
      'name' => 'mo_daily',
      'label' => 'MO Daily',
      'config' => array(),
    ),
    'pa_daily_reports_pa_daily_reports' => array(
      'machine_name' => 'pa_daily_reports_pa_daily_reports',
      'entity_type' => 'pa_daily_reports',
      'name' => 'pa_daily_reports',
      'label' => 'PA Daily Reports',
      'config' => array(),
    ),
    'pa_daily_reports_ro_daily' => array(
      'machine_name' => 'pa_daily_reports_ro_daily',
      'entity_type' => 'pa_daily_reports',
      'name' => 'ro_daily',
      'label' => 'RO Daily',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function pa_daily_productivity_bundles_eck_entity_type_info() {
  $items = array(
    'pa_daily_reports' => array(
      'name' => 'pa_daily_reports',
      'label' => 'PA Daily Reports',
      'properties' => array(),
    ),
  );
  return $items;
}
