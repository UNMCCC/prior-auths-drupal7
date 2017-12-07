<?php
/**
 * @file
 * daily_report_entity.features.inc
 */

/**
 * Implements hook_eck_entity_type_info().
 */
function daily_report_entity_eck_entity_type_info() {
  $items = array(
    'daily_report' => array(
      'name' => 'daily_report',
      'label' => 'Daily Report',
      'properties' => array(),
    ),
  );
  return $items;
}
