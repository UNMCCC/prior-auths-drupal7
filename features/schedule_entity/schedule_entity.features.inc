<?php
/**
 * @file
 * schedule_entity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schedule_entity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function schedule_entity_eck_bundle_info() {
  $items = array(
    'schedule_schedule' => array(
      'machine_name' => 'schedule_schedule',
      'entity_type' => 'schedule',
      'name' => 'schedule',
      'label' => 'Schedule',
      'config' => array(
        'managed_properties' => array(
          'changed' => 'changed',
          'uid' => 0,
          'created' => 0,
        ),
      ),
    ),
  );
  return $items;
}
