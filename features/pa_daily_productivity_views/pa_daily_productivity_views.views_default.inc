<?php
/**
 * @file
 * pa_daily_productivity_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pa_daily_productivity_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pa_productivity_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_schedule';
  $view->human_name = 'PA Productivity Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PA Productivity Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: COUNT(Schedule: Appointment Date) */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_app_date']['separator'] = ', ';
  /* Field: MIN(Schedule: Changed) */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'min';
  $handler->display->display_options['fields']['changed']['date_format'] = 'year_month_day';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
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
  $handler->display->display_options['filters']['field_department_tid']['value'] = '';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pa-productivity-reports';

  /* Display: MO-A-Rosalv */
  $handler = $view->new_display('views_data_export', 'MO-A-Rosalv', 'mo_a_rojaramillo');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '503';
  $handler->display->display_options['path'] = 'exports/mo-added-rosalva.csv';

  /* Display: MO-A-Isab */
  $handler = $view->new_display('views_data_export', 'MO-A-Isab', 'mo_a_imadrid');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '296';
  $handler->display->display_options['path'] = 'exports/mo-added-isabel.csv';

  /* Display: MO-A-Rosalio */
  $handler = $view->new_display('views_data_export', 'MO-A-Rosalio', 'mo_a_romgonzales');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '301';
  $handler->display->display_options['path'] = 'exports/mo-added-rosalio.csv';

  /* Display: MO-C-Rosalv */
  $handler = $view->new_display('views_data_export', 'MO-C-Rosalv', 'mo_c_rojaramillo');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '503';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-rosalva.csv';

  /* Display: MO-C-Isab */
  $handler = $view->new_display('views_data_export', 'MO-C-Isab', 'mo_c_imadrid');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '296';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-isabel.csv';

  /* Display: MO-C-Rosalio */
  $handler = $view->new_display('views_data_export', 'MO-C-Rosalio', 'mo_c_romgonzales');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '301';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-rosalio.csv';

  /* Display: RO-C-Rosalio */
  $handler = $view->new_display('views_data_export', 'RO-C-Rosalio', 'ro_c_romgonzales');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '301';
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
  $handler->display->display_options['path'] = 'exports/ro-completed-rosalio.csv';

  /* Display: RO-A-Rosalio */
  $handler = $view->new_display('views_data_export', 'RO-A-Rosalio', 'ro_a_romgonzales');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '301';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/ro-added-rosalio.csv';

  /* Display: Chemo-A-SJ */
  $handler = $view->new_display('views_data_export', 'Chemo-A-SJ', 'chemo_a_sreyes');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '302';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/chemo-added-sanjuana.csv';

  /* Display: Chemo-A-Pha */
  $handler = $view->new_display('views_data_export', 'Chemo-A-Pha', 'chemo_a_pha');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '298';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/chemo-added-phong.csv';

  /* Display: Chemo-C-SJ */
  $handler = $view->new_display('views_data_export', 'Chemo-C-SJ', 'chemo_c_sreyes');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '302';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
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
  $handler->display->display_options['path'] = 'exports/chemo-completed-sanjuana.csv';

  /* Display: Chemo-C-Pha */
  $handler = $view->new_display('views_data_export', 'Chemo-C-Pha', 'chemo_c_pha');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '298';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
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
  $handler->display->display_options['path'] = 'exports/chemo-completed-phong.csv';

  /* Display: MDC-A-Rob */
  $handler = $view->new_display('views_data_export', 'MDC-A-Rob', 'medicare_a_ravaldez');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '339';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/medicare-added-roberta.csv';

  /* Display: MDC-C-Rob */
  $handler = $view->new_display('views_data_export', 'MDC-C-Rob', 'medicare_c_ravaldez');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '339';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
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
  $handler->display->display_options['path'] = 'exports/medicare-completed-roberta.csv';

  /* Display: RO-C-Bill */
  $handler = $view->new_display('views_data_export', 'RO-C-Bill', 'ro_c_wigriego');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '297';
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
  $handler->display->display_options['path'] = 'exports/ro-completed-wigriego.csv';

  /* Display: RO-A-Bill */
  $handler = $view->new_display('views_data_export', 'RO-A-Bill', 'ro_a_wigriego');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '297';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/ro-added-wigriego.csv';

  /* Display: MO-A-Pha */
  $handler = $view->new_display('views_data_export', 'MO-A-Pha', 'mo_a_pha');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '298';
  $handler->display->display_options['path'] = 'exports/mo-added-phong.csv';

  /* Display: MO-C-Pha */
  $handler = $view->new_display('views_data_export', 'MO-C-Pha', 'mo_c_pha');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '298';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-phong.csv';

  /* Display: MO-A-SJ */
  $handler = $view->new_display('views_data_export', 'MO-A-SJ', 'mo_a_sreyes');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '302';
  $handler->display->display_options['path'] = 'exports/mo-added-sjuarez.csv';

  /* Display: MO-C-SJ */
  $handler = $view->new_display('views_data_export', 'MO-C-SJ', 'mo_c_sreyes');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '302';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-sjuarez.csv';

  /* Display: Chemo-A-Rob */
  $handler = $view->new_display('views_data_export', 'Chemo-A-Rob', 'chemo_a_ravaldez');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '339';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/chemo-added-ravaldez.csv';

  /* Display: Chemo-C-Rob */
  $handler = $view->new_display('views_data_export', 'Chemo-C-Rob', 'chemo_c_ravaldez');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '339';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
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
  $handler->display->display_options['path'] = 'exports/chemo-completed-ravaldez.csv';

  /* Display: MO-A-Linda */
  $handler = $view->new_display('views_data_export', 'MO-A-Linda', 'mo_a_ldimas');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '671';
  $handler->display->display_options['path'] = 'exports/mo-added-ldimas.csv';

  /* Display: MO-C-Linda */
  $handler = $view->new_display('views_data_export', 'MO-C-Linda', 'mo_c_ldimas');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '671';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-ldimas.csv';

  /* Display: RO-A-Linda */
  $handler = $view->new_display('views_data_export', 'RO-A-Linda', 'ro_a_ldimas');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '671';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/ro-added-ldimas.csv';

  /* Display: RO-C-Linda */
  $handler = $view->new_display('views_data_export', 'RO-C-Linda', 'ro_c_ldimas');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '671';
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
  $handler->display->display_options['path'] = 'exports/ro-completed-ldimas.csv';

  /* Display: MO-A-Jemel */
  $handler = $view->new_display('views_data_export', 'MO-A-Jemel', 'mo_a_gjcoleman');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '303';
  $handler->display->display_options['path'] = 'exports/mo-added-gjcoleman.csv';

  /* Display: MO-C-Jemel */
  $handler = $view->new_display('views_data_export', 'MO-C-Jemel', 'mo_c_gjcoleman');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '303';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-gjcoleman.csv';

  /* Display: RO-A-Jemel */
  $handler = $view->new_display('views_data_export', 'RO-A-Jemel', 'ro_a_gjcoleman');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '303';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/ro-added-gjcoleman.csv';

  /* Display: RO-C-Jemel */
  $handler = $view->new_display('views_data_export', 'RO-C-Jemel', 'ro_c_gjcoleman');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '303';
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
  $handler->display->display_options['path'] = 'exports/ro-completed-gjcoleman.csv';

  /* Display: Chemo-A-Bill */
  $handler = $view->new_display('views_data_export', 'Chemo-A-Bill', 'chemo_a_wigriego');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '297';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/chemo-added-wigriego.csv';

  /* Display: Chemo-C-Bill */
  $handler = $view->new_display('views_data_export', 'Chemo-C-Bill', 'chemo_c_wigriego');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '297';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
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
  $handler->display->display_options['path'] = 'exports/chemo-completed-wigriego.csv';

  /* Display: MO-A-Bill */
  $handler = $view->new_display('views_data_export', 'MO-A-Bill', 'mo_a_wigriego');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '297';
  $handler->display->display_options['path'] = 'exports/mo-added-wigriego.csv';

  /* Display: MO-C-Bill */
  $handler = $view->new_display('views_data_export', 'MO-C-Bill', 'mo_c_wigriego');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '297';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-wigriego.csv';

  /* Display: Chemo-A-RoseT */
  $handler = $view->new_display('views_data_export', 'Chemo-A-RoseT', 'chemo_a_rotafoya');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4374';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/chemo-added-rotafoya.csv';

  /* Display: Chemo-C-RoseT */
  $handler = $view->new_display('views_data_export', 'Chemo-C-RoseT', 'chemo_c_rotafoya');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4374';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
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
  $handler->display->display_options['path'] = 'exports/chemo-completed-rotafoya.csv';

  /* Display: Chemo-A-Prisci */
  $handler = $view->new_display('views_data_export', 'Chemo-A-Prisci', 'chemo_a_pcascante');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4373';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'exports/chemo-added-pcascante.csv';

  /* Display: Chemo-C-Prisci */
  $handler = $view->new_display('views_data_export', 'Chemo-C-Prisci', 'chemo_c_pcascante');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4373';
  /* Filter criterion: Schedule: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
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
  $handler->display->display_options['path'] = 'exports/chemo-completed-pcascante.csv';

  /* Display: MO-A-RoseT */
  $handler = $view->new_display('views_data_export', 'MO-A-RoseT', 'mo_a_rotafoya');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-12 Hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4374';
  $handler->display->display_options['path'] = 'exports/mo-added-rotafoya.csv';

  /* Display: MO-C-RoseT */
  $handler = $view->new_display('views_data_export', 'MO-C-RoseT', 'mo_c_rotafoya');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4374';
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
  $handler->display->display_options['path'] = 'exports/mo-completed-rotafoya.csv';

  /* Display: MO-L-Rosalv */
  $handler = $view->new_display('views_data_export', 'MO-L-Rosalv', 'mo_l_rojaramillo');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA Productivity Progress Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '503';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'Authorized' => 'Authorized',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-rosalva.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-L-Isab */
  $handler = $view->new_display('views_data_export', 'MO-L-Isab', 'mo_l_imadrid');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '296';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-isabel.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-L-Rosalio */
  $handler = $view->new_display('views_data_export', 'MO-L-Rosalio', 'mo_l_romgonzales');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '301';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-rosalio.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chemo-L-SJ */
  $handler = $view->new_display('views_data_export', 'Chemo-L-SJ', 'chemo_l_sreyes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '302';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/chemo-inprogress-sanjuana.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RO-L-Rosalio */
  $handler = $view->new_display('views_data_export', 'RO-L-Rosalio', 'ro_l_romgonzales');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '301';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/ro-inprogress-rosalio.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chemo-L-Pha */
  $handler = $view->new_display('views_data_export', 'Chemo-L-Pha', 'chemo_l_pha');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '298';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/chemo-inprogress-phong.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MDC-L-Rob */
  $handler = $view->new_display('views_data_export', 'MDC-L-Rob', 'medicare_l_ravaldez');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '339';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/medicare-inprogress-roberta.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-L-Pha */
  $handler = $view->new_display('views_data_export', 'MO-L-Pha', 'mo_l_pha');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '298';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-phong.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-L-SJ */
  $handler = $view->new_display('views_data_export', 'MO-L-SJ', 'mo_l_sreyes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '302';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-sjuarez.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chemo-L-Rob */
  $handler = $view->new_display('views_data_export', 'Chemo-L-Rob', 'chemo_l_ravaldez');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '339';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/chemo-inprogress-ravaldez.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-L-Linda */
  $handler = $view->new_display('views_data_export', 'MO-L-Linda', 'mo_l_ldimas');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '671';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-ldimas.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RO-L-Linda */
  $handler = $view->new_display('views_data_export', 'RO-L-Linda', 'ro_l_dimas');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '671';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/ro-inprogress-ldimas.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-L-Jemel */
  $handler = $view->new_display('views_data_export', 'MO-L-Jemel', 'mo_l_gjcoleman');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '303';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-gjcoleman.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RO-L-Jemel */
  $handler = $view->new_display('views_data_export', 'RO-L-Jemel', 'ro_l_gjcoleman');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '303';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/ro-inprogress-gjcoleman.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chemo-L-RoseT */
  $handler = $view->new_display('views_data_export', 'Chemo-L-RoseT', 'chemo_l_rotafoya');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4374';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/chemo-inprogress-rotafoya.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Chemo-L-Prisci */
  $handler = $view->new_display('views_data_export', 'Chemo-L-Prisci', 'chemo_l_pcascante');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4373';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/chemo-inprogress-pcascante.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: MO-L-RoseT */
  $handler = $view->new_display('views_data_export', 'MO-L-RoseT', 'mo_l_rotafoya');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA In Progress Productivity Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Author */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '4374';
  /* Filter criterion: Field: PA Status (field_pa_status) */
  $handler->display->display_options['filters']['field_pa_status_value']['id'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['filters']['field_pa_status_value']['field'] = 'field_pa_status_value';
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Appealed' => 'Appealed',
    'Appealed2' => 'Appealed2',
    'CallInsurance' => 'CallInsurance',
    'Dictation Needed' => 'Dictation Needed',
    'Ins. Form Needed' => 'Ins. Form Needed',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'exports/mo-inprogress-rotafoya.csv';
  $handler->display->display_options['sitename_title'] = 0;
  $export['pa_productivity_reports'] = $view;

  $view = new view();
  $view->name = 'stats_chemo_pa_productivity_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_pa_daily_reports';
  $view->human_name = 'Stats Chemo PA Productivity Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PA Chemo Daily Productivity Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Pha */
  $handler->display->display_options['fields']['field_pa_added_phong']['id'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['table'] = 'field_data_field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['field'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Roberta */
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['id'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['table'] = 'field_data_field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['field'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added San Juana */
  $handler->display->display_options['fields']['field_pa_added_sreyes']['id'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['table'] = 'field_data_field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['field'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Priscila */
  $handler->display->display_options['fields']['field_pa_added_pcascante']['id'] = 'field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['table'] = 'field_data_field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['field'] = 'field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rose */
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['id'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['table'] = 'field_data_field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['field'] = 'field_pa_added_rotafoya';
  /* Field: PA Daily Reports: PA Completed Priscila */
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['id'] = 'field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['table'] = 'field_data_field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['field'] = 'field_pa_completed_pcascante';
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Filter criterion: PA Daily Reports: pa_daily_reports type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'eck_pa_daily_reports';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'chemo_daily' => 'chemo_daily',
  );
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Range ';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats-pa-prod-reports';

  /* Display: Added */
  $handler = $view->new_display('page', 'Added', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_phong' => 'field_pa_added_phong',
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_pa_added_sreyes' => 'field_pa_added_sreyes',
    'field_pa_added_pcascante' => 'field_pa_added_pcascante',
    'field_pa_added_rotafoya' => 'field_pa_added_rotafoya',
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
    'field_pa_added_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['label'] = 'Added Bill';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Pha */
  $handler->display->display_options['fields']['field_pa_added_phong']['id'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['table'] = 'field_data_field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['field'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['label'] = 'Added Pha';
  $handler->display->display_options['fields']['field_pa_added_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Roberta */
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['id'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['table'] = 'field_data_field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['field'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['label'] = 'Added Roberta';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added San Juana */
  $handler->display->display_options['fields']['field_pa_added_sreyes']['id'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['table'] = 'field_data_field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['field'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Priscila */
  $handler->display->display_options['fields']['field_pa_added_pcascante']['id'] = 'field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['table'] = 'field_data_field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['field'] = 'field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['label'] = 'Added Priscila';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rose */
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['id'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['table'] = 'field_data_field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['field'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['label'] = 'Added Rose';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/ChemoAdded';

  /* Display: BlockGrphAdded */
  $handler = $view->new_display('block', 'BlockGrphAdded', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_phong' => 'field_pa_added_phong',
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_pa_added_sreyes' => 'field_pa_added_sreyes',
    'field_pa_added_pcascante' => 'field_pa_added_pcascante',
    'field_pa_added_rotafoya' => 'field_pa_added_rotafoya',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_added_wigriego' => '#0d233a',
    'field_pa_added_phong' => '#8bbc21',
    'field_pa_added_ravaldez' => '#910000',
    'field_pa_added_sreyes' => '#1aadce',
    'field_pa_added_pcascante' => '#492970',
    'field_pa_added_rotafoya' => '#f28f43',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['label'] = 'Bill';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Pha */
  $handler->display->display_options['fields']['field_pa_added_phong']['id'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['table'] = 'field_data_field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['field'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['label'] = 'Pha';
  $handler->display->display_options['fields']['field_pa_added_phong']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Roberta */
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['id'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['table'] = 'field_data_field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['field'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['label'] = 'Roberta';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added San Juana */
  $handler->display->display_options['fields']['field_pa_added_sreyes']['id'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['table'] = 'field_data_field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['field'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['label'] = 'San Juana';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_sreyes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Priscila */
  $handler->display->display_options['fields']['field_pa_added_pcascante']['id'] = 'field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['table'] = 'field_data_field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['field'] = 'field_pa_added_pcascante';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['label'] = 'Priscila';
  $handler->display->display_options['fields']['field_pa_added_pcascante']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_pcascante']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rose */
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['id'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['table'] = 'field_data_field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['field'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['label'] = 'Rose';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'GphChemAdded';

  /* Display: AddedCSV */
  $handler = $view->new_display('views_data_export', 'AddedCSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'reports/ChemoAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'page_2' => 0,
    'block_2' => 0,
  );

  /* Display: Completed */
  $handler = $view->new_display('page', 'Completed', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_completed_pcascante' => 'field_pa_completed_pcascante',
    'field_pa_completed_ravaldez' => 'field_pa_completed_ravaldez',
    'field_pa_completed_rotafoya' => 'field_pa_completed_rotafoya',
    'field_pa_completed_sreyes' => 'field_pa_completed_sreyes',
    'field_pa_completed_wigriego' => 'field_pa_completed_wigriego',
    'field_pa_completed_phong' => 'field_pa_completed_phong',
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
    'field_pa_completed_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Priscila */
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['id'] = 'field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['table'] = 'field_data_field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['field'] = 'field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Pha */
  $handler->display->display_options['fields']['field_pa_completed_phong']['id'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['table'] = 'field_data_field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['field'] = 'field_pa_completed_phong';
  $handler->display->display_options['path'] = 'reports/ChemoCompleted';

  /* Display: BlockGrphCompleted */
  $handler = $view->new_display('block', 'BlockGrphCompleted', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_completed_pcascante' => 'field_pa_completed_pcascante',
    'field_pa_completed_ravaldez' => 'field_pa_completed_ravaldez',
    'field_pa_completed_rotafoya' => 'field_pa_completed_rotafoya',
    'field_pa_completed_sreyes' => 'field_pa_completed_sreyes',
    'field_pa_completed_wigriego' => 'field_pa_completed_wigriego',
    'field_pa_completed_phong' => 'field_pa_completed_phong',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_completed_pcascante' => '#0d233a',
    'field_pa_completed_ravaldez' => '#8bbc21',
    'field_pa_completed_rotafoya' => '#910000',
    'field_pa_completed_sreyes' => '#1aadce',
    'field_pa_completed_wigriego' => '#492970',
    'field_pa_completed_phong' => '#f28f43',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Priscila */
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['id'] = 'field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['table'] = 'field_data_field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['field'] = 'field_pa_completed_pcascante';
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Pha */
  $handler->display->display_options['fields']['field_pa_completed_phong']['id'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['table'] = 'field_data_field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['field'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'GphChemCompleted';

  /* Display: CompletedCSV */
  $handler = $view->new_display('views_data_export', 'CompletedCSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Priscila */
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['id'] = 'field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['table'] = 'field_data_field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['field'] = 'field_pa_completed_pcascante';
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Pha */
  $handler->display->display_options['fields']['field_pa_completed_phong']['id'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['table'] = 'field_data_field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['field'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/ChemoCompleted.csv';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: InProg */
  $handler = $view->new_display('page', 'InProg', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA Chemo Daily Productivity In Prog Report';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_phong' => 'field_pa_added_phong',
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_pa_added_sreyes' => 'field_pa_added_sreyes',
    'field_pa_added_pcascante' => 'field_pa_added_pcascante',
    'field_pa_added_rotafoya' => 'field_pa_added_rotafoya',
    'field_pa_completed_pcascante' => 'field_pa_completed_pcascante',
    'field_pa_completed_ravaldez' => 'field_pa_completed_ravaldez',
    'field_pa_completed_rotafoya' => 'field_pa_completed_rotafoya',
    'field_pa_completed_sreyes' => 'field_pa_completed_sreyes',
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
    'field_pa_added_wigriego' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_phong' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_ravaldez' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_sreyes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_pcascante' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_rotafoya' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_pcascante' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_ravaldez' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_rotafoya' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_sreyes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Leftovers Pha */
  $handler->display->display_options['fields']['field_pa_progress_pha']['id'] = 'field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['table'] = 'field_data_field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['field'] = 'field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Priscila */
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['id'] = 'field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['table'] = 'field_data_field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['field'] = 'field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Roberta */
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['id'] = 'field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['table'] = 'field_data_field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['field'] = 'field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Rose */
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['id'] = 'field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['table'] = 'field_data_field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['field'] = 'field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers San Juana */
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['id'] = 'field_pa_progress_sreyes';
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['table'] = 'field_data_field_pa_progress_sreyes';
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['field'] = 'field_pa_progress_sreyes';
  $handler->display->display_options['path'] = 'reports/ChemoInProg';

  /* Display: BlockGrphProg */
  $handler = $view->new_display('block', 'BlockGrphProg', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PA Chemo Daily Productivity Progress Graph';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Leftovers Pha */
  $handler->display->display_options['fields']['field_pa_progress_pha']['id'] = 'field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['table'] = 'field_data_field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['field'] = 'field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Priscila */
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['id'] = 'field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['table'] = 'field_data_field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['field'] = 'field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Rose */
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['id'] = 'field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['table'] = 'field_data_field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['field'] = 'field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers San Juana */
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['id'] = 'field_pa_progress_sreyes';
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['table'] = 'field_data_field_pa_progress_sreyes';
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['field'] = 'field_pa_progress_sreyes';
  /* Field: PA Daily Reports: PA Leftovers Roberta */
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['id'] = 'field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['table'] = 'field_data_field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['field'] = 'field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: PA Daily Reports: pa_daily_reports type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'eck_pa_daily_reports';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'chemo_daily' => 'chemo_daily',
  );
  $handler->display->display_options['block_description'] = 'GrphChemProg';

  /* Display: InProgressCSV */
  $handler = $view->new_display('views_data_export', 'InProgressCSV', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Leftovers Pha */
  $handler->display->display_options['fields']['field_pa_progress_pha']['id'] = 'field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['table'] = 'field_data_field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['field'] = 'field_pa_progress_pha';
  $handler->display->display_options['fields']['field_pa_progress_pha']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Priscila */
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['id'] = 'field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['table'] = 'field_data_field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['field'] = 'field_pa_progress_pcascante';
  $handler->display->display_options['fields']['field_pa_progress_pcascante']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Roberta */
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['id'] = 'field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['table'] = 'field_data_field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['field'] = 'field_pa_progress_ravaldez';
  $handler->display->display_options['fields']['field_pa_progress_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers Rose */
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['id'] = 'field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['table'] = 'field_data_field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['field'] = 'field_pa_progress_rotafoya';
  $handler->display->display_options['fields']['field_pa_progress_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Leftovers San Juana */
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['id'] = 'field_pa_progress_sreyes';
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['table'] = 'field_data_field_pa_progress_sreyes';
  $handler->display->display_options['fields']['field_pa_progress_sreyes']['field'] = 'field_pa_progress_sreyes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: PA Daily Reports: pa_daily_reports type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'eck_pa_daily_reports';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'chemo_daily' => 'chemo_daily',
  );
  $handler->display->display_options['path'] = 'reports/ChemoInProgress.csv';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $export['stats_chemo_pa_productivity_reports'] = $view;

  $view = new view();
  $view->name = 'stats_medicare_pa_productivity_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_pa_daily_reports';
  $view->human_name = 'Stats Medicare PA Productivity Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PA Medicare Daily Productivity Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '150';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rosalio */
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['id'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['table'] = 'field_data_field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['field'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Rosalio */
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['id'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['table'] = 'field_data_field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['field'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: PA Daily Reports: pa_daily_reports type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'eck_pa_daily_reports';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'medicare_daily' => 'medicare_daily',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats-pa-medicare-prod-reports';

  /* Display: Added */
  $handler = $view->new_display('page', 'Added', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_phong' => 'field_pa_added_phong',
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_pa_added_sreyes' => 'field_pa_added_sreyes',
    'field_pa_added_pcascante' => 'field_pa_added_pcascante',
    'field_pa_added_rotafoya' => 'field_pa_added_rotafoya',
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
    'field_pa_added_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Roberta */
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['id'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['table'] = 'field_data_field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['field'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/MedicareAdded';

  /* Display: BlockGrphAdded */
  $handler = $view->new_display('block', 'BlockGrphAdded', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_added_ravaldez' => '#0d233a',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: PA Daily Reports: PA Added Roberta */
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['id'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['table'] = 'field_data_field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['field'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'GphMedicareAdded';

  /* Display: AddedCSV */
  $handler = $view->new_display('views_data_export', 'AddedCSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Roberta */
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['id'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['table'] = 'field_data_field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['field'] = 'field_pa_added_ravaldez';
  $handler->display->display_options['fields']['field_pa_added_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/MedicareAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'page_2' => 0,
    'block_2' => 0,
  );

  /* Display: Completed */
  $handler = $view->new_display('page', 'Completed', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_completed_pcascante' => 'field_pa_completed_pcascante',
    'field_pa_completed_ravaldez' => 'field_pa_completed_ravaldez',
    'field_pa_completed_rotafoya' => 'field_pa_completed_rotafoya',
    'field_pa_completed_sreyes' => 'field_pa_completed_sreyes',
    'field_pa_completed_wigriego' => 'field_pa_completed_wigriego',
    'field_pa_completed_phong' => 'field_pa_completed_phong',
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
    'field_pa_completed_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/MedicareCompleted';

  /* Display: BlockGrphCompleted */
  $handler = $view->new_display('block', 'BlockGrphCompleted', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_completed_ravaldez' => 'field_pa_completed_ravaldez',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_completed_ravaldez' => '#0d233a',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'GphMedicareCompleted';

  /* Display: CompletedCSV */
  $handler = $view->new_display('views_data_export', 'CompletedCSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/MedicareCompleted.csv';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $export['stats_medicare_pa_productivity_reports'] = $view;

  $view = new view();
  $view->name = 'stats_medonc_pa_productivity_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_pa_daily_reports';
  $view->human_name = 'Stats MedOnc PA Productivity Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PA MedOnc Daily Productivity Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '150';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Pha */
  $handler->display->display_options['fields']['field_pa_added_phong']['id'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['table'] = 'field_data_field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['field'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added San Juana */
  $handler->display->display_options['fields']['field_pa_added_sreyes']['id'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['table'] = 'field_data_field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['field'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rose */
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['id'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['table'] = 'field_data_field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['field'] = 'field_pa_added_rotafoya';
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Field: PA Daily Reports: PA Added Rosalva */
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['id'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['table'] = 'field_data_field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['field'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Isabel */
  $handler->display->display_options['fields']['field_pa_add_imadrid']['id'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['table'] = 'field_data_field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['field'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: PA Daily Reports: pa_daily_reports type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'eck_pa_daily_reports';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'mo_daily' => 'mo_daily',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats-pa-prod-reports';

  /* Display: Added */
  $handler = $view->new_display('page', 'Added', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_phong' => 'field_pa_added_phong',
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_pa_added_sreyes' => 'field_pa_added_sreyes',
    'field_pa_added_pcascante' => 'field_pa_added_pcascante',
    'field_pa_added_rotafoya' => 'field_pa_added_rotafoya',
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
    'field_pa_added_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Isabel */
  $handler->display->display_options['fields']['field_pa_add_imadrid']['id'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['table'] = 'field_data_field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['field'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rosalva */
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['id'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['table'] = 'field_data_field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['field'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added San Juana */
  $handler->display->display_options['fields']['field_pa_added_sreyes']['id'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['table'] = 'field_data_field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['field'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Pha */
  $handler->display->display_options['fields']['field_pa_added_phong']['id'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['table'] = 'field_data_field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['field'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rose */
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['id'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['table'] = 'field_data_field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['field'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['path'] = 'reports/MedoncAdded';

  /* Display: BlockGrphAdded */
  $handler = $view->new_display('block', 'BlockGrphAdded', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_phong' => 'field_pa_added_phong',
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_pa_added_sreyes' => 'field_pa_added_sreyes',
    'field_pa_added_pcascante' => 'field_pa_added_pcascante',
    'field_pa_added_rotafoya' => 'field_pa_added_rotafoya',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_added_wigriego' => '#0d233a',
    'field_pa_added_phong' => '#8bbc21',
    'field_pa_added_ravaldez' => '#910000',
    'field_pa_added_sreyes' => '#1aadce',
    'field_pa_added_pcascante' => '#492970',
    'field_pa_added_rotafoya' => '#f28f43',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: PA Daily Reports: PA Added Isabel */
  $handler->display->display_options['fields']['field_pa_add_imadrid']['id'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['table'] = 'field_data_field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['field'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rosalva */
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['id'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['table'] = 'field_data_field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['field'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added San Juana */
  $handler->display->display_options['fields']['field_pa_added_sreyes']['id'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['table'] = 'field_data_field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['field'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['label'] = 'San Juana';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_sreyes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Pha */
  $handler->display->display_options['fields']['field_pa_added_phong']['id'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['table'] = 'field_data_field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['field'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['label'] = 'Pha';
  $handler->display->display_options['fields']['field_pa_added_phong']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['label'] = 'Bill';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rose */
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['id'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['table'] = 'field_data_field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['field'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['label'] = 'Rose';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'GphMOAdded';

  /* Display: AddedCSV */
  $handler = $view->new_display('views_data_export', 'AddedCSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Isabel */
  $handler->display->display_options['fields']['field_pa_add_imadrid']['id'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['table'] = 'field_data_field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['field'] = 'field_pa_add_imadrid';
  $handler->display->display_options['fields']['field_pa_add_imadrid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rosalva */
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['id'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['table'] = 'field_data_field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['field'] = 'field_pa_added_rojaramillo';
  $handler->display->display_options['fields']['field_pa_added_rojaramillo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added San Juana */
  $handler->display->display_options['fields']['field_pa_added_sreyes']['id'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['table'] = 'field_data_field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['field'] = 'field_pa_added_sreyes';
  $handler->display->display_options['fields']['field_pa_added_sreyes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Pha */
  $handler->display->display_options['fields']['field_pa_added_phong']['id'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['table'] = 'field_data_field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['field'] = 'field_pa_added_phong';
  $handler->display->display_options['fields']['field_pa_added_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rose */
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['id'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['table'] = 'field_data_field_pa_added_rotafoya';
  $handler->display->display_options['fields']['field_pa_added_rotafoya']['field'] = 'field_pa_added_rotafoya';
  $handler->display->display_options['path'] = 'reports/MedoncAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'page_2' => 0,
    'block_2' => 0,
  );

  /* Display: Completed */
  $handler = $view->new_display('page', 'Completed', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_completed_pcascante' => 'field_pa_completed_pcascante',
    'field_pa_completed_ravaldez' => 'field_pa_completed_ravaldez',
    'field_pa_completed_rotafoya' => 'field_pa_completed_rotafoya',
    'field_pa_completed_sreyes' => 'field_pa_completed_sreyes',
    'field_pa_completed_wigriego' => 'field_pa_completed_wigriego',
    'field_pa_completed_phong' => 'field_pa_completed_phong',
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
    'field_pa_completed_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Isabel */
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['id'] = 'field_pa_completed_imadrid';
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['table'] = 'field_data_field_pa_completed_imadrid';
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['field'] = 'field_pa_completed_imadrid';
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Rosalva */
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['id'] = 'field_pa_completed_rojaramillo';
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['table'] = 'field_data_field_pa_completed_rojaramillo';
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['field'] = 'field_pa_completed_rojaramillo';
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Field: PA Daily Reports: PA Completed Pha */
  $handler->display->display_options['fields']['field_pa_completed_phong']['id'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['table'] = 'field_data_field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['field'] = 'field_pa_completed_phong';
  /* Field: PA Daily Reports: PA Completed Linda */
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['id'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['table'] = 'field_data_field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['field'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Jemel */
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['id'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['table'] = 'field_data_field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['field'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/MedoncCompleted';

  /* Display: BlockGrphCompleted */
  $handler = $view->new_display('block', 'BlockGrphCompleted', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_completed_imadrid' => 'field_pa_completed_imadrid',
    'field_pa_completed_rojaramillo' => 'field_pa_completed_rojaramillo',
    'field_pa_completed_sreyes' => 'field_pa_completed_sreyes',
    'field_pa_completed_phong' => 'field_pa_completed_phong',
    'field_pa_completed_ldimas' => 'field_pa_completed_ldimas',
    'field_pa_completed_wigriego' => 'field_pa_completed_wigriego',
    'field_pa_completed_gjcoleman' => 'field_pa_completed_gjcoleman',
    'field_pa_completed_rotafoya' => 'field_pa_completed_rotafoya',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_completed_imadrid' => '#492970',
    'field_pa_completed_rojaramillo' => '#c42525',
    'field_pa_completed_sreyes' => '#1aadce',
    'field_pa_completed_phong' => '#f28f43',
    'field_pa_completed_ldimas' => '#77a1e5',
    'field_pa_completed_wigriego' => '#492970',
    'field_pa_completed_gjcoleman' => '#f28f43',
    'field_pa_completed_rotafoya' => '#910000',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Isabel */
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['id'] = 'field_pa_completed_imadrid';
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['table'] = 'field_data_field_pa_completed_imadrid';
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['field'] = 'field_pa_completed_imadrid';
  $handler->display->display_options['fields']['field_pa_completed_imadrid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Rosalva */
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['id'] = 'field_pa_completed_rojaramillo';
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['table'] = 'field_data_field_pa_completed_rojaramillo';
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['field'] = 'field_pa_completed_rojaramillo';
  $handler->display->display_options['fields']['field_pa_completed_rojaramillo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Field: PA Daily Reports: PA Completed Pha */
  $handler->display->display_options['fields']['field_pa_completed_phong']['id'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['table'] = 'field_data_field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['field'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Linda */
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['id'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['table'] = 'field_data_field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['field'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Jemel */
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['id'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['table'] = 'field_data_field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['field'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['block_description'] = 'GphMOCompleted';

  /* Display: CompletedCSV */
  $handler = $view->new_display('views_data_export', 'CompletedCSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Priscila */
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['id'] = 'field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['table'] = 'field_data_field_pa_completed_pcascante';
  $handler->display->display_options['fields']['field_pa_completed_pcascante']['field'] = 'field_pa_completed_pcascante';
  /* Field: PA Daily Reports: PA Completed Roberta */
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['id'] = 'field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['table'] = 'field_data_field_pa_completed_ravaldez';
  $handler->display->display_options['fields']['field_pa_completed_ravaldez']['field'] = 'field_pa_completed_ravaldez';
  /* Field: PA Daily Reports: PA Completed Rose */
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['id'] = 'field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['table'] = 'field_data_field_pa_completed_rotafoya';
  $handler->display->display_options['fields']['field_pa_completed_rotafoya']['field'] = 'field_pa_completed_rotafoya';
  /* Field: PA Daily Reports: PA Completed San Juana */
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['id'] = 'field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['table'] = 'field_data_field_pa_completed_sreyes';
  $handler->display->display_options['fields']['field_pa_completed_sreyes']['field'] = 'field_pa_completed_sreyes';
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Pha */
  $handler->display->display_options['fields']['field_pa_completed_phong']['id'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['table'] = 'field_data_field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['field'] = 'field_pa_completed_phong';
  $handler->display->display_options['fields']['field_pa_completed_phong']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/MedoncCompleted.csv';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $export['stats_medonc_pa_productivity_reports'] = $view;

  $view = new view();
  $view->name = 'stats_radonc_pa_productivity_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_pa_daily_reports';
  $view->human_name = 'Stats RadOnc PA Productivity Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PA RadOnc Daily Productivity Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '150';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Rosalio */
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['id'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['table'] = 'field_data_field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['field'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Rosalio */
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['id'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['table'] = 'field_data_field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['field'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: PA Daily Reports: pa_daily_reports type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'eck_pa_daily_reports';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'ro_daily' => 'ro_daily',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'stats-pa-ro-prod-reports';

  /* Display: Added */
  $handler = $view->new_display('page', 'Added', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_phong' => 'field_pa_added_phong',
    'field_pa_added_ravaldez' => 'field_pa_added_ravaldez',
    'field_pa_added_sreyes' => 'field_pa_added_sreyes',
    'field_pa_added_pcascante' => 'field_pa_added_pcascante',
    'field_pa_added_rotafoya' => 'field_pa_added_rotafoya',
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
    'field_pa_added_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_added_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Rosalio */
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['id'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['table'] = 'field_data_field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['field'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/RadoncAdded';

  /* Display: BlockGrphAdded */
  $handler = $view->new_display('block', 'BlockGrphAdded', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_added_romgonzales' => 'field_pa_added_romgonzales',
    'field_pa_added_wigriego' => 'field_pa_added_wigriego',
    'field_pa_added_ldimas' => 'field_pa_added_ldimas',
    'field_pa_added_gjcoleman' => 'field_pa_added_gjcoleman',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_added_romgonzales' => '#0d233a',
    'field_pa_added_wigriego' => '#0d233a',
    'field_pa_added_ldimas' => '#910000',
    'field_pa_added_gjcoleman' => '#1aadce',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 1;
  /* Field: PA Daily Reports: PA Added Rosalio */
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['id'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['table'] = 'field_data_field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['field'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['label'] = 'Bill';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'GphROAdded';

  /* Display: AddedCSV */
  $handler = $view->new_display('views_data_export', 'AddedCSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Added Rosalio */
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['id'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['table'] = 'field_data_field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['field'] = 'field_pa_added_romgonzales';
  $handler->display->display_options['fields']['field_pa_added_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Bill */
  $handler->display->display_options['fields']['field_pa_added_wigriego']['id'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['table'] = 'field_data_field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['field'] = 'field_pa_added_wigriego';
  $handler->display->display_options['fields']['field_pa_added_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Linda */
  $handler->display->display_options['fields']['field_pa_added_ldimas']['id'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['table'] = 'field_data_field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['field'] = 'field_pa_added_ldimas';
  $handler->display->display_options['fields']['field_pa_added_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Added Jemel */
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['id'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['table'] = 'field_data_field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['field'] = 'field_pa_added_gjcoleman';
  $handler->display->display_options['fields']['field_pa_added_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/RadoncAdded.csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'page_2' => 0,
    'block_2' => 0,
  );

  /* Display: Completed */
  $handler = $view->new_display('page', 'Completed', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_pa_completed_pcascante' => 'field_pa_completed_pcascante',
    'field_pa_completed_ravaldez' => 'field_pa_completed_ravaldez',
    'field_pa_completed_rotafoya' => 'field_pa_completed_rotafoya',
    'field_pa_completed_sreyes' => 'field_pa_completed_sreyes',
    'field_pa_completed_wigriego' => 'field_pa_completed_wigriego',
    'field_pa_completed_phong' => 'field_pa_completed_phong',
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
    'field_pa_completed_pcascante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_ravaldez' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_rotafoya' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_sreyes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_wigriego' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pa_completed_phong' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Rosalio */
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['id'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['table'] = 'field_data_field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['field'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Linda */
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['id'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['table'] = 'field_data_field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['field'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Jemel */
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['id'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['table'] = 'field_data_field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['field'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/RadoncCompleted';

  /* Display: BlockGrphCompleted */
  $handler = $view->new_display('block', 'BlockGrphCompleted', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['label_field'] = 'field_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pa_completed_romgonzales' => 'field_pa_completed_romgonzales',
    'field_pa_completed_wigriego' => 'field_pa_completed_wigriego',
    'field_pa_completed_ldimas' => 'field_pa_completed_ldimas',
    'field_pa_completed_gjcoleman' => 'field_pa_completed_gjcoleman',
    'field_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_date' => '#2f7ed8',
    'field_pa_completed_romgonzales' => '#0d233a',
    'field_pa_completed_wigriego' => '#492970',
    'field_pa_completed_ldimas' => '#77a1e5',
    'field_pa_completed_gjcoleman' => '#f28f43',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Rosalio */
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['id'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['table'] = 'field_data_field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['field'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Linda */
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['id'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['table'] = 'field_data_field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['field'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Jemel */
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['id'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['table'] = 'field_data_field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['field'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'GphROCompleted';

  /* Display: CompletedCSV */
  $handler = $view->new_display('views_data_export', 'CompletedCSV', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
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
  $handler->display->display_options['fields']['field_date']['format_date_sql'] = 0;
  /* Field: PA Daily Reports: PA Completed Rosalio */
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['id'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['table'] = 'field_data_field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['field'] = 'field_pa_completed_romgonzales';
  $handler->display->display_options['fields']['field_pa_completed_romgonzales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Bill */
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['id'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['table'] = 'field_data_field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['field'] = 'field_pa_completed_wigriego';
  $handler->display->display_options['fields']['field_pa_completed_wigriego']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Linda */
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['id'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['table'] = 'field_data_field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['field'] = 'field_pa_completed_ldimas';
  $handler->display->display_options['fields']['field_pa_completed_ldimas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: PA Daily Reports: PA Completed Jemel */
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['id'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['table'] = 'field_data_field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['field'] = 'field_pa_completed_gjcoleman';
  $handler->display->display_options['fields']['field_pa_completed_gjcoleman']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'reports/RadoncCompleted.csv';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $export['stats_radonc_pa_productivity_reports'] = $view;

  return $export;
}
