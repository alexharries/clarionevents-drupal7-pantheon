<?php

/**
 * @file
 * babytotoddler_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function babytotoddler_sponsors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator_id'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['label'] = 'Sponsor type (field_sponsor_type)';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['identifier'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';

  /* Display: Headline Sponsor */
  $handler = $view->new_display('block', 'Headline Sponsor', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'sponsor_landscape';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'sponsor_landscape';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: General Sponsor */
  $handler = $view->new_display('block', 'General Sponsor', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_sponsor-carousel';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    0 => '6',
    1 => '36',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator_id'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['label'] = 'Sponsor type (field_sponsor_type)';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['identifier'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';

  /* Display: Sponsor grid */
  $handler = $view->new_display('block', 'Sponsor grid', 'sponsorgrid');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'grid-sponsors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'grid-container col-xs-12';
  $handler->display->display_options['style_options']['column_classes'] = 'col-xs-6 col-sm-2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Sponsor type */
  $handler->display->display_options['fields']['field_sponsor_type']['id'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['field'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sponsor_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['validate']['fail'] = 'ignore';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator_id'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['label'] = 'Sponsor type (field_sponsor_type)';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['identifier'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';

  /* Display: Head Sponsors */
  $handler = $view->new_display('block', 'Head Sponsors', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'head-sponsors col-xs-12 col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sponsor_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'sponsor_landscape';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Sponsor type */
  $handler->display->display_options['fields']['field_sponsor_type']['id'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['field'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sponsor_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    0 => '31',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator_id'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['label'] = 'Sponsor type (field_sponsor_type)';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['identifier'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';

  /* Display: Partner grid */
  $handler = $view->new_display('block', 'Partner grid', 'partnergrid');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partners';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'grid-sponsors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'grid-container col-xs-12';
  $handler->display->display_options['style_options']['column_classes'] = 'col-xs-6 col-sm-2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Sponsor type */
  $handler->display->display_options['fields']['field_sponsor_type']['id'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['field'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sponsor_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_sponsor_type_tid']['validate']['fail'] = 'ignore';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    0 => '36',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator_id'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['label'] = 'Sponsor type (field_sponsor_type)';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['operator'] = 'field_sponsor_type_tid_op';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['identifier'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';
  $export['sponsors'] = $view;

  return $export;
}
