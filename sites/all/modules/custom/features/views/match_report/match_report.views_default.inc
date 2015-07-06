<?php
/**
 * @file
 * match_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function match_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'result';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_event']['id'] = 'field_event';
  $handler->display->display_options['fields']['field_event']['table'] = 'field_data_field_event';
  $handler->display->display_options['fields']['field_event']['field'] = 'field_event';
  $handler->display->display_options['fields']['field_event']['label'] = '';
  $handler->display->display_options['fields']['field_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event']['element_default_classes'] = FALSE;
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
    'events' => 'events',
  );

  /* Display: Report All */
  $handler = $view->new_display('block', 'Report All', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'report-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = 'View all Match Reports here. Previous years are easy to find with the search feature';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_date']['id'] = 'field_year_date';
  $handler->display->display_options['fields']['field_year_date']['table'] = 'field_data_field_year_date';
  $handler->display->display_options['fields']['field_year_date']['field'] = 'field_year_date';
  $handler->display->display_options['fields']['field_year_date']['label'] = '';
  $handler->display->display_options['fields']['field_year_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_year_date']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date] [field_year_date] ';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'report-item date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'report-item title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Content: Match */
  $handler->display->display_options['fields']['field_match']['id'] = 'field_match';
  $handler->display->display_options['fields']['field_match']['table'] = 'field_data_field_match';
  $handler->display->display_options['fields']['field_match']['field'] = 'field_match';
  $handler->display->display_options['fields']['field_match']['label'] = '';
  $handler->display->display_options['fields']['field_match']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_match']['element_class'] = 'report-item match';
  $handler->display->display_options['fields']['field_match']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_match']['empty'] = 'ASRU v Queanbeyan
';
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_venue']['element_class'] = 'report-item venue';
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue']['element_default_classes'] = FALSE;
  /* Field: Content: Score */
  $handler->display->display_options['fields']['field_score']['id'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['table'] = 'field_data_field_score';
  $handler->display->display_options['fields']['field_score']['field'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['label'] = '';
  $handler->display->display_options['fields']['field_score']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_score']['element_class'] = 'report-item score';
  $handler->display->display_options['fields']['field_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_score']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_score']['empty'] = '0 - 16';
  /* Field: Content: Match Report */
  $handler->display->display_options['fields']['field_report']['id'] = 'field_report';
  $handler->display->display_options['fields']['field_report']['table'] = 'field_data_field_report';
  $handler->display->display_options['fields']['field_report']['field'] = 'field_report';
  $handler->display->display_options['fields']['field_report']['label'] = '';
  $handler->display->display_options['fields']['field_report']['alter']['text'] = 'Download PDF';
  $handler->display->display_options['fields']['field_report']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_report']['element_class'] = 'report-item match-report';
  $handler->display->display_options['fields']['field_report']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_report']['empty'] = 'Download PDF';
  $handler->display->display_options['fields']['field_report']['click_sort_column'] = 'fid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Click to View';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'report-item gallery';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'events' => 'events',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Year (field_year_date) */
  $handler->display->display_options['filters']['field_year_date_value']['id'] = 'field_year_date_value';
  $handler->display->display_options['filters']['field_year_date_value']['table'] = 'field_data_field_year_date';
  $handler->display->display_options['filters']['field_year_date_value']['field'] = 'field_year_date_value';
  $handler->display->display_options['filters']['field_year_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_year_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_date_value']['expose']['operator_id'] = 'field_year_date_value_op';
  $handler->display->display_options['filters']['field_year_date_value']['expose']['operator'] = 'field_year_date_value_op';
  $handler->display->display_options['filters']['field_year_date_value']['expose']['identifier'] = 'field_year_date_value';
  $handler->display->display_options['filters']['field_year_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_year_date_value']['granularity'] = 'year';
  $handler->display->display_options['block_description'] = 'Report List';

  /* Display: Report Page */
  $handler = $view->new_display('page', 'Report Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Sorry No Result Found.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_losing_team']['id'] = 'field_losing_team';
  $handler->display->display_options['fields']['field_losing_team']['table'] = 'field_data_field_losing_team';
  $handler->display->display_options['fields']['field_losing_team']['field'] = 'field_losing_team';
  $handler->display->display_options['fields']['field_losing_team']['label'] = '';
  $handler->display->display_options['fields']['field_losing_team']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_losing_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_losing_team']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_losing_team_score']['id'] = 'field_losing_team_score';
  $handler->display->display_options['fields']['field_losing_team_score']['table'] = 'field_data_field_losing_team_score';
  $handler->display->display_options['fields']['field_losing_team_score']['field'] = 'field_losing_team_score';
  $handler->display->display_options['fields']['field_losing_team_score']['label'] = '';
  $handler->display->display_options['fields']['field_losing_team_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_losing_team_score']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_winning_team']['id'] = 'field_winning_team';
  $handler->display->display_options['fields']['field_winning_team']['table'] = 'field_data_field_winning_team';
  $handler->display->display_options['fields']['field_winning_team']['field'] = 'field_winning_team';
  $handler->display->display_options['fields']['field_winning_team']['label'] = '';
  $handler->display->display_options['fields']['field_winning_team']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_winning_team']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_winning_team_score']['id'] = 'field_winning_team_score';
  $handler->display->display_options['fields']['field_winning_team_score']['table'] = 'field_data_field_winning_team_score';
  $handler->display->display_options['fields']['field_winning_team_score']['field'] = 'field_winning_team_score';
  $handler->display->display_options['fields']['field_winning_team_score']['label'] = '';
  $handler->display->display_options['fields']['field_winning_team_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_winning_team_score']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_winning_team] <span>vs</span> [field_losing_team]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'team';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_winning_team_score] : [field_losing_team_score]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'score';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_event_target_id']['id'] = 'field_event_target_id';
  $handler->display->display_options['arguments']['field_event_target_id']['table'] = 'field_data_field_event';
  $handler->display->display_options['arguments']['field_event_target_id']['field'] = 'field_event_target_id';
  $handler->display->display_options['arguments']['field_event_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_event_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_event_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_target_id']['summary_options']['items_per_page'] = '25';
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
    'events' => 'events',
  );
  $handler->display->display_options['path'] = 'reports/%';
  $export['result'] = $view;

  return $export;
}
