<?php
/**
 * @file
 * exhibitor_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibitor_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibitor_list_20170912';
  $view->description = 'Provides a filterable exhibitor listing which doesn\'t rely on external services such as Solr or Search API.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibitor List (no Solr)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exhibitors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['field_api_classes'] = TRUE;
  /* Field: Content: Stand */
  $handler->display->display_options['fields']['field_stand']['id'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['table'] = 'field_data_field_stand';
  $handler->display->display_options['fields']['field_stand']['field'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['label'] = '';
  $handler->display->display_options['fields']['field_stand']['element_type'] = '0';
  $handler->display->display_options['fields']['field_stand']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stand']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_stand']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_stand']['field_api_classes'] = TRUE;
  /* Field: Content: New */
  $handler->display->display_options['fields']['field_new']['id'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['table'] = 'field_data_field_new';
  $handler->display->display_options['fields']['field_new']['field'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['label'] = '';
  $handler->display->display_options['fields']['field_new']['element_type'] = '0';
  $handler->display->display_options['fields']['field_new']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_new']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_new']['field_api_classes'] = TRUE;
  /* Field: Field: Enhanced */
  $handler->display->display_options['fields']['field_enhanced']['id'] = 'field_enhanced';
  $handler->display->display_options['fields']['field_enhanced']['table'] = 'field_data_field_enhanced';
  $handler->display->display_options['fields']['field_enhanced']['field'] = 'field_enhanced';
  $handler->display->display_options['fields']['field_enhanced']['label'] = '';
  $handler->display->display_options['fields']['field_enhanced']['element_type'] = '0';
  $handler->display->display_options['fields']['field_enhanced']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enhanced']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_enhanced']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_enhanced']['field_api_classes'] = TRUE;
  /* Field: Content: Distributor? */
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['id'] = 'field_exhibitor_isdistributor';
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['table'] = 'field_data_field_exhibitor_isdistributor';
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['field'] = 'field_exhibitor_isdistributor';
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['label'] = '';
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['alter']['text'] = 'yes';
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['empty'] = 'no';
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor_isdistributor']['type'] = 'list_key';
  /* Field: Logo (not linked to content) */
  $handler->display->display_options['fields']['field_logo_1']['id'] = 'field_logo_1';
  $handler->display->display_options['fields']['field_logo_1']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo_1']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo_1']['ui_name'] = 'Logo (not linked to content)';
  $handler->display->display_options['fields']['field_logo_1']['label'] = '';
  $handler->display->display_options['fields']['field_logo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'exhibitor' => 'exhibitor',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    25241038 => 0,
    200153887 => 0,
    39315985 => 0,
    231001329 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_stand' => 'field_stand',
  );
  /* Filter criterion: Field: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Destination Category';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    25241038 => 0,
    200153887 => 0,
    39315985 => 0,
    231001329 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'exhibitors';
  $export['exhibitor_list_20170912'] = $view;

  return $export;
}
