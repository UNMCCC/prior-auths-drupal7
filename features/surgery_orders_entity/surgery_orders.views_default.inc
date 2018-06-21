<?php
/**
 * @file
 * surgery_orders.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function surgery_orders_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'surgery_orders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_surgery_orders';
  $view->human_name = 'Surgery Orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Surgery Orders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_mrn' => 'field_mrn',
    'field_patient_reference1' => 'field_patient_reference1',
    'field_surg_proc_name_termref' => 'field_surg_proc_name_termref',
    'field_surg_order_schedule_date' => 'field_surg_order_schedule_date',
    'field_surg_order_details' => 'field_surg_order_details',
    'field_surg_order_create_date' => 'field_surg_order_create_date',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'name' => 'name',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
    'field_s_o_pa_status_editable' => 'field_s_o_pa_status_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_surg_order_schedule_date';
  $handler->display->display_options['style_options']['info'] = array(
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
    'field_surg_proc_name_termref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surg_order_schedule_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surg_order_details' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surg_order_create_date' => array(
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
    'field_staff_notes_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_o_pa_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Summary stats:';
  /* Relationship: Surgery Orders: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['id'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['relationships']['field_patient_reference1_target_id']['field'] = 'field_patient_reference1_target_id';
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Field: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient ';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Surgery Orders: Proc Name */
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['id'] = 'field_surg_proc_name_termref';
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['table'] = 'field_data_field_surg_proc_name_termref';
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['field'] = 'field_surg_proc_name_termref';
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Surgery Orders: Order Schedule Date */
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['id'] = 'field_surg_order_schedule_date';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['table'] = 'field_data_field_surg_order_schedule_date';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['field'] = 'field_surg_order_schedule_date';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['label'] = 'Date of Surgery';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['format_date_sql'] = 0;
  /* Field: Surgery Orders: Order Details */
  $handler->display->display_options['fields']['field_surg_order_details']['id'] = 'field_surg_order_details';
  $handler->display->display_options['fields']['field_surg_order_details']['table'] = 'field_data_field_surg_order_details';
  $handler->display->display_options['fields']['field_surg_order_details']['field'] = 'field_surg_order_details';
  /* Field: Surgery Orders: Ordered On */
  $handler->display->display_options['fields']['field_surg_order_create_date']['id'] = 'field_surg_order_create_date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['table'] = 'field_data_field_surg_order_create_date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['field'] = 'field_surg_order_create_date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['label'] = 'Ordered On Date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_surg_order_create_date']['format_date_sql'] = 0;
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['label'] = 'Insurance';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['label'] = 'Staff_Enter_Notes_Here';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Surgery Orders: S.O. PA Status (editable) */
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['id'] = 'field_s_o_pa_status_editable';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['field'] = 'field_s_o_pa_status_editable';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['label'] = 'PA Status';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['suppress_description'] = 0;
  /* Filter criterion: Surgery Orders: surgery_orders type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'surgery_orders' => 'surgery_orders',
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Surgeries */
  $handler = $view->new_display('page', 'Surgeries', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Surgery Orders';
  $handler->display->display_options['path'] = 'all-surgery-orders';

  /* Display: Completed */
  $handler = $view->new_display('page', 'Completed', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Completed Surgery Orders';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Surgery Orders: surgery_orders type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'surgery_orders' => 'surgery_orders',
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Surgery Orders: S.O. PA Status (field_s_o_pa_status) */
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['id'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['field'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['value'] = array(
    'Completed' => 'Completed',
  );
  $handler->display->display_options['path'] = 'all-surgery-orders-complete';

  /* Display: Cancelled-pending-denied */
  $handler = $view->new_display('page', 'Cancelled-pending-denied', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Surgery Orders: Cancelled, Pending, Denied or Ordered';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Surgery Orders: surgery_orders type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'surgery_orders' => 'surgery_orders',
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Surgery Orders: S.O. PA Status (field_s_o_pa_status) */
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['id'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['field'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['value'] = array(
    'Canceled' => 'Canceled',
    'Ordered' => 'Ordered',
    'Denied' => 'Denied',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'all-surgery-orders-pending';

  /* Display: My New Surgeries */
  $handler = $view->new_display('page', 'My New Surgeries', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Surgery Orders';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Surgery Orders: surgery_orders type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'surgery_orders' => 'surgery_orders',
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Surgery Orders: S.O. PA Status (field_s_o_pa_status) */
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['id'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['field'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['value'] = array(
    'Canceled' => 'Canceled',
    'Completed' => 'Completed',
    'Ordered' => 'Ordered',
    'Denied' => 'Denied',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'my-surgery-orders';

  /* Display: My Completed */
  $handler = $view->new_display('page', 'My Completed', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Completed Surgery Orders';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Surgery Orders: surgery_orders type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'surgery_orders' => 'surgery_orders',
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Surgery Orders: S.O. PA Status (field_s_o_pa_status) */
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['id'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['field'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['value'] = array(
    'Completed' => 'Completed',
  );
  $handler->display->display_options['path'] = 'my-surgery-orders-complete';

  /* Display: my Cancelled-pending-denied */
  $handler = $view->new_display('page', 'my Cancelled-pending-denied', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Surgery Orders: Cancelled, Pending, Denied or Ordered';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Surgery Orders: surgery_orders type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'surgery_orders' => 'surgery_orders',
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Surgery Orders: S.O. PA Status (field_s_o_pa_status) */
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['id'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['field'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['value'] = array(
    'Canceled' => 'Canceled',
    'Ordered' => 'Ordered',
    'Denied' => 'Denied',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['path'] = 'my-surgery-orders-pending';

  /* Display: Splash - Landing */
  $handler = $view->new_display('page', 'Splash - Landing', 'page_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href="my-surgery-orders">My New Surgery Orders</a></li>
<li><a href="my-surgery-orders-complete">My Completed Surgery Orders</a></li>
<li><a href="my-survery-orders-pending">My Other Statuses Surgery Orders</a></li>
<li><a href="all-surgery-orders">All Surgery Orders</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'surgery-orders';

  /* Display: Transfer */
  $handler = $view->new_display('page', 'Transfer', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Transfer Surgery Orders';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_mrn' => 'field_mrn',
    'field_patient_reference1' => 'field_patient_reference1',
    'field_surg_proc_name_termref' => 'field_surg_proc_name_termref',
    'field_surg_order_schedule_date' => 'field_surg_order_schedule_date',
    'field_surg_order_details' => 'field_surg_order_details',
    'field_surg_order_create_date' => 'field_surg_order_create_date',
    'field_insurance_payer_' => 'field_insurance_payer_',
    'name' => 'name',
    'field_staff_notes_editable' => 'field_staff_notes_editable',
    'field_s_o_pa_status_editable' => 'field_s_o_pa_status_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'field_surg_proc_name_termref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surg_order_schedule_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surg_order_details' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surg_order_create_date' => array(
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
    'field_staff_notes_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_o_pa_status_editable' => array(
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
  /* Field: Bulk operations: Surgery Orders */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_surgery_orders';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_change_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Assign to: (use netid: ldimas, etc)',
    ),
  );
  /* Field: Content: MRN */
  $handler->display->display_options['fields']['field_mrn']['id'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['table'] = 'field_data_field_mrn';
  $handler->display->display_options['fields']['field_mrn']['field'] = 'field_mrn';
  $handler->display->display_options['fields']['field_mrn']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['fields']['field_mrn']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Field: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient ';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Surgery Orders: Proc Name */
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['id'] = 'field_surg_proc_name_termref';
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['table'] = 'field_data_field_surg_proc_name_termref';
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['field'] = 'field_surg_proc_name_termref';
  $handler->display->display_options['fields']['field_surg_proc_name_termref']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Surgery Orders: Order Schedule Date */
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['id'] = 'field_surg_order_schedule_date';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['table'] = 'field_data_field_surg_order_schedule_date';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['field'] = 'field_surg_order_schedule_date';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['label'] = 'Date of Surgery';
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_surg_order_schedule_date']['format_date_sql'] = 0;
  /* Field: Surgery Orders: Order Details */
  $handler->display->display_options['fields']['field_surg_order_details']['id'] = 'field_surg_order_details';
  $handler->display->display_options['fields']['field_surg_order_details']['table'] = 'field_data_field_surg_order_details';
  $handler->display->display_options['fields']['field_surg_order_details']['field'] = 'field_surg_order_details';
  /* Field: Surgery Orders: Ordered On */
  $handler->display->display_options['fields']['field_surg_order_create_date']['id'] = 'field_surg_order_create_date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['table'] = 'field_data_field_surg_order_create_date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['field'] = 'field_surg_order_create_date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['label'] = 'Ordered On Date';
  $handler->display->display_options['fields']['field_surg_order_create_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_surg_order_create_date']['format_date_sql'] = 0;
  /* Field: Field: Insurance (Payer) */
  $handler->display->display_options['fields']['field_insurance_payer_']['id'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['table'] = 'field_data_field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['field'] = 'field_insurance_payer_';
  $handler->display->display_options['fields']['field_insurance_payer_']['label'] = 'Insurance';
  $handler->display->display_options['fields']['field_insurance_payer_']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: Staff Notes (editable) */
  $handler->display->display_options['fields']['field_staff_notes_editable']['id'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['table'] = 'field_data_field_staff_notes';
  $handler->display->display_options['fields']['field_staff_notes_editable']['field'] = 'field_staff_notes_editable';
  $handler->display->display_options['fields']['field_staff_notes_editable']['label'] = 'Staff_Enter_Notes_Here';
  $handler->display->display_options['fields']['field_staff_notes_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_staff_notes_editable']['suppress_description'] = 0;
  /* Field: Surgery Orders: S.O. PA Status (editable) */
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['id'] = 'field_s_o_pa_status_editable';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['field'] = 'field_s_o_pa_status_editable';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['label'] = 'PA Status';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_s_o_pa_status_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Surgery Orders: surgery_orders type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_surgery_orders';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'surgery_orders' => 'surgery_orders',
  );
  /* Filter criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['relationship'] = 'field_patient_reference1_target_id';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Surgery Orders: S.O. PA Status (field_s_o_pa_status) */
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['id'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['table'] = 'field_data_field_s_o_pa_status';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['field'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['expose']['operator_id'] = 'field_s_o_pa_status_value_op';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['expose']['label'] = 'PA Status';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['expose']['operator'] = 'field_s_o_pa_status_value_op';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['expose']['identifier'] = 'field_s_o_pa_status_value';
  $handler->display->display_options['filters']['field_s_o_pa_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'transfer-surgery-orders';
  $export['surgery_orders'] = $view;

  return $export;
}
