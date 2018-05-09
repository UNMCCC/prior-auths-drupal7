<?php
/**
 * @file
 * labs_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function labs_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_labs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_labs';
  $view->human_name = 'New Labs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Labs';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_patient_reference1' => 'field_patient_reference1',
    'field_start_date' => 'field_start_date',
    'field_lab_comment' => 'field_lab_comment',
    'field_cpt_code' => 'field_cpt_code',
    'field_create_date' => 'field_create_date',
    'field_ordering_md' => 'field_ordering_md',
    'name' => 'name',
    'field_lab_status_editable' => 'field_lab_status_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_start_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_patient_reference1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lab_comment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cpt_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ordering_md' => array(
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
    'field_lab_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Relationship: Labs: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_labs';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Field: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_start_date']['format_date_sql'] = 0;
  /* Field: Labs: Comment */
  $handler->display->display_options['fields']['field_lab_comment']['id'] = 'field_lab_comment';
  $handler->display->display_options['fields']['field_lab_comment']['table'] = 'field_data_field_lab_comment';
  $handler->display->display_options['fields']['field_lab_comment']['field'] = 'field_lab_comment';
  /* Field: Labs: CPT Code */
  $handler->display->display_options['fields']['field_cpt_code']['id'] = 'field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['table'] = 'field_data_field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['field'] = 'field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Labs: Create Date */
  $handler->display->display_options['fields']['field_create_date']['id'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['table'] = 'field_data_field_create_date';
  $handler->display->display_options['fields']['field_create_date']['field'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_create_date']['format_date_sql'] = 0;
  /* Field: Labs: Ordering MD */
  $handler->display->display_options['fields']['field_ordering_md']['id'] = 'field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['table'] = 'field_data_field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['field'] = 'field_ordering_md';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Labs: Status (editable) */
  $handler->display->display_options['fields']['field_lab_status_editable']['id'] = 'field_lab_status_editable';
  $handler->display->display_options['fields']['field_lab_status_editable']['table'] = 'field_data_field_lab_status';
  $handler->display->display_options['fields']['field_lab_status_editable']['field'] = 'field_lab_status_editable';
  $handler->display->display_options['fields']['field_lab_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_lab_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_lab_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_lab_status_editable']['suppress_description'] = 0;
  /* Filter criterion: Labs: labs type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_labs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'labs' => 'labs',
  );

  /* Display: New Labs */
  $handler = $view->new_display('page', 'New Labs', 'page');
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
  /* Filter criterion: Labs: labs type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_labs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'labs' => 'labs',
  );
  /* Filter criterion: Labs: Status (field_lab_status) */
  $handler->display->display_options['filters']['field_lab_status_value']['id'] = 'field_lab_status_value';
  $handler->display->display_options['filters']['field_lab_status_value']['table'] = 'field_data_field_lab_status';
  $handler->display->display_options['filters']['field_lab_status_value']['field'] = 'field_lab_status_value';
  $handler->display->display_options['filters']['field_lab_status_value']['value'] = array(
    'new' => 'new',
  );
  $handler->display->display_options['path'] = 'labs-new';

  /* Display: Completed Labs */
  $handler = $view->new_display('page', 'Completed Labs', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Completed Labs';
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
  /* Filter criterion: Labs: labs type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_labs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'labs' => 'labs',
  );
  /* Filter criterion: Labs: Status (field_lab_status) */
  $handler->display->display_options['filters']['field_lab_status_value']['id'] = 'field_lab_status_value';
  $handler->display->display_options['filters']['field_lab_status_value']['table'] = 'field_data_field_lab_status';
  $handler->display->display_options['filters']['field_lab_status_value']['field'] = 'field_lab_status_value';
  $handler->display->display_options['filters']['field_lab_status_value']['value'] = array(
    'Completed' => 'Completed',
  );
  $handler->display->display_options['path'] = 'labs-completed';

  /* Display: Transfer */
  $handler = $view->new_display('page', 'Transfer', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assign Lab Orders to Staff';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_patient_reference1' => 'field_patient_reference1',
    'field_start_date' => 'field_start_date',
    'field_cpt_code' => 'field_cpt_code',
    'field_create_date' => 'field_create_date',
    'field_ordering_md' => 'field_ordering_md',
    'name' => 'name',
    'field_lab_status' => 'field_lab_status',
  );
  $handler->display->display_options['style_options']['default'] = 'field_start_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'field_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cpt_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ordering_md' => array(
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
    'field_lab_status' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Please use this transfer form to re-assign lab orders to other staff';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Labs */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_labs';
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
      'skip_permission_check' => 1,
      'override_label' => 1,
      'label' => 'Assign to:',
    ),
  );
  /* Field: Field: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_start_date']['format_date_sql'] = 0;
  /* Field: Labs: CPT Code */
  $handler->display->display_options['fields']['field_cpt_code']['id'] = 'field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['table'] = 'field_data_field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['field'] = 'field_cpt_code';
  /* Field: Labs: Create Date */
  $handler->display->display_options['fields']['field_create_date']['id'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['table'] = 'field_data_field_create_date';
  $handler->display->display_options['fields']['field_create_date']['field'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_create_date']['format_date_sql'] = 0;
  /* Field: Labs: Ordering MD */
  $handler->display->display_options['fields']['field_ordering_md']['id'] = 'field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['table'] = 'field_data_field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['field'] = 'field_ordering_md';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff';
  /* Field: Labs: Status */
  $handler->display->display_options['fields']['field_lab_status']['id'] = 'field_lab_status';
  $handler->display->display_options['fields']['field_lab_status']['table'] = 'field_data_field_lab_status';
  $handler->display->display_options['fields']['field_lab_status']['field'] = 'field_lab_status';
  $handler->display->display_options['path'] = 'labs-transfer';

  /* Display: In Review Labs */
  $handler = $view->new_display('page', 'In Review Labs', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lab Orders in Review';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_start_date']['format_date_sql'] = 0;
  /* Field: Labs: CPT Code */
  $handler->display->display_options['fields']['field_cpt_code']['id'] = 'field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['table'] = 'field_data_field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['field'] = 'field_cpt_code';
  /* Field: Labs: Create Date */
  $handler->display->display_options['fields']['field_create_date']['id'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['table'] = 'field_data_field_create_date';
  $handler->display->display_options['fields']['field_create_date']['field'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_create_date']['format_date_sql'] = 0;
  /* Field: Labs: Ordering MD */
  $handler->display->display_options['fields']['field_ordering_md']['id'] = 'field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['table'] = 'field_data_field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['field'] = 'field_ordering_md';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Labs: Comment */
  $handler->display->display_options['fields']['field_lab_comment']['id'] = 'field_lab_comment';
  $handler->display->display_options['fields']['field_lab_comment']['table'] = 'field_data_field_lab_comment';
  $handler->display->display_options['fields']['field_lab_comment']['field'] = 'field_lab_comment';
  /* Field: Labs: Status (editable) */
  $handler->display->display_options['fields']['field_lab_status_editable']['id'] = 'field_lab_status_editable';
  $handler->display->display_options['fields']['field_lab_status_editable']['table'] = 'field_data_field_lab_status';
  $handler->display->display_options['fields']['field_lab_status_editable']['field'] = 'field_lab_status_editable';
  $handler->display->display_options['fields']['field_lab_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_lab_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_lab_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_lab_status_editable']['suppress_description'] = 0;
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
  /* Filter criterion: Labs: labs type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_labs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'labs' => 'labs',
  );
  /* Filter criterion: Labs: Status (field_lab_status) */
  $handler->display->display_options['filters']['field_lab_status_value']['id'] = 'field_lab_status_value';
  $handler->display->display_options['filters']['field_lab_status_value']['table'] = 'field_data_field_lab_status';
  $handler->display->display_options['filters']['field_lab_status_value']['field'] = 'field_lab_status_value';
  $handler->display->display_options['filters']['field_lab_status_value']['value'] = array(
    'inreview' => 'inreview',
  );
  $handler->display->display_options['path'] = 'labs-review';

  /* Display: All Labs */
  $handler = $view->new_display('page', 'All Labs', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ALL Labs';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: PatIDRef */
  $handler->display->display_options['fields']['field_patient_reference1']['id'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['table'] = 'field_data_field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['field'] = 'field_patient_reference1';
  $handler->display->display_options['fields']['field_patient_reference1']['label'] = 'Patient';
  $handler->display->display_options['fields']['field_patient_reference1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_start_date']['format_date_sql'] = 0;
  /* Field: Labs: CPT Code */
  $handler->display->display_options['fields']['field_cpt_code']['id'] = 'field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['table'] = 'field_data_field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['field'] = 'field_cpt_code';
  $handler->display->display_options['fields']['field_cpt_code']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Labs: Create Date */
  $handler->display->display_options['fields']['field_create_date']['id'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['table'] = 'field_data_field_create_date';
  $handler->display->display_options['fields']['field_create_date']['field'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_create_date']['format_date_sql'] = 0;
  /* Field: Labs: Ordering MD */
  $handler->display->display_options['fields']['field_ordering_md']['id'] = 'field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['table'] = 'field_data_field_ordering_md';
  $handler->display->display_options['fields']['field_ordering_md']['field'] = 'field_ordering_md';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Staff';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Labs: Comment */
  $handler->display->display_options['fields']['field_lab_comment']['id'] = 'field_lab_comment';
  $handler->display->display_options['fields']['field_lab_comment']['table'] = 'field_data_field_lab_comment';
  $handler->display->display_options['fields']['field_lab_comment']['field'] = 'field_lab_comment';
  /* Field: Labs: Status (editable) */
  $handler->display->display_options['fields']['field_lab_status_editable']['id'] = 'field_lab_status_editable';
  $handler->display->display_options['fields']['field_lab_status_editable']['table'] = 'field_data_field_lab_status';
  $handler->display->display_options['fields']['field_lab_status_editable']['field'] = 'field_lab_status_editable';
  $handler->display->display_options['fields']['field_lab_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_lab_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_lab_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_lab_status_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Labs: labs type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_labs';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'labs' => 'labs',
  );
  $handler->display->display_options['path'] = 'labs-all';

  /* Display: Landing */
  $handler = $view->new_display('page', 'Landing', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lab Orders';
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
  $handler->display->display_options['header']['area']['content'] = 'You will find here recent orders posted on Mosaiq that need to be in Cerner/Powerchart.  New orders are added each 30 minutes, and assigned to the lab staff.

When you change the status of an order, the order will move to the corresponding list, making it easier to locate what is new, what is in review or completed.

Find here (or in the menu) the links to each list.  In each list you will only see the lab orders assign to you, except in the "Reassing" and "All Lab Orders" lists.

<ul>
<li><a href="labs-new">New Lab Orders</a></li>
<li><a href="labs-review">Lab Orders in Review</a></li>
<li><a href="labs-completed">Completed Lab Orders</a></li>
<li><a href="labs-transfer">Reassign Lab Orders</li>
<li><a href="labs-all">All Lab Orders</a></li>
</li>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Labs: Id */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'eck_labs';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['operator'] = '<';
  $handler->display->display_options['filters']['id']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'labs-landing';
  $export['new_labs'] = $view;

  return $export;
}
