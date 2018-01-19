<?php
$view = new view();
$view->name = 'faculty_exams_by_course';
$view->description = 'Displays available exam files for the selected course and faculty.';
$view->tag = 'Past Exams';
$view->base_table = 'node';
$view->human_name = 'Exam Files for Course/Faculty';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_year',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_course_target_id']['id'] = 'field_course_target_id';
$handler->display->display_options['relationships']['field_course_target_id']['table'] = 'field_data_field_course';
$handler->display->display_options['relationships']['field_course_target_id']['field'] = 'field_course_target_id';
$handler->display->display_options['relationships']['field_course_target_id']['label'] = 'Exam Course';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_faculty_target_id']['id'] = 'field_faculty_target_id';
$handler->display->display_options['relationships']['field_faculty_target_id']['table'] = 'field_data_field_faculty';
$handler->display->display_options['relationships']['field_faculty_target_id']['field'] = 'field_faculty_target_id';
$handler->display->display_options['relationships']['field_faculty_target_id']['label'] = 'Exam Faculty';
$handler->display->display_options['relationships']['field_faculty_target_id']['required'] = TRUE;
/* Field: Content: Term */
$handler->display->display_options['fields']['field_term']['id'] = 'field_term';
$handler->display->display_options['fields']['field_term']['table'] = 'field_data_field_term';
$handler->display->display_options['fields']['field_term']['field'] = 'field_term';
$handler->display->display_options['fields']['field_term']['label'] = '';
$handler->display->display_options['fields']['field_term']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_term']['settings'] = array(
  'bypass_access' => 0,
  'link' => 0,
);
/* Field: Content: Year */
$handler->display->display_options['fields']['field_year']['id'] = 'field_year';
$handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
$handler->display->display_options['fields']['field_year']['field'] = 'field_year';
$handler->display->display_options['fields']['field_year']['label'] = '';
$handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_year']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_year']['alter']['text'] = '[field_term] [field_year]';
$handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_year']['settings'] = array(
  'format_type' => 'long',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Field: Content: Exam */
$handler->display->display_options['fields']['field_exam']['id'] = 'field_exam';
$handler->display->display_options['fields']['field_exam']['table'] = 'field_data_field_exam';
$handler->display->display_options['fields']['field_exam']['field'] = 'field_exam';
$handler->display->display_options['fields']['field_exam']['label'] = '';
$handler->display->display_options['fields']['field_exam']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_exam']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_exam']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_exam']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_exam']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_exam']['multi_type'] = 'ul';
/* Field: Content: Feedback */
$handler->display->display_options['fields']['field_feedback']['id'] = 'field_feedback';
$handler->display->display_options['fields']['field_feedback']['table'] = 'field_data_field_feedback';
$handler->display->display_options['fields']['field_feedback']['field'] = 'field_feedback';
$handler->display->display_options['fields']['field_feedback']['label'] = '';
$handler->display->display_options['fields']['field_feedback']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_feedback']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_feedback']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_feedback']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_feedback']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_feedback']['multi_type'] = 'ul';
/* Field: Content: Best Exam */
$handler->display->display_options['fields']['field_best_exam']['id'] = 'field_best_exam';
$handler->display->display_options['fields']['field_best_exam']['table'] = 'field_data_field_best_exam';
$handler->display->display_options['fields']['field_best_exam']['field'] = 'field_best_exam';
$handler->display->display_options['fields']['field_best_exam']['label'] = '';
$handler->display->display_options['fields']['field_best_exam']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_best_exam']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_best_exam']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_best_exam']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_best_exam']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_best_exam']['multi_type'] = 'ul';
/* Sort criterion: Content: Year (field_year) */
$handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
$handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
$handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
$handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
/* Sort criterion: Content: Term (field_term) */
$handler->display->display_options['sorts']['field_term_target_id']['id'] = 'field_term_target_id';
$handler->display->display_options['sorts']['field_term_target_id']['table'] = 'field_data_field_term';
$handler->display->display_options['sorts']['field_term_target_id']['field'] = 'field_term_target_id';
$handler->display->display_options['sorts']['field_term_target_id']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_faculty_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['arguments']['nid_1']['table'] = 'node';
$handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
$handler->display->display_options['arguments']['nid_1']['relationship'] = 'field_course_target_id';
$handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['nid_1']['default_argument_options']['index'] = '3';
$handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
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
  'exam' => 'exam',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'faculty/%/course/%';
