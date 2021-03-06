<?php
$view = new view();
$view->name = 'course_and_faculty_header';
$view->description = 'Displays a header consisting of the selected course and faculty for display at the top of exam file list pages';
$view->tag = 'Past Exams';
$view->base_table = 'node';
$view->human_name = 'Course and Faculty Header';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_course_target_id']['id'] = 'field_course_target_id';
$handler->display->display_options['relationships']['field_course_target_id']['table'] = 'field_data_field_course';
$handler->display->display_options['relationships']['field_course_target_id']['field'] = 'field_course_target_id';
$handler->display->display_options['relationships']['field_course_target_id']['label'] = 'Course';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_faculty_target_id']['id'] = 'field_faculty_target_id';
$handler->display->display_options['relationships']['field_faculty_target_id']['table'] = 'field_data_field_faculty';
$handler->display->display_options['relationships']['field_faculty_target_id']['field'] = 'field_faculty_target_id';
$handler->display->display_options['relationships']['field_faculty_target_id']['label'] = 'Faculty';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_course_target_id';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_type'] = 'h1';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_faculty_target_id';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Contextual filter: Content: Faculty (field_faculty) */
$handler->display->display_options['arguments']['field_faculty_target_id']['id'] = 'field_faculty_target_id';
$handler->display->display_options['arguments']['field_faculty_target_id']['table'] = 'field_data_field_faculty';
$handler->display->display_options['arguments']['field_faculty_target_id']['field'] = 'field_faculty_target_id';
$handler->display->display_options['arguments']['field_faculty_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_faculty_target_id']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['field_faculty_target_id']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['field_faculty_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_faculty_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_faculty_target_id']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content: Course (field_course) */
$handler->display->display_options['arguments']['field_course_target_id']['id'] = 'field_course_target_id';
$handler->display->display_options['arguments']['field_course_target_id']['table'] = 'field_data_field_course';
$handler->display->display_options['arguments']['field_course_target_id']['field'] = 'field_course_target_id';
$handler->display->display_options['arguments']['field_course_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_course_target_id']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['field_course_target_id']['default_argument_options']['index'] = '3';
$handler->display->display_options['arguments']['field_course_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_course_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_course_target_id']['summary_options']['items_per_page'] = '25';
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

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
