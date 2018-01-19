<?php
$view = new view();
$view->name = 'course_exams';
$view->description = 'Displays a linked list of faculty who have exams for a selected course.';
$view->tag = 'Past Exams';
$view->base_table = 'node';
$view->human_name = 'Faculty for Course';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_faculty_target_id']['id'] = 'field_faculty_target_id';
$handler->display->display_options['relationships']['field_faculty_target_id']['table'] = 'field_data_field_faculty';
$handler->display->display_options['relationships']['field_faculty_target_id']['field'] = 'field_faculty_target_id';
$handler->display->display_options['relationships']['field_faculty_target_id']['required'] = TRUE;
/* Field: Content: Faculty */
$handler->display->display_options['fields']['field_faculty']['id'] = 'field_faculty';
$handler->display->display_options['fields']['field_faculty']['table'] = 'field_data_field_faculty';
$handler->display->display_options['fields']['field_faculty']['field'] = 'field_faculty';
$handler->display->display_options['fields']['field_faculty']['label'] = '';
$handler->display->display_options['fields']['field_faculty']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_faculty']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_faculty']['type'] = 'entityreference_entity_id';
$handler->display->display_options['fields']['field_faculty']['settings'] = array(
  'bypass_access' => 0,
  'link' => 1,
);
$handler->display->display_options['fields']['field_faculty']['delta_offset'] = '0';
/* Field: Content: Course */
$handler->display->display_options['fields']['field_course']['id'] = 'field_course';
$handler->display->display_options['fields']['field_course']['table'] = 'field_data_field_course';
$handler->display->display_options['fields']['field_course']['field'] = 'field_course';
$handler->display->display_options['fields']['field_course']['label'] = '';
$handler->display->display_options['fields']['field_course']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_course']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_course']['type'] = 'entityreference_entity_id';
$handler->display->display_options['fields']['field_course']['settings'] = array(
  'bypass_access' => 0,
  'link' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_faculty_target_id';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = '/faculty/[field_faculty]/course/[field_course]';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['relationship'] = 'field_faculty_target_id';
/* Contextual filter: Content: Course (field_course) */
$handler->display->display_options['arguments']['field_course_target_id']['id'] = 'field_course_target_id';
$handler->display->display_options['arguments']['field_course_target_id']['table'] = 'field_data_field_course';
$handler->display->display_options['arguments']['field_course_target_id']['field'] = 'field_course_target_id';
$handler->display->display_options['arguments']['field_course_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_course_target_id']['default_argument_type'] = 'node';
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
