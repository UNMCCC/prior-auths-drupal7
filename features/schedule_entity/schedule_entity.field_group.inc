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
  $field_group->identifier = 'group_read_only|schedule|schedule|form';
  $field_group->group_name = 'group_read_only';
  $field_group->entity_type = 'schedule';
  $field_group->bundle = 'schedule';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Read Only',
    'weight' => '5',
    'children' => array(
      0 => 'field_activity',
      1 => 'field_app_date',
      2 => 'field_department',
      3 => 'field_insurance_payer_',
      4 => 'field_location',
      5 => 'field_notes',
      6 => 'field_patient_reference',
      7 => 'field_patient_reference1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-read-only field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_read_only|schedule|schedule|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Read Only');

  return $field_groups;
}
