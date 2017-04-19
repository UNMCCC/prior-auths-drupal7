<?php
/**
 * @file
 * patient_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function patient_content_type_node_info() {
  $items = array(
    'patient' => array(
      'name' => t('Patient'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
