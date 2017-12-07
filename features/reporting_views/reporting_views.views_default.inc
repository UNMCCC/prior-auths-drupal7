<?php
/**
 * @file
 * reporting_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reporting_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'schedules_for_aggregate_reporting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_schedule';
  $view->human_name = 'schedules for aggregate reporting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'sch';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_app_date' => 'field_app_date',
    'field_mrn' => 'field_mrn',
    'field_patient_reference' => 'field_patient_reference',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'name' => 'name',
    'field_pa_status' => 'field_pa_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_app_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mrn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_patient_reference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_insurance_payer_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: Patient */
  $handler->display->display_options['fields']['field_patient_reference']['id'] = 'field_patient_reference';
  $handler->display->display_options['fields']['field_patient_reference']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['fields']['field_patient_reference']['field'] = 'field_patient_reference';
  $handler->display->display_options['fields']['field_patient_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_department_tid']['value'] = '';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sch_for_aggregation';

  /* Display: MO-T-JSON */
  $handler = $view->new_display('page', 'MO-T-JSON', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed: Total MedOncs per Day';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medonc-total-day-json';

  /* Display: RO-T-JSON */
  $handler = $view->new_display('page', 'RO-T-JSON', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed: Total Radonc per Day';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'radonc-total-day-json';

  /* Display: MDC-T-JSON */
  $handler = $view->new_display('page', 'MDC-T-JSON', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed: Total Medicares per Day';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medicare-total-day-json';

  /* Display: CH-T-JSON */
  $handler = $view->new_display('page', 'CH-T-JSON', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed: total chemos per day';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'chemo-total-day-json';

  /* Display: MO-C-JSON */
  $handler = $view->new_display('page', 'MO-C-JSON', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed MedOnc Done today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medonc-completed-day-json';

  /* Display: RO-C-JSON */
  $handler = $view->new_display('page', 'RO-C-JSON', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed RadOnc Done today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'radonc-completed-day-json';

  /* Display: MDC-C-JSON */
  $handler = $view->new_display('page', 'MDC-C-JSON', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed Medicare Done today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medicare-complete-day-json';

  /* Display: CH-C-JSON */
  $handler = $view->new_display('page', 'CH-C-JSON', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed chemo Done today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'chemo-completed-day-json';

  /* Display: MO-P-JSON */
  $handler = $view->new_display('page', 'MO-P-JSON', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed MedOnc Processed today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medonc-processed-day-json';

  /* Display: RO-P-JSON */
  $handler = $view->new_display('page', 'RO-P-JSON', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed RadOnc Processed today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'radonc-processed-day-json';

  /* Display: MDC-P-JSON */
  $handler = $view->new_display('page', 'MDC-P-JSON', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed Medicare Processed today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medicare-processed-day-json';

  /* Display: CH-P-JSON */
  $handler = $view->new_display('page', 'CH-P-JSON', 'page_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed Chemo Processed today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'chemo-processed-day-json';

  /* Display: MO-D-JSON */
  $handler = $view->new_display('page', 'MO-D-JSON', 'page_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed MedOnc Denied today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medonc-denied-day-json';

  /* Display: RO-D-JSON */
  $handler = $view->new_display('page', 'RO-D-JSON', 'page_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed RadOnc Denied today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'radonc-denied-day-json';

  /* Display: MDC-D-JSON */
  $handler = $view->new_display('page', 'MDC-D-JSON', 'page_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed Medicare Denied today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medicare-denied-day-json';

  /* Display: CH-D-JSON */
  $handler = $view->new_display('page', 'CH-D-JSON', 'page_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON feed chemo Denied today ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'chemo-denied-day-json';

  /* Display: medicare done */
  $handler = $view->new_display('page', 'medicare done', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Schedule';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_app_date' => 'field_app_date',
    'field_mrn' => 'field_mrn',
    'field_patient_reference1' => 'field_patient_reference1',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_notes' => 'field_notes',
    'name' => 'name',
    'field_pa_status_editable' => 'field_pa_status_editable',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
    'field_reference_id_editable' => 'field_reference_id_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_app_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_app_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mrn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_patient_reference1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_insurance_payer_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reference_id_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'none';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_reference_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff Name (INS VER)';
  /* Field: Schedule: PA Status (editable) */
  $handler->display->display_options['fields']['field_pa_status_editable']['id'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status_editable']['field'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_description'] = 0;
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Field: Reference ID (editable) */
  $handler->display->display_options['fields']['field_reference_id_editable']['id'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['table'] = 'field_data_field_reference_id';
  $handler->display->display_options['fields']['field_reference_id_editable']['field'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  $handler->display->display_options['path'] = 'medicare-schedule-completed';

  /* Display: chemo done */
  $handler = $view->new_display('page', 'chemo done', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Schedules Completed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_app_date' => 'field_app_date',
    'field_mrn' => 'field_mrn',
    'field_patient_reference1' => 'field_patient_reference1',
    'field_patient_reference' => 'field_patient_reference',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_notes' => 'field_notes',
    'name' => 'name',
    'field_pa_status_editable' => 'field_pa_status_editable',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
    'field_reference_id_editable' => 'field_reference_id_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_app_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_app_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mrn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_patient_reference1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_patient_reference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_insurance_payer_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reference_id_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'none';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_reference_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff Name (INS VER)';
  /* Field: Schedule: PA Status (editable) */
  $handler->display->display_options['fields']['field_pa_status_editable']['id'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status_editable']['field'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_description'] = 0;
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Field: Reference ID (editable) */
  $handler->display->display_options['fields']['field_reference_id_editable']['id'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['table'] = 'field_data_field_reference_id';
  $handler->display->display_options['fields']['field_reference_id_editable']['field'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  $handler->display->display_options['path'] = 'chemo-schedule-completed';

  /* Display: radonc */
  $handler = $view->new_display('page', 'radonc', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RadOnc Schedule';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_app_date' => 'field_app_date',
    'field_mrn' => 'field_mrn',
    'field_patient_reference1' => 'field_patient_reference1',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_notes' => 'field_notes',
    'name' => 'name',
    'field_pa_status_editable' => 'field_pa_status_editable',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
    'field_reference_id_editable' => 'field_reference_id_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_app_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_app_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mrn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_patient_reference1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_insurance_payer_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reference_id_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'none';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Schedule: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff Name (INS VER)';
  /* Field: Schedule: PA Status (editable) */
  $handler->display->display_options['fields']['field_pa_status_editable']['id'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status_editable']['field'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_description'] = 0;
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Field: Reference ID (editable) */
  $handler->display->display_options['fields']['field_reference_id_editable']['id'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['table'] = 'field_data_field_reference_id';
  $handler->display->display_options['fields']['field_reference_id_editable']['field'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: PatIDRef (field_patient_reference1) */
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_patient_reference1_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'radonc-schedule';

  /* Display: radonc done */
  $handler = $view->new_display('page', 'radonc done', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RadOnc Schedule - Completed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_app_date' => 'field_app_date',
    'field_mrn' => 'field_mrn',
    'field_patient_reference1' => 'field_patient_reference1',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_notes' => 'field_notes',
    'name' => 'name',
    'field_pa_status_editable' => 'field_pa_status_editable',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
    'field_reference_id_editable' => 'field_reference_id_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_app_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_app_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mrn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_patient_reference1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_insurance_payer_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reference_id_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'none';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff Name (INS VER)';
  /* Field: Schedule: PA Status (editable) */
  $handler->display->display_options['fields']['field_pa_status_editable']['id'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status_editable']['field'] = 'field_pa_status_editable';
  $handler->display->display_options['fields']['field_pa_status_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_pa_status_editable']['suppress_description'] = 0;
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Field: Reference ID (editable) */
  $handler->display->display_options['fields']['field_reference_id_editable']['id'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['table'] = 'field_data_field_reference_id';
  $handler->display->display_options['fields']['field_reference_id_editable']['field'] = 'field_reference_id_editable';
  $handler->display->display_options['fields']['field_reference_id_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_reference_id_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  $handler->display->display_options['path'] = 'radonc-schedule-completed';

  /* Display: radonc audit */
  $handler = $view->new_display('page', 'radonc audit', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RadOnc Schedule - Audit';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appt.  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_reference_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Schedule: Patient */
  $handler->display->display_options['fields']['field_patient_reference']['id'] = 'field_patient_reference';
  $handler->display->display_options['fields']['field_patient_reference']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['fields']['field_patient_reference']['field'] = 'field_patient_reference';
  $handler->display->display_options['fields']['field_patient_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff Name (INS VER)';
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Staff Notes */
  $handler->display->display_options['fields']['field_staff_notes']['id'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['field'] = 'field_staff_notes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  $handler->display->display_options['filters']['field_pa_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pa_status_value']['expose']['operator_id'] = 'field_pa_status_value_op';
  $handler->display->display_options['filters']['field_pa_status_value']['expose']['label'] = 'PA Status ';
  $handler->display->display_options['filters']['field_pa_status_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_pa_status_value']['expose']['operator'] = 'field_pa_status_value_op';
  $handler->display->display_options['filters']['field_pa_status_value']['expose']['identifier'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_pa_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Staff Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Insurance (Payer) (field_insurance_payer_) */
  $handler->display->display_options['filters']['field_insurance_payer__tid']['id'] = 'field_insurance_payer__tid';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['field'] = 'field_insurance_payer__tid';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_insurance_payer__tid']['expose']['operator_id'] = 'field_insurance_payer__tid_op';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['expose']['label'] = 'Insurance (Payer)';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['expose']['operator'] = 'field_insurance_payer__tid_op';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['expose']['identifier'] = 'field_insurance_payer__tid';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_insurance_payer__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_insurance_payer__tid']['vocabulary'] = 'insurance';
  $handler->display->display_options['path'] = 'radonc-schedule-audit';

  /* Display: MO-T-CSV */
  $handler = $view->new_display('views_data_export', 'MO-T-CSV', 'mo_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Total last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medonc-total-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RO-T-CSV */
  $handler = $view->new_display('views_data_export', 'RO-T-CSV', 'ro_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc total since last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'radonc-total-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MDC-T-CSV */
  $handler = $view->new_display('views_data_export', 'MDC-T-CSV', 'mdc_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'medicare total since last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medicare-total-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CH-T-CSV */
  $handler = $view->new_display('views_data_export', 'CH-T-CSV', 'ch_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'chemo total since last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'chemo-total-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-C-CSV */
  $handler = $view->new_display('views_data_export', 'MO-C-CSV', 'mo_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Complete last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medonc-complete-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RO-C-CSV */
  $handler = $view->new_display('views_data_export', 'RO-C-CSV', 'ro_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc Complete last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'radonc-complete-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MDC-C-CSV */
  $handler = $view->new_display('views_data_export', 'MDC-C-CSV', 'mdc_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Complete last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medicare-complete-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CH-C-CSV */
  $handler = $view->new_display('views_data_export', 'CH-C-CSV', 'ch_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Complete last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'chemo-complete-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-P-CSV */
  $handler = $view->new_display('views_data_export', 'MO-P-CSV', 'mo_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Processing last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medonc-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RO-P-CSV */
  $handler = $view->new_display('views_data_export', 'RO-P-CSV', 'ro_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc Processed last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'radonc-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MDC-P-CSV */
  $handler = $view->new_display('views_data_export', 'MDC-P-CSV', 'mdc_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare processed last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: mq_pat_id */
  $handler->display->display_options['fields']['field_mq_pat_id']['id'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['table'] = 'field_data_field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['field'] = 'field_mq_pat_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mq_pat_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'medicare-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CH-P-CSV */
  $handler = $view->new_display('views_data_export', 'CH-P-CSV', 'ch_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo processed last day CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment  Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'chemo-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggCH-P-CSV */
  $handler = $view->new_display('views_data_export', 'aggCH-P-CSV', 'agg_ch_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo processed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-chemo-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggMO-P-CSV */
  $handler = $view->new_display('views_data_export', 'aggMO-P-CSV', 'agg_mo_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc processed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-medonc-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggRO-P-CSV */
  $handler = $view->new_display('views_data_export', 'aggRO-P-CSV', 'agg_ro_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc processed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-radonc-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggMDC-P-CSV */
  $handler = $view->new_display('views_data_export', 'aggMDC-P-CSV', 'agg_mdc_proc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare processed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Medical Necessity' => 'Medical Necessity',
    'No Orders' => 'No Orders',
    'No PA Needed' => 'No PA Needed',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-medicare-processed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggMO-C-CSV */
  $handler = $view->new_display('views_data_export', 'aggMO-C-CSV', 'agg_mo_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc completed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-medonc-completed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggRO-C-CSV */
  $handler = $view->new_display('views_data_export', 'aggRO-C-CSV', 'agg_ro_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc completed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-radonc-completed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggMDC-C-CSV */
  $handler = $view->new_display('views_data_export', 'aggMDC-C-CSV', 'agg_mdc_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare completed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-medicare-completed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggCH-C-CSV */
  $handler = $view->new_display('views_data_export', 'aggCH-C-CSV', 'agg_ch_c');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo completed last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appeal Won' => 'Appeal Won',
    'Appeal Lost' => 'Appeal Lost',
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
  );
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-chemo-completed-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggCH-T-CSV */
  $handler = $view->new_display('views_data_export', 'aggCH-T-CSV', 'agg_ch_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo total added last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['label'] = 'Added';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '702',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-chemo-added-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggMO-T-CSV */
  $handler = $view->new_display('views_data_export', 'aggMO-T-CSV', 'agg_mo_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc total added last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['label'] = 'Added';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '704',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-mo-added-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: aggRO-T-CSV */
  $handler = $view->new_display('views_data_export', 'aggRO-T-CSV', 'agg_ro_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc total added last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['label'] = 'Added';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '706',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-ro-added-day.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: agMDC-T-CSV */
  $handler = $view->new_display('views_data_export', 'agMDC-T-CSV', 'agg_mdc_t');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare total added last day CSV';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Schedule: Appointment Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Appointments';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: Schedule: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['label'] = 'Added';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Ymd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Schedule: Department (Specialty) (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '703',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (Specialty) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'agg-mdc-added-day.csv';
  $handler->display->display_options['sitename_title'] = 0;
  $export['schedules_for_aggregate_reporting'] = $view;

  return $export;
}
