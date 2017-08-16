<?php
/**
 * @file
 * operational_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function operational_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'assign_schedules_to_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_schedule';
  $view->human_name = 'Assign Schedules to Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assign Schedules to Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'field_app_date' => 'field_app_date',
    'field_name' => 'field_name',
    'field_activity' => 'field_activity',
    'field_pa_status' => 'field_pa_status',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_app_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 0,
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
    'field_pa_status' => array(
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Please select "Assign to:" operation above, then check the schedules you want to assign to a staff, then click "execute".  You\'ll select the actual staff in the next step.';
  /* Relationship: Schedule: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['relationships']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['relationships']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  /* Field: Bulk operations: Schedule */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::views_bulk_operations_change_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Assign to:',
    ),
  );
  /* Field: Schedule: App Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['relationship'] = 'field_patient_reference_target_id';
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: PA Status */
  $handler->display->display_options['fields']['field_pa_status']['id'] = 'field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['table'] = 'field_data_field_pa_status';
  $handler->display->display_options['fields']['field_pa_status']['field'] = 'field_pa_status';
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
  $handler->display->display_options['fields']['name']['label'] = 'Owner (INS VER)';
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );

  /* Display: all sch */
  $handler = $view->new_display('page', 'all sch', 'page');
  $handler->display->display_options['path'] = 'assign-schedules-to-staff';

  /* Display: mo */
  $handler = $view->new_display('page', 'mo', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assign MO  Schedules to Staff';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '482',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  $handler->display->display_options['path'] = 'assign-mo-schedules-to-staff';

  /* Display: medicare */
  $handler = $view->new_display('page', 'medicare', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assign Medicare Schedules to Staff';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '483',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  $handler->display->display_options['path'] = 'assign-medicare-schedules-to-staff';

  /* Display: ro */
  $handler = $view->new_display('page', 'ro', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assign RO  Schedules to Staff';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '653',
  );
  $handler->display->display_options['filters']['field_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  $handler->display->display_options['path'] = 'assign-ro-schedules-to-staff';
  $export['assign_schedules_to_staff'] = $view;

  $view = new view();
  $view->name = 'orderlist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Orders without appointment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_start_date' => 'field_start_date',
    'field_patient_ref' => 'field_patient_ref',
    'field_mrn' => 'field_mrn',
    'field_drug' => 'field_drug',
    'field_order_status' => 'field_order_status',
    'name' => 'name',
    'field_staff_notes' => 'field_staff_notes',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_patient_ref' => array(
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
    'field_drug' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_status' => array(
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
    'field_staff_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'no_pagination',
    'length_change' => 0,
    'display_length' => '10',
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['id'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['field'] = 'field_patient_ref_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['id'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['field'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['relationship'] = 'field_patient_ref_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
  /* Field: Schedule: Staff Notes */
  $handler->display->display_options['fields']['field_staff_notes']['id'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['field'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_staff_notes']['label'] = 'PCC (Staff) Notes';
  /* Field: Schedule: Auth Number (editable) */
  $handler->display->display_options['fields']['field_auth_number_editable']['id'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['table'] = 'field_data_field_auth_number';
  $handler->display->display_options['fields']['field_auth_number_editable']['field'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_auth_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_description'] = 0;
  /* Field: Schedule: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['relationship'] = 'reverse_field_patient_reference_schedule';
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
    'order' => 'order',
  );
  /* Filter criterion: Schedule: Id */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['filters']['id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/order-list';

  /* Display: cloned */
  $handler = $view->new_display('page', 'cloned', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders with appointment';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
  /* Field: Schedule: Staff Notes */
  $handler->display->display_options['fields']['field_staff_notes']['id'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['field'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_staff_notes']['label'] = 'PCC (Staff) Notes';
  /* Field: Schedule: Auth Number (editable) */
  $handler->display->display_options['fields']['field_auth_number_editable']['id'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['table'] = 'field_data_field_auth_number';
  $handler->display->display_options['fields']['field_auth_number_editable']['field'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_auth_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_description'] = 0;
  /* Field: Schedule: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['path'] = 'order-list';

  /* Display: orders without schedules */
  $handler = $view->new_display('page', 'orders without schedules', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Order Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
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
    'order' => 'order',
  );
  /* Filter criterion: Schedule: Id */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['filters']['id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'orphan-order-list';

  /* Display: editable order with sched */
  $handler = $view->new_display('page', 'editable order with sched', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders with appointment';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_start_date' => 'field_start_date',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_patient_ref' => 'field_patient_ref',
    'field_mrn' => 'field_mrn',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_drug' => 'field_drug',
    'field_order_status' => 'field_order_status',
    'name' => 'name',
    'field_staff_notes' => 'field_staff_notes',
    'field_auth_number_editable' => 'field_auth_number_editable',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_start_date' => array(
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
    'field_patient_ref' => array(
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
    'field_insurance_payer_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drug' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_status' => array(
      'sortable' => 1,
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
    'field_staff_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_auth_number_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['relationship_creation_bundle'] = array(
    'reverse_field_patient_reference_schedule' => 'schedule',
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
  /* Field: Schedule: Staff Notes */
  $handler->display->display_options['fields']['field_staff_notes']['id'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['field'] = 'field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_staff_notes']['label'] = 'PCC (Staff) Notes';
  /* Field: Schedule: Auth Number (editable) */
  $handler->display->display_options['fields']['field_auth_number_editable']['id'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['table'] = 'field_data_field_auth_number';
  $handler->display->display_options['fields']['field_auth_number_editable']['field'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_auth_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_description'] = 0;
  /* Field: Schedule: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['path'] = 'order-and-appointment-list';

  /* Display: same day order */
  $handler = $view->new_display('page', 'same day order', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders placed today';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_start_date' => 'field_start_date',
    'field_mrn' => 'field_mrn',
    'field_patient_ref' => 'field_patient_ref',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_notes' => 'field_notes',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_drug' => 'field_drug',
    'field_order_status' => 'field_order_status',
    'name' => 'name',
    'field_staff_notes' => 'field_staff_notes',
    'field_auth_number_editable' => 'field_auth_number_editable',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_start_date' => array(
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
    'field_patient_ref' => array(
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
    'field_notes' => array(
      'sortable' => 0,
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
    'field_drug' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_status' => array(
      'sortable' => 1,
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
    'field_staff_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_auth_number_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['id'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['field'] = 'field_patient_ref_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['id'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['field'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_staff_notes_editable']['label'] = 'PCC Notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Schedule: Auth Number (editable) */
  $handler->display->display_options['fields']['field_auth_number_editable']['id'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['table'] = 'field_data_field_auth_number';
  $handler->display->display_options['fields']['field_auth_number_editable']['field'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_auth_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_description'] = 0;
  /* Field: Schedule: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['relationship'] = 'reverse_field_patient_reference_schedule';
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
    'order' => 'order',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '645',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Placed Today (Do not Edit) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['min'] = '-10 hours';
  $handler->display->display_options['filters']['created']['value']['value'] = '-10 hours';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created_1']['id'] = 'created_1';
  $handler->display->display_options['filters']['created_1']['table'] = 'node';
  $handler->display->display_options['filters']['created_1']['field'] = 'created';
  $handler->display->display_options['filters']['created_1']['operator'] = '<';
  $handler->display->display_options['filters']['created_1']['value']['value'] = '+1 day';
  $handler->display->display_options['filters']['created_1']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'orders-placed-today';

  /* Display: same day orders over time */
  $handler = $view->new_display('page', 'same day orders over time', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sam Day Orders Over Time';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
    'order' => 'order',
  );
  /* Filter criterion: Schedule: Id */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['filters']['id']['operator'] = 'not empty';
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '645',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Placed Today (Do not Edit) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  $handler->display->display_options['path'] = 'orders-same-day-over-time';

  /* Display: same day order no sch */
  $handler = $view->new_display('page', 'same day order no sch', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders placed today';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_start_date' => 'field_start_date',
    'field_mrn' => 'field_mrn',
    'field_patient_ref' => 'field_patient_ref',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_notes' => 'field_notes',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_drug' => 'field_drug',
    'field_order_status' => 'field_order_status',
    'name' => 'name',
    'field_staff_notes' => 'field_staff_notes',
    'field_auth_number_editable' => 'field_auth_number_editable',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_start_date' => array(
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
    'field_patient_ref' => array(
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
    'field_notes' => array(
      'sortable' => 0,
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
    'field_drug' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_status' => array(
      'sortable' => 1,
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
    'field_staff_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_auth_number_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['id'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['field'] = 'field_patient_ref_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
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
    'order' => 'order',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '645',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Placed Today (Do not Edit) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  $handler->display->display_options['path'] = 'orders-placed-today-nosch';

  /* Display: historical same day order */
  $handler = $view->new_display('page', 'historical same day order', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Historical Same-day orders';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_start_date' => 'field_start_date',
    'field_mrn' => 'field_mrn',
    'field_patient_ref' => 'field_patient_ref',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_notes' => 'field_notes',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_drug' => 'field_drug',
    'field_order_status' => 'field_order_status',
    'name' => 'name',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
    'field_auth_number_editable' => 'field_auth_number_editable',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_start_date' => array(
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
    'field_patient_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity' => array(
      'sortable' => 0,
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
    'field_insurance_payer_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drug' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_status' => array(
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
    'field_staff_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_auth_number_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['id'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['field'] = 'field_patient_ref_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['id'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['field'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_staff_notes_editable']['label'] = 'PCC Notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Schedule: Auth Number (editable) */
  $handler->display->display_options['fields']['field_auth_number_editable']['id'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['table'] = 'field_data_field_auth_number';
  $handler->display->display_options['fields']['field_auth_number_editable']['field'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_auth_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_description'] = 0;
  /* Field: Schedule: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['relationship'] = 'reverse_field_patient_reference_schedule';
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
    'order' => 'order',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '645',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Placed Today (Do not Edit) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  $handler->display->display_options['path'] = 'historical-same-day-orders';

  /* Display: expired same day order */
  $handler = $view->new_display('page', 'expired same day order', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders Expired placed same day';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_start_date' => 'field_start_date',
    'field_mrn' => 'field_mrn',
    'field_patient_ref' => 'field_patient_ref',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_notes' => 'field_notes',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_drug' => 'field_drug',
    'field_order_status' => 'field_order_status',
    'name' => 'name',
    'field_staff_notes' => 'field_staff_notes',
    'field_auth_number_editable' => 'field_auth_number_editable',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_start_date' => array(
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
    'field_patient_ref' => array(
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
    'field_notes' => array(
      'sortable' => 0,
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
    'field_drug' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_status' => array(
      'sortable' => 1,
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
    'field_staff_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_auth_number_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['id'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['field'] = 'field_patient_ref_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['id'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['field'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['reverse_field_patient_reference_schedule']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Appointment / Start Date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['label'] = 'Patient (Last,Middle,First)';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['relationship'] = 'reverse_field_patient_reference_schedule';
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'INS VER';
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_staff_notes_editable']['label'] = 'PCC Notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Schedule: Auth Number (editable) */
  $handler->display->display_options['fields']['field_auth_number_editable']['id'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['table'] = 'field_data_field_auth_number';
  $handler->display->display_options['fields']['field_auth_number_editable']['field'] = 'field_auth_number_editable';
  $handler->display->display_options['fields']['field_auth_number_editable']['relationship'] = 'reverse_field_patient_reference_schedule';
  $handler->display->display_options['fields']['field_auth_number_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_auth_number_editable']['suppress_description'] = 0;
  /* Field: Schedule: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_schedule';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['relationship'] = 'reverse_field_patient_reference_schedule';
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
    'order' => 'order',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '645',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Placed Today (Do not Edit) (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created_1']['id'] = 'created_1';
  $handler->display->display_options['filters']['created_1']['table'] = 'node';
  $handler->display->display_options['filters']['created_1']['field'] = 'created';
  $handler->display->display_options['filters']['created_1']['operator'] = '<=';
  $handler->display->display_options['filters']['created_1']['value']['value'] = '-1 day';
  $handler->display->display_options['filters']['created_1']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'expired-orders-placed-sameday';
  $export['orderlist'] = $view;

  $view = new view();
  $view->name = 'orders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'orders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* Field: Content: Patient */
  $handler->display->display_options['fields']['field_patient_ref']['id'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['field'] = 'field_patient_ref';
  $handler->display->display_options['fields']['field_patient_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
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
    'order' => 'order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/admin-orders-list';
  $export['orders'] = $view;

  $view = new view();
  $view->name = 'same_day_orders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Same Day Orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Same Day Orders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_drug' => 'field_drug',
    'field_order_status_editable' => 'field_order_status_editable',
    'field_start_date' => 'field_start_date',
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
    'field_drug' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_status_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['id'] = 'field_patient_ref_target_id';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['table'] = 'field_data_field_patient_ref';
  $handler->display->display_options['relationships']['field_patient_ref_target_id']['field'] = 'field_patient_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_schedule_ref_target_id']['id'] = 'field_schedule_ref_target_id';
  $handler->display->display_options['relationships']['field_schedule_ref_target_id']['table'] = 'field_data_field_schedule_ref';
  $handler->display->display_options['relationships']['field_schedule_ref_target_id']['field'] = 'field_schedule_ref_target_id';
  $handler->display->display_options['relationships']['field_schedule_ref_target_id']['required'] = TRUE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_ref_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Order Description */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'field_data_field_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  /* Field: Content: Order Status (editable) */
  $handler->display->display_options['fields']['field_order_status_editable']['id'] = 'field_order_status_editable';
  $handler->display->display_options['fields']['field_order_status_editable']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status_editable']['field'] = 'field_order_status_editable';
  $handler->display->display_options['fields']['field_order_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_order_status_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_order_status_editable']['suppress_description'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Name (INS VER)';
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['relationship'] = 'field_schedule_ref_target_id';
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_schedule_ref_target_id';
  /* Field: Schedule: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['relationship'] = 'field_schedule_ref_target_id';
  /* Field: Schedule: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['relationship'] = 'field_schedule_ref_target_id';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
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
    'order' => 'order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'same-day-orderss';
  $export['same_day_orders'] = $view;

  $view = new view();
  $view->name = 'schedule_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_schedule';
  $view->human_name = 'schedule reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Schedule: App Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = '';
  $handler->display->display_options['fields']['field_app_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_patient_reference']['label'] = '';
  $handler->display->display_options['fields']['field_patient_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_patient_reference']['settings'] = array(
    'link' => 0,
  );
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '481',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_app_date' => 'field_app_date',
    'field_patient_reference' => 'field_patient_reference',
    'field_department' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_app_date' => 'field_app_date',
    'field_patient_reference' => 'field_patient_reference',
  );
  $handler->display->display_options['row_options']['separator'] = '--';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['schedule_reference'] = $view;

  $view = new view();
  $view->name = 'schedules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Schedules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Schedules';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_app_date' => 'field_app_date',
    'field_patient_reference' => 'field_patient_reference',
    'field_activity' => 'field_activity',
    'field_location' => 'field_location',
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
    'field_patient_reference' => array(
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
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Schedule: App Date */
  $handler->display->display_options['fields']['field_app_date']['id'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['table'] = 'field_data_field_app_date';
  $handler->display->display_options['fields']['field_app_date']['field'] = 'field_app_date';
  $handler->display->display_options['fields']['field_app_date']['label'] = 'Appointment Date';
  $handler->display->display_options['fields']['field_app_date']['settings'] = array(
    'format_type' => 'long',
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
  /* Field: Schedule: Activity */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  /* Field: Schedule: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schedules';
  $export['schedules'] = $view;

  $view = new view();
  $view->name = 'shc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_schedule';
  $view->human_name = 'sch';
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
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_app_date' => 'field_app_date',
    'field_mrn' => 'field_mrn',
    'field_patient_reference' => 'field_patient_reference',
    'field_location' => 'field_location',
    'field_activity' => 'field_activity',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'field_notes' => 'field_notes',
    'name' => 'name',
    'field_pa_status_editable' => 'field_pa_status_editable',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
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
  );
  $handler->display->display_options['style_options']['save_messages'] = 'none';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary stats:';
  /* Relationship: Schedule: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_schedule';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['relationships']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['relationships']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  /* Field: Schedule: App Date */
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
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_department_tid']['value'] = '';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sch';

  /* Display: chemo */
  $handler = $view->new_display('page', 'chemo', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chemo Schedule';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '481',
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
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
  $handler->display->display_options['path'] = 'chemo-schedule';

  /* Display: medonc */
  $handler = $view->new_display('page', 'medonc', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'MedOnc Schedule';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '482',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
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
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'medonc-schedule';

  /* Display: medicare */
  $handler = $view->new_display('page', 'medicare', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medicare Schedule';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '483',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
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
  $handler->display->display_options['path'] = 'medicare-schedule';

  /* Display: medonc done */
  $handler = $view->new_display('page', 'medonc done', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'MedOnc Schedule - Completed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '482',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
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
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'medonc-schedule-completed';

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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '483',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '481',
  );
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'section';
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '653',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
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
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Schedule: schedule type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_schedule';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule' => 'schedule',
  );
  /* Filter criterion: Field: Department (field_department) */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    0 => '653',
  );
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Department (field_department)';
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
  $handler->display->display_options['filters']['field_pa_status_value']['value'] = array(
    'Authorized' => 'Authorized',
    'Completed' => 'Completed',
    'Denied' => 'Denied',
    'No PA Needed' => 'No PA Needed',
  );
  /* Filter criterion: Schedule: Patient (field_patient_reference) */
  $handler->display->display_options['filters']['field_patient_reference_target_id']['id'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['table'] = 'field_data_field_patient_reference';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['field'] = 'field_patient_reference_target_id';
  $handler->display->display_options['filters']['field_patient_reference_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'radonc-schedule-completed';
  $export['shc'] = $view;

  return $export;
}
