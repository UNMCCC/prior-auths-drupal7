<?php
/**
 * @file
 * order_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function order_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit|node|order|form';
  $field_group->group_name = 'group_edit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit these',
    'weight' => '2',
    'children' => array(
      0 => 'group_order_details',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-edit field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_edit|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_details|node|order|form';
  $field_group->group_name = 'group_order_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit';
  $field_group->data = array(
    'label' => 'Order details',
    'weight' => '4',
    'children' => array(
      0 => 'field_reference_id',
      1 => 'field_pa_status',
      2 => 'field_auth_number',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-order-details field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_order_details|node|order|form'] = $field_group;

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
    'label' => 'Read only',
    'weight' => '6',
    'children' => array(
      0 => 'field_order_status',
      1 => 'field_drug',
      2 => 'field_order_id',
      3 => 'field_start_date',
      4 => 'field_patient_ref',
      5 => 'field_insurance_payer_',
      6 => 'field_schedule_ref',
      7 => 'title',
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
  $field_groups['group_read_only|node|order|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Edit these');
  t('Order details');
  t('Read only');

  return $field_groups;
}
