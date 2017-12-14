<?php
/**
 * @file
 * destinations_show_partners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function destinations_show_partners_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsor_and_partners';
  $view->description = 'Listing page with sponsors and partners';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsor and partners';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Partner Website */
  $handler->display->display_options['fields']['field_partner_website']['id'] = 'field_partner_website';
  $handler->display->display_options['fields']['field_partner_website']['table'] = 'field_data_field_partner_website';
  $handler->display->display_options['fields']['field_partner_website']['field'] = 'field_partner_website';
  $handler->display->display_options['fields']['field_partner_website']['label'] = '';
  $handler->display->display_options['fields']['field_partner_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partner_website']['type'] = 'link_url';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_partner_website]';
  $handler->display->display_options['fields']['field_logo']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logos__175_width_',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
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
    'partners' => 'partners',
  );
  /* Filter criterion: Content: Partner Type (field_partner_type) */
  $handler->display->display_options['filters']['field_partner_type_value']['id'] = 'field_partner_type_value';
  $handler->display->display_options['filters']['field_partner_type_value']['table'] = 'field_data_field_partner_type';
  $handler->display->display_options['filters']['field_partner_type_value']['field'] = 'field_partner_type_value';
  $handler->display->display_options['filters']['field_partner_type_value']['value'] = array(
    'sponsor' => 'sponsor',
  );

  /* Display: Sponsor block */
  $handler = $view->new_display('block', 'Sponsor block', 'block');
  $handler->display->display_options['block_description'] = 'Sponsors block';

  /* Display: Partner block */
  $handler = $view->new_display('block', 'Partner block', 'block_1');
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
    'partners' => 'partners',
  );
  /* Filter criterion: Content: Partner Type (field_partner_type) */
  $handler->display->display_options['filters']['field_partner_type_value']['id'] = 'field_partner_type_value';
  $handler->display->display_options['filters']['field_partner_type_value']['table'] = 'field_data_field_partner_type';
  $handler->display->display_options['filters']['field_partner_type_value']['field'] = 'field_partner_type_value';
  $handler->display->display_options['filters']['field_partner_type_value']['value'] = array(
    'partner' => 'partner',
  );
  $handler->display->display_options['block_description'] = 'partner block';
  $export['sponsor_and_partners'] = $view;

  return $export;
}
