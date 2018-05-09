<?php
/**
 * @file
 * labs_entity.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function labs_entity_eck_bundle_info() {
  $items = array(
    'labs_labs' => array(
      'machine_name' => 'labs_labs',
      'entity_type' => 'labs',
      'name' => 'labs',
      'label' => 'Labs',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function labs_entity_eck_entity_type_info() {
  $items = array(
    'labs' => array(
      'name' => 'labs',
      'label' => 'Labs',
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
