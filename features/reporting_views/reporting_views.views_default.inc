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
  $view->name = 'reports_splash_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reports Splash Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administrative Splash Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '3';

  /* Display: Report-Page */
  $handler = $view->new_display('page', 'Report-Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reports Splash Page';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '16546';
  $handler->display->display_options['path'] = 'admin/reports';
  $export['reports_splash_page'] = $view;

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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status (editable) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status (editable) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status (editable) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status (editable) */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Field: Field: PA Status */
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
  /* Field: Schedule: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: PA Status */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  /* Field: Field: PA Status */
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Ch Proc';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total MO Proc';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total RO Proc';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total medicare Proc';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total MO completed';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total RO Completed';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Medicare Completed';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Chemo Completed';
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
  /* Filter criterion: Field: PA Status (field_pa_status) */
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Chemo Added';
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Mo Added';
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total RO Added';
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
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Total Medicare Added';
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

  $view = new view();
  $view->name = 'stats_same_day_order';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stats Same Day Order';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Total number of orders posted on the day of service';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Total Same Day Orders';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order' => 'order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'The following table shows in each row, the total of numbers of orders created on the same day the patient is scheduled to receive service. This could be problematic for orders that require authorization, as it is often virtually impossible to request and receive authorization in a matter of hours (Order prior authorization process requires typically about three days).  Note, some orders are OK to be placed during the same day, per medical necessity (hydration, etc). ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'reports/stats-same-day-order';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'stats-same-day-orders.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );

  /* Display: BlockGrphTotOrdersOverTime */
  $handler = $view->new_display('block', 'BlockGrphTotOrdersOverTime', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['label_field'] = 'created';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'title' => 'title',
    'created' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'created' => '#2f7ed8',
    'title' => '#205891',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Number Same Day Order over Time';
  $export['stats_same_day_order'] = $view;

  $view = new view();
  $view->name = 'sum_completed_v_proc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_daily_report';
  $view->human_name = 'SUM Completed v Proc';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Radonc Percent  Completed vs Proc';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '100';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'expression' => 'expression',
    'field_radonc_completed' => 0,
    'field_radonc_processed' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_radonc_completed' => '#910000',
    'field_radonc_processed' => '#8bbc21',
    'expression' => '#8bbc21',
  );
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_completed]/[field_radonc_processed])*100';
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: RadOnc Processed (field_radonc_processed) */
  $handler->display->display_options['filters']['field_radonc_processed_value']['id'] = 'field_radonc_processed_value';
  $handler->display->display_options['filters']['field_radonc_processed_value']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['filters']['field_radonc_processed_value']['field'] = 'field_radonc_processed_value';
  $handler->display->display_options['filters']['field_radonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_radonc_processed_value']['value']['value'] = '0';

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['path'] = 'master-completed-v-proc';

  /* Display: TableCvP */
  $handler = $view->new_display('page', 'TableCvP', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_radonc_completed' => 'field_radonc_completed',
    'field_radonc_processed' => 'field_radonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_radonc_completed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_radonc_processed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_completed]/[field_radonc_processed])*100';
  $handler->display->display_options['path'] = 'reports/RadOncPctComplvsProcessed';

  /* Display: CsvTvP */
  $handler = $view->new_display('views_data_export', 'CsvTvP', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'pcntRadCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'page_5' => 0,
    'block_4' => 0,
    'page_6' => 0,
    'block_5' => 0,
  );

  /* Display: Graph CvP */
  $handler = $view->new_display('page', 'Graph CvP', 'page_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['path'] = 'reports/sum-completed-v-proc';

  /* Display: Block GphCvP */
  $handler = $view->new_display('block', 'Block GphCvP', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_completed]/[field_radonc_processed])*100';
  $handler->display->display_options['block_description'] = 'GrphCvP';

  /* Display: MOTableCvP */
  $handler = $view->new_display('page', 'MOTableCvP', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_completed]/[field_medonc_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Processed (field_medonc_processed) */
  $handler->display->display_options['filters']['field_medonc_processed_value']['id'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['filters']['field_medonc_processed_value']['field'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/MedOncPctComplvsProcessed';

  /* Display: MoCsvCvP */
  $handler = $view->new_display('views_data_export', 'MoCsvCvP', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent  Completed vs Proc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_completed]/[field_medonc_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Processed (field_medonc_processed) */
  $handler->display->display_options['filters']['field_medonc_processed_value']['id'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['filters']['field_medonc_processed_value']['field'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntMedoncCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block MOGphCvP */
  $handler = $view->new_display('block', 'Block MOGphCvP', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent  Completed vs Proc';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_completed]/[field_medonc_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Processed (field_medonc_processed) */
  $handler->display->display_options['filters']['field_medonc_processed_value']['id'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['filters']['field_medonc_processed_value']['field'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_processed_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'MOGrphCvP';

  /* Display: MDCTableCvP */
  $handler = $view->new_display('page', 'MDCTableCvP', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_completed]/[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Processed (field_medicare_processed) */
  $handler->display->display_options['filters']['field_medicare_processed_value']['id'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['filters']['field_medicare_processed_value']['field'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/MedicarePctComplvsProcessed';

  /* Display: MDCCsvTvP */
  $handler = $view->new_display('views_data_export', 'MDCCsvTvP', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent  Completed vs Proc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_completed]/[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Processed (field_medicare_processed) */
  $handler->display->display_options['filters']['field_medicare_processed_value']['id'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['filters']['field_medicare_processed_value']['field'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntMedicareCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page_4' => 'page_4',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block MDCGphCvP */
  $handler = $view->new_display('block', 'Block MDCGphCvP', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent  Completed vs Proc';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_completed]/[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Processed (field_medicare_processed) */
  $handler->display->display_options['filters']['field_medicare_processed_value']['id'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['filters']['field_medicare_processed_value']['field'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_processed_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'MDCGrphCvP';

  /* Display: ChTableCvP */
  $handler = $view->new_display('page', 'ChTableCvP', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_completed]/[field_chemo_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Processed (field_chemo_processed) */
  $handler->display->display_options['filters']['field_chemo_processed_value']['id'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['filters']['field_chemo_processed_value']['field'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/ChemoPctComplvsProcessed';

  /* Display: ChCsvTvP */
  $handler = $view->new_display('views_data_export', 'ChCsvTvP', 'views_data_export_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent  Completed vs Proc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Completed/Processed ';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_completed]/[field_chemo_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Processed (field_chemo_processed) */
  $handler->display->display_options['filters']['field_chemo_processed_value']['id'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['filters']['field_chemo_processed_value']['field'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntChemoCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page_5' => 'page_5',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block ChemoGphCvP */
  $handler = $view->new_display('block', 'Block ChemoGphCvP', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent  Completed vs Proc';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_completed]/[field_chemo_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Processed (field_chemo_processed) */
  $handler->display->display_options['filters']['field_chemo_processed_value']['id'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['filters']['field_chemo_processed_value']['field'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_processed_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'ChemoGrphCvP';

  /* Display: TTableCvP */
  $handler = $view->new_display('page', 'TTableCvP', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['label'] = 'Chemo Compl';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['label'] = 'Chemo Proc';
  $handler->display->display_options['fields']['field_chemo_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['label'] = 'Medic Comp';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['label'] = 'Medic Proc';
  $handler->display->display_options['fields']['field_medicare_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['label'] = 'MO Comp';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['label'] = 'MO Proc';
  $handler->display->display_options['fields']['field_medonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['label'] = 'RO Comp';
  $handler->display->display_options['fields']['field_radonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['label'] = 'RO Proc';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Total Comp';
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_chemo_completed]+[field_radonc_completed]+[field_medonc_completed]+[field_medicare_completed]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Total Proc';
  $handler->display->display_options['fields']['expression_2']['precision'] = '0';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[field_chemo_processed]+[field_radonc_processed]+[field_medonc_processed]+[field_medicare_processed]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '% Compltd/Procssd ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_completed]+[field_radonc_completed]+[field_medonc_completed]+[field_medicare_completed])/([field_chemo_processed]+[field_radonc_processed]+[field_medonc_processed]+[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Processed (field_chemo_processed) */
  $handler->display->display_options['filters']['field_chemo_processed_value']['id'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['filters']['field_chemo_processed_value']['field'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/PctComplvsProcessed';

  /* Display: TCsvCvP */
  $handler = $view->new_display('views_data_export', 'TCsvCvP', 'views_data_export_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent  Completed vs Proc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Total Completed';
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['expression'] = '([field_chemo_completed]+[field_radonc_completed]+[field_medonc_completed]+[field_medicare_completed])';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Total Processed';
  $handler->display->display_options['fields']['expression_2']['precision'] = '0';
  $handler->display->display_options['fields']['expression_2']['expression'] = '([field_chemo_processed]+[field_radonc_processed]+[field_medonc_processed]+[field_medicare_processed])';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Total Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_completed]+[field_radonc_completed]+[field_medonc_completed]+[field_medicare_completed])/([field_chemo_processed]+[field_radonc_processed]+[field_medonc_processed]+[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Processed (field_chemo_processed) */
  $handler->display->display_options['filters']['field_chemo_processed_value']['id'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['filters']['field_chemo_processed_value']['field'] = 'field_chemo_processed_value';
  $handler->display->display_options['filters']['field_chemo_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page_6' => 'page_6',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'page_5' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block TGphCvP */
  $handler = $view->new_display('block', 'Block TGphCvP', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Percent Completed vs Proc';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Total Completed';
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['expression'] = '([field_chemo_completed]+[field_radonc_completed]+[field_medonc_completed]+[field_medicare_completed])';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Total Processed';
  $handler->display->display_options['fields']['expression_2']['precision'] = '0';
  $handler->display->display_options['fields']['expression_2']['expression'] = '([field_chemo_processed]+[field_radonc_processed]+[field_medonc_processed]+[field_medicare_processed])*100';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Total Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_completed]+[field_radonc_completed]+[field_medonc_completed]+[field_medicare_completed])/([field_chemo_processed]+[field_radonc_processed]+[field_medonc_processed]+[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Processed (field_medonc_processed) */
  $handler->display->display_options['filters']['field_medonc_processed_value']['id'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['filters']['field_medonc_processed_value']['field'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_processed_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'TGrphCvP';

  /* Display: ROTablePvA */
  $handler = $view->new_display('page', 'ROTablePvA', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc Percent Processed vs Added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_radonc_completed' => 'field_radonc_completed',
    'field_radonc_processed' => 'field_radonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_radonc_completed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_radonc_processed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Added */
  $handler->display->display_options['fields']['field_radonc_added']['id'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['field'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Processed to Added ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_processed]/[field_radonc_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: RadOnc Added (field_radonc_added) */
  $handler->display->display_options['filters']['field_radonc_added_value']['id'] = 'field_radonc_added_value';
  $handler->display->display_options['filters']['field_radonc_added_value']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['filters']['field_radonc_added_value']['field'] = 'field_radonc_added_value';
  $handler->display->display_options['filters']['field_radonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_radonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/RadOncPctProcessedvsAdded';

  /* Display: ROCsvPvA */
  $handler = $view->new_display('views_data_export', 'ROCsvPvA', 'views_data_export_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Radonc Percent Processed vs Added';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Added */
  $handler->display->display_options['fields']['field_radonc_added']['id'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['field'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Processed / Added';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_processed]/[field_radonc_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: RadOnc Added (field_radonc_added) */
  $handler->display->display_options['filters']['field_radonc_added_value']['id'] = 'field_radonc_added_value';
  $handler->display->display_options['filters']['field_radonc_added_value']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['filters']['field_radonc_added_value']['field'] = 'field_radonc_added_value';
  $handler->display->display_options['filters']['field_radonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_radonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntRadProcsdAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_7' => 'page_7',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'page_5' => 0,
    'block_4' => 0,
    'page_6' => 0,
    'block_5' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block ROGphPvA */
  $handler = $view->new_display('block', 'Block ROGphPvA', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '130';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'expression' => 'expression',
    'field_radonc_processed' => 0,
    'field_radonc_added' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_radonc_processed' => '#8bbc21',
    'field_radonc_added' => '#8bbc21',
    'expression' => '#8bbc21',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Added */
  $handler->display->display_options['fields']['field_radonc_added']['id'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['field'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Processed / Added';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_processed]/[field_radonc_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: RadOnc Added (field_radonc_added) */
  $handler->display->display_options['filters']['field_radonc_added_value']['id'] = 'field_radonc_added_value';
  $handler->display->display_options['filters']['field_radonc_added_value']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['filters']['field_radonc_added_value']['field'] = 'field_radonc_added_value';
  $handler->display->display_options['filters']['field_radonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_radonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'ROGrphPvA';

  /* Display: MOTablePvA */
  $handler = $view->new_display('page', 'MOTablePvA', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent Processed vs Added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Processed / Added';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_processed]/[field_medonc_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Added (field_medonc_added) */
  $handler->display->display_options['filters']['field_medonc_added_value']['id'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['filters']['field_medonc_added_value']['field'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/MedOncPctProcessedvsAdded';

  /* Display: MoCsvPvA */
  $handler = $view->new_display('views_data_export', 'MoCsvPvA', 'views_data_export_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent Proc vs Added';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Processed / Added';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_processed]/[field_medonc_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Added (field_medonc_added) */
  $handler->display->display_options['filters']['field_medonc_added_value']['id'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['filters']['field_medonc_added_value']['field'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntMedoncProcsdAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_8' => 'page_8',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'page_5' => 0,
    'block_4' => 0,
    'page_6' => 0,
    'block_5' => 0,
    'page_7' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block MOGphPvA */
  $handler = $view->new_display('block', 'Block MOGphPvA', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent Proc vs Added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'expression' => 'expression',
    'field_medonc_processed' => 0,
    'field_medonc_added' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_medonc_processed' => '#0d233a',
    'field_medonc_added' => '#8bbc21',
    'expression' => '#8bbc21',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_processed]/[field_medonc_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Added (field_medonc_added) */
  $handler->display->display_options['filters']['field_medonc_added_value']['id'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['filters']['field_medonc_added_value']['field'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'MOGrphPvA';

  /* Display: Block MOGphA */
  $handler = $view->new_display('block', 'Block MOGphA', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'field_medonc_added' => 'field_medonc_added',
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_medonc_added' => '#2e3eaf',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Added (field_medonc_added) */
  $handler->display->display_options['filters']['field_medonc_added_value']['id'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['filters']['field_medonc_added_value']['field'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'MOGrpA';

  /* Display: MDCTablePvA */
  $handler = $view->new_display('page', 'MDCTablePvA', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Daily Report: Medicare Added */
  $handler->display->display_options['fields']['field_medicare_added']['id'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['table'] = 'field_data_field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['field'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Processed vs Added ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_processed]/[field_medicare_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Added (field_medicare_added) */
  $handler->display->display_options['filters']['field_medicare_added_value']['id'] = 'field_medicare_added_value';
  $handler->display->display_options['filters']['field_medicare_added_value']['table'] = 'field_data_field_medicare_added';
  $handler->display->display_options['filters']['field_medicare_added_value']['field'] = 'field_medicare_added_value';
  $handler->display->display_options['filters']['field_medicare_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/MedicarePctProcessedvsAdded';

  /* Display: MdcCsvPvA */
  $handler = $view->new_display('views_data_export', 'MdcCsvPvA', 'views_data_export_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent Proc vs Added';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Processed / Added';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_processed]/[field_medonc_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Added (field_medonc_added) */
  $handler->display->display_options['filters']['field_medonc_added_value']['id'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['filters']['field_medonc_added_value']['field'] = 'field_medonc_added_value';
  $handler->display->display_options['filters']['field_medonc_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntMedicareProcsdAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_9' => 'page_9',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'page_5' => 0,
    'block_4' => 0,
    'page_6' => 0,
    'block_5' => 0,
    'page_7' => 0,
    'block_6' => 0,
    'page_8' => 0,
    'block_7' => 0,
    'block_8' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block MDCGphPvA */
  $handler = $view->new_display('block', 'Block MDCGphPvA', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent Proc vs Added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'expression' => 'expression',
    'field_medonc_processed' => 0,
    'field_medonc_added' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_medonc_processed' => '#0d233a',
    'field_medonc_added' => '#8bbc21',
    'expression' => '#8bbc21',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Added */
  $handler->display->display_options['fields']['field_medicare_added']['id'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['table'] = 'field_data_field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['field'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Processed / Added';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_processed]/[field_medicare_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Added (field_medicare_added) */
  $handler->display->display_options['filters']['field_medicare_added_value']['id'] = 'field_medicare_added_value';
  $handler->display->display_options['filters']['field_medicare_added_value']['table'] = 'field_data_field_medicare_added';
  $handler->display->display_options['filters']['field_medicare_added_value']['field'] = 'field_medicare_added_value';
  $handler->display->display_options['filters']['field_medicare_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_added_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'MDCGrphPvA';

  /* Display: ChTablePvA */
  $handler = $view->new_display('page', 'ChTablePvA', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Added */
  $handler->display->display_options['fields']['field_chemo_added']['id'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['field'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Processed vs Added ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_processed]/[field_chemo_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Added (field_chemo_added) */
  $handler->display->display_options['filters']['field_chemo_added_value']['id'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['filters']['field_chemo_added_value']['field'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/ChemoPctProcessedvsAdded';

  /* Display: ChCsvPvA */
  $handler = $view->new_display('views_data_export', 'ChCsvPvA', 'views_data_export_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent Proc vs Added';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Added */
  $handler->display->display_options['fields']['field_chemo_added']['id'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['field'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Processed / Added';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_processed]/[field_chemo_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Added (field_chemo_added) */
  $handler->display->display_options['filters']['field_chemo_added_value']['id'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['filters']['field_chemo_added_value']['field'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntChemoProcsdAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_10' => 'page_10',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'page_5' => 0,
    'block_4' => 0,
    'page_6' => 0,
    'block_5' => 0,
    'page_7' => 0,
    'block_6' => 0,
    'page_8' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'page_9' => 0,
    'block_9' => 0,
    'block_10' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block ChGphPvA */
  $handler = $view->new_display('block', 'Block ChGphPvA', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent Proc vs Added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'expression' => 'expression',
    'field_medonc_processed' => 0,
    'field_medonc_added' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_medonc_processed' => '#0d233a',
    'field_medonc_added' => '#8bbc21',
    'expression' => '#8bbc21',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Added */
  $handler->display->display_options['fields']['field_chemo_added']['id'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['field'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Processed / Added';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_processed]/[field_chemo_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Added (field_chemo_added) */
  $handler->display->display_options['filters']['field_chemo_added_value']['id'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['filters']['field_chemo_added_value']['field'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_added_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'ChGrphPvA';

  /* Display: TTablePvA */
  $handler = $view->new_display('page', 'TTablePvA', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Added */
  $handler->display->display_options['fields']['field_chemo_added']['id'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['field'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Added */
  $handler->display->display_options['fields']['field_radonc_added']['id'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['field'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Added */
  $handler->display->display_options['fields']['field_medicare_added']['id'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['table'] = 'field_data_field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['field'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Processed vs Added ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '(([field_chemo_processed]+[field_medonc_processed]+[field_radonc_processed]+[field_medicare_processed])/([field_chemo_added]+[field_medonc_added]+[field_radonc_added]+[field_medicare_added]))*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Added (field_chemo_added) */
  $handler->display->display_options['filters']['field_chemo_added_value']['id'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['filters']['field_chemo_added_value']['field'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/PctProcessedvsAdded';

  /* Display: TCsvPvA */
  $handler = $view->new_display('views_data_export', 'TCsvPvA', 'views_data_export_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = ' Percent Proc vs Added';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Added */
  $handler->display->display_options['fields']['field_chemo_added']['id'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['field'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Daily Report: Medicare Added */
  $handler->display->display_options['fields']['field_medicare_added']['id'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['table'] = 'field_data_field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['field'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Daily Report: RadOnc Added */
  $handler->display->display_options['fields']['field_radonc_added']['id'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['table'] = 'field_data_field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['field'] = 'field_radonc_added';
  $handler->display->display_options['fields']['field_radonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Processed / Added';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '(([field_chemo_processed]+[field_medonc_processed]+[field_radonc_processed]+[field_medicare_processed])/([field_chemo_added]+[field_medonc_added]+[field_radonc_added]+[field_medicare_added]))*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Added (field_chemo_added) */
  $handler->display->display_options['filters']['field_chemo_added_value']['id'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['filters']['field_chemo_added_value']['field'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_added_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntProcsdAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_11' => 'page_11',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'page_5' => 0,
    'block_4' => 0,
    'page_6' => 0,
    'block_5' => 0,
    'page_7' => 0,
    'block_6' => 0,
    'page_8' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'page_9' => 0,
    'block_9' => 0,
    'page_10' => 0,
    'block_10' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block TGphPvA */
  $handler = $view->new_display('block', 'Block TGphPvA', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Percent Proc vs Added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'expression' => 'expression',
    'field_medonc_processed' => 0,
    'field_medonc_added' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_medonc_processed' => '#0d233a',
    'field_medonc_added' => '#8bbc21',
    'expression' => '#8bbc21',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Added */
  $handler->display->display_options['fields']['field_chemo_added']['id'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['field'] = 'field_chemo_added';
  $handler->display->display_options['fields']['field_chemo_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Processed */
  $handler->display->display_options['fields']['field_chemo_processed']['id'] = 'field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['table'] = 'field_data_field_chemo_processed';
  $handler->display->display_options['fields']['field_chemo_processed']['field'] = 'field_chemo_processed';
  /* Field: Daily Report: Medicare Added */
  $handler->display->display_options['fields']['field_medicare_added']['id'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['table'] = 'field_data_field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['field'] = 'field_medicare_added';
  $handler->display->display_options['fields']['field_medicare_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Added */
  $handler->display->display_options['fields']['field_medonc_added']['id'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['table'] = 'field_data_field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['field'] = 'field_medonc_added';
  $handler->display->display_options['fields']['field_medonc_added']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Processed / Added';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_processed]/[field_chemo_added])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Added (field_chemo_added) */
  $handler->display->display_options['filters']['field_chemo_added_value']['id'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['table'] = 'field_data_field_chemo_added';
  $handler->display->display_options['filters']['field_chemo_added_value']['field'] = 'field_chemo_added_value';
  $handler->display->display_options['filters']['field_chemo_added_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_added_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'ChGrphPvA';
  $export['sum_completed_v_proc'] = $view;

  $view = new view();
  $view->name = 'sum_denied_v_completed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_daily_report';
  $view->human_name = 'SUM Denied v Completed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Radonc Percent  Completed vs Proc';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'top';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '100';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_date' => 'field_date',
    'expression' => 'expression',
    'field_radonc_completed' => 0,
    'field_radonc_processed' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#1aadce',
    'field_radonc_completed' => '#910000',
    'field_radonc_processed' => '#8bbc21',
    'expression' => '#8bbc21',
  );
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_completed]/[field_radonc_processed])*100';
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: RadOnc Processed (field_radonc_processed) */
  $handler->display->display_options['filters']['field_radonc_processed_value']['id'] = 'field_radonc_processed_value';
  $handler->display->display_options['filters']['field_radonc_processed_value']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['filters']['field_radonc_processed_value']['field'] = 'field_radonc_processed_value';
  $handler->display->display_options['filters']['field_radonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_radonc_processed_value']['value']['value'] = '0';

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['path'] = 'master-completed-v-proc';

  /* Display: ROTableDvC */
  $handler = $view->new_display('page', 'ROTableDvC', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'NEED TO ADD FIELD Radonc Percent Denied-Completed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_radonc_completed' => 'field_radonc_completed',
    'field_radonc_processed' => 'field_radonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_radonc_completed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_radonc_processed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_completed]/[field_radonc_processed])*100';
  $handler->display->display_options['path'] = 'reports/RadOncPctComplvsProcessed';

  /* Display: CsvTvP */
  $handler = $view->new_display('views_data_export', 'CsvTvP', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'pcntRadCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );

  /* Display: Graph CvP */
  $handler = $view->new_display('page', 'Graph CvP', 'page_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['path'] = 'reports/sum-completed-v-proc';

  /* Display: Block GphCvP */
  $handler = $view->new_display('block', 'Block GphCvP', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: RadOnc Completed */
  $handler->display->display_options['fields']['field_radonc_completed']['id'] = 'field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['table'] = 'field_data_field_radonc_completed';
  $handler->display->display_options['fields']['field_radonc_completed']['field'] = 'field_radonc_completed';
  /* Field: Daily Report: RadOnc Processed */
  $handler->display->display_options['fields']['field_radonc_processed']['id'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['table'] = 'field_data_field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['field'] = 'field_radonc_processed';
  $handler->display->display_options['fields']['field_radonc_processed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent RadOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_radonc_completed]/[field_radonc_processed])*100';
  $handler->display->display_options['block_description'] = 'GrphCvP';

  /* Display: MOTableCvP */
  $handler = $view->new_display('page', 'MOTableCvP', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_completed]/[field_medonc_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Processed (field_medonc_processed) */
  $handler->display->display_options['filters']['field_medonc_processed_value']['id'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['filters']['field_medonc_processed_value']['field'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/MedOncPctComplvsProcessed';

  /* Display: MoCsvTvP */
  $handler = $view->new_display('views_data_export', 'MoCsvTvP', 'views_data_export_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_completed]/[field_medonc_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Processed (field_medonc_processed) */
  $handler->display->display_options['filters']['field_medonc_processed_value']['id'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['filters']['field_medonc_processed_value']['field'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntMedoncCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );

  /* Display: Block MOGphCvP */
  $handler = $view->new_display('block', 'Block MOGphCvP', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medonc Percent  Completed vs Proc';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: MedOnc Completed */
  $handler->display->display_options['fields']['field_medonc_completed']['id'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['table'] = 'field_data_field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['field'] = 'field_medonc_completed';
  $handler->display->display_options['fields']['field_medonc_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: MedOnc Processed */
  $handler->display->display_options['fields']['field_medonc_processed']['id'] = 'field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['fields']['field_medonc_processed']['field'] = 'field_medonc_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent MedOnc Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medonc_completed]/[field_medonc_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: MedOnc Processed (field_medonc_processed) */
  $handler->display->display_options['filters']['field_medonc_processed_value']['id'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['table'] = 'field_data_field_medonc_processed';
  $handler->display->display_options['filters']['field_medonc_processed_value']['field'] = 'field_medonc_processed_value';
  $handler->display->display_options['filters']['field_medonc_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medonc_processed_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'MOGrphCvP';

  /* Display: MDCTableCvP */
  $handler = $view->new_display('page', 'MDCTableCvP', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent  Completed vs Processed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Completed/Processed ';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_completed]/[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Processed (field_medicare_processed) */
  $handler->display->display_options['filters']['field_medicare_processed_value']['id'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['filters']['field_medicare_processed_value']['field'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/MedicarePctComplvsProcessed';

  /* Display: MDCCsvTvP */
  $handler = $view->new_display('views_data_export', 'MDCCsvTvP', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent  Completed vs Proc';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Completed/Processed ';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_completed]/[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Processed (field_medicare_processed) */
  $handler->display->display_options['filters']['field_medicare_processed_value']['id'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['filters']['field_medicare_processed_value']['field'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_processed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntMedicareCompProcsd.csv';
  $handler->display->display_options['displays'] = array(
    'page_4' => 'page_4',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block MDCGphCvP */
  $handler = $view->new_display('block', 'Block MDCGphCvP', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Percent  Completed vs Proc';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Medicare Completed */
  $handler->display->display_options['fields']['field_medicare_completed']['id'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['table'] = 'field_data_field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['field'] = 'field_medicare_completed';
  $handler->display->display_options['fields']['field_medicare_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Medicare Processed */
  $handler->display->display_options['fields']['field_medicare_processed']['id'] = 'field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['fields']['field_medicare_processed']['field'] = 'field_medicare_processed';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Medicare Completed/Processed ';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_medicare_completed]/[field_medicare_processed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Medicare Processed (field_medicare_processed) */
  $handler->display->display_options['filters']['field_medicare_processed_value']['id'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['table'] = 'field_data_field_medicare_processed';
  $handler->display->display_options['filters']['field_medicare_processed_value']['field'] = 'field_medicare_processed_value';
  $handler->display->display_options['filters']['field_medicare_processed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_medicare_processed_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'MDCGrphCvP';

  /* Display: ChTableDvC */
  $handler = $view->new_display('page', 'ChTableDvC', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent Denied vs Completed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_medonc_completed' => 'field_medonc_completed',
    'field_medonc_processed' => 'field_medonc_processed',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medonc_processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Denied */
  $handler->display->display_options['fields']['field_chemo_denied']['id'] = 'field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['table'] = 'field_data_field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['field'] = 'field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Denied / Completed';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_denied]/[field_chemo_completed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Completed (field_chemo_completed) */
  $handler->display->display_options['filters']['field_chemo_completed_value']['id'] = 'field_chemo_completed_value';
  $handler->display->display_options['filters']['field_chemo_completed_value']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['filters']['field_chemo_completed_value']['field'] = 'field_chemo_completed_value';
  $handler->display->display_options['filters']['field_chemo_completed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_completed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'reports/ChemoPctDenVsCompl';

  /* Display: ChCsvDvT */
  $handler = $view->new_display('views_data_export', 'ChCsvDvT', 'views_data_export_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent Denied vs Completed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Denied */
  $handler->display->display_options['fields']['field_chemo_denied']['id'] = 'field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['table'] = 'field_data_field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['field'] = 'field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Denied / Completed ';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_denied]/[field_chemo_completed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Completed (field_chemo_completed) */
  $handler->display->display_options['filters']['field_chemo_completed_value']['id'] = 'field_chemo_completed_value';
  $handler->display->display_options['filters']['field_chemo_completed_value']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['filters']['field_chemo_completed_value']['field'] = 'field_chemo_completed_value';
  $handler->display->display_options['filters']['field_chemo_completed_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_completed_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'pcntChemoDenComp.csv';
  $handler->display->display_options['displays'] = array(
    'page_5' => 'page_5',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'page_3' => 0,
    'block_2' => 0,
    'page_4' => 0,
    'block_3' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block ChemoGphDvC */
  $handler = $view->new_display('block', 'Block ChemoGphDvC', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Percent Denied vs Completed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Daily Report: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: Daily Report: Chemo Completed */
  $handler->display->display_options['fields']['field_chemo_completed']['id'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['table'] = 'field_data_field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['field'] = 'field_chemo_completed';
  $handler->display->display_options['fields']['field_chemo_completed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Daily Report: Chemo Denied */
  $handler->display->display_options['fields']['field_chemo_denied']['id'] = 'field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['table'] = 'field_data_field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['field'] = 'field_chemo_denied';
  $handler->display->display_options['fields']['field_chemo_denied']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percent Chemo Denied / Completed';
  $handler->display->display_options['fields']['expression']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_chemo_denied]/[field_chemo_completed])*100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Daily Report: daily_report type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_daily_report';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'daily_report' => 'daily_report',
  );
  /* Filter criterion: Daily Report: Chemo Denied (field_chemo_denied) */
  $handler->display->display_options['filters']['field_chemo_denied_value']['id'] = 'field_chemo_denied_value';
  $handler->display->display_options['filters']['field_chemo_denied_value']['table'] = 'field_data_field_chemo_denied';
  $handler->display->display_options['filters']['field_chemo_denied_value']['field'] = 'field_chemo_denied_value';
  $handler->display->display_options['filters']['field_chemo_denied_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_chemo_denied_value']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'ChemoGrphDvC';
  $export['sum_denied_v_completed'] = $view;

  return $export;
}
