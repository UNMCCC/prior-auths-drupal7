<?php
/**
 * @file
 * surgery_orders.features.inc
 */

/**
 * Implements hook_views_api().
 */
function surgery_orders_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function surgery_orders_eck_bundle_info() {
  $items = array(
    'surgery_orders_surgery_orders' => array(
      'machine_name' => 'surgery_orders_surgery_orders',
      'entity_type' => 'surgery_orders',
      'name' => 'surgery_orders',
      'label' => 'Surgery Orders',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function surgery_orders_eck_entity_type_info() {
  $items = array(
    'surgery_orders' => array(
      'name' => 'surgery_orders',
      'label' => 'Surgery Orders',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
