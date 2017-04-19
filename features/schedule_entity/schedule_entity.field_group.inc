<?php
/**
 * @file
 * schedule_entity.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function schedule_entity_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_read_only|node|order|form';
  $field_group->group_name = 'group_read_only';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Read Only',
    'weight' => '2',
    'children' => array(
      0 => 'field_start_date',
      1 => 'field_drug',
      2 => 'field_schedule_ref',
      3 => 'field_patient_ref',
      4 => 'field_order_id',
      5 => 'field_insurance_payer_',
      6 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Read Only',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '<div class="messages warning">Do not edit any of these fields.</div>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_read_only|schedule|schedule|form';
  $field_group->group_name = 'group_read_only';
  $field_group->entity_type = 'schedule';
  $field_group->bundle = 'schedule';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Read Only',
    'weight' => '8',
    'children' => array(
      0 => 'field_patient_reference',
      1 => 'field_app_date',
      2 => 'field_activity',
      3 => 'field_location',
      4 => 'field_insurance_payer_',
      5 => 'field_department',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-read-only field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Read Only');

  return $field_groups;
}
