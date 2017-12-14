<?php
/**
 * @file
 * destinationsshow_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function destinationsshow_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_speaker_1]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker']['id'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_speaker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker]</p>
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Sort criterion: Content: Time (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2015-01-29';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '250';

  /* Display: Thursday 29 January */
  $handler = $view->new_display('block', 'Thursday 29 January', 'block');
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-02';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '250';

  /* Display: Friday 30th January */
  $handler = $view->new_display('block', 'Friday 30th January', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Friday 30th January';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-03';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '250';

  /* Display: Saturday 31st January */
  $handler = $view->new_display('block', 'Saturday 31st January', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Saturday 31st January';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-04';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '250';

  /* Display: Sunday 1st February */
  $handler = $view->new_display('block', 'Sunday 1st February', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sunday 1st February';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-05';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '250';

  /* Display: Theatre one Thur */
  $handler = $view->new_display('block', 'Theatre one Thur', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Thursday 4th February';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-02';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '242';

  /* Display: Theatre one Fri  */
  $handler = $view->new_display('block', 'Theatre one Fri ', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Friday 30 Jan';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-03';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '242';

  /* Display: Theatre one Sat */
  $handler = $view->new_display('block', 'Theatre one Sat', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'saturday 31 Jan';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-04';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '242';

  /* Display: Theatre one Sun */
  $handler = $view->new_display('block', 'Theatre one Sun', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'sunday 1 Feb';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-05';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '242';

  /* Display: Theatre two Thur */
  $handler = $view->new_display('block', 'Theatre two Thur', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Thrusday 29 Jan';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-02';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '1285';

  /* Display: Theatre two Fri  */
  $handler = $view->new_display('block', 'Theatre two Fri ', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Friday 30 Jan';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-03';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '1285';

  /* Display: Theatre two Sat */
  $handler = $view->new_display('block', 'Theatre two Sat', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Friday 30 Jan';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-04';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '1285';

  /* Display: Theatre two Sun */
  $handler = $view->new_display('block', 'Theatre two Sun', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sunday 1 Feb';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'destination-quicktabs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_exhibitor]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Time (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['value']['value'] = '2017-02-05';
  /* Filter criterion: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['filters']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['filters']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['filters']['field_node_target_value']['value'] = '1285';

  /* Display: General Event */
  $handler = $view->new_display('block', 'General Event', 'block_12');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_speaker_1]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker']['id'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_speaker']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_speaker']['delta_offset'] = '0';
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_free_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_free_text']['alter']['text'] = '<strong>Speaker:</strong> [field_speaker_free_text]';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[body]
</br>
<p>[field_speaker_free_text]</p>
[field_exhibitor]

';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['arguments']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['arguments']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['arguments']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['arguments']['field_node_target_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_node_target_value']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_node_target_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_target_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_target_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_node_target_value']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_node_target_value']['validate_options']['types'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['field_node_target_value']['limit'] = '0';
  /* Contextual filter: Content: Time (field_time) */
  $handler->display->display_options['arguments']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['arguments']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['arguments']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['arguments']['field_time_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_time_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_time_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_time_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_time_value']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['field_time_value']['granularity'] = 'day';
  $handler->display->display_options['arguments']['field_time_value']['use_fromto'] = 'no';
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
    'event' => 'event',
  );

  /* Display: Events by Show Day (taxonomy term) */
  $handler = $view->new_display('block', 'Events by Show Day (taxonomy term)', 'events_by_show_day_taxonomy');
  $handler->display->display_options['display_description'] = 'This view shows content tagged with show year and show day taxonomy terms. See the display\'s filter settings.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker_1']['id'] = 'field_speaker_1';
  $handler->display->display_options['fields']['field_speaker_1']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker_1']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_1']['settings'] = array(
    'link' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_speaker_1']['delta_offset'] = '0';
  /* Field: Content: Exhibitor */
  $handler->display->display_options['fields']['field_exhibitor']['id'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['table'] = 'field_data_field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['field'] = 'field_exhibitor';
  $handler->display->display_options['fields']['field_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibitor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_exhibitor']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time_2']['id'] = 'field_time_2';
  $handler->display->display_options['fields']['field_time_2']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_2']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_time_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_2']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '&nbsp',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [field_time_2]: [title]
<br>
<p>[field_speaker_1]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'faq-styles-quicktabs-headers';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speaker']['id'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['fields']['field_speaker']['field'] = 'field_speaker';
  $handler->display->display_options['fields']['field_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_speaker']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_speaker']['delta_offset'] = '0';
  /* Field: Content: Speaker Free text */
  $handler->display->display_options['fields']['field_speaker_free_text']['id'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['table'] = 'field_data_field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['field'] = 'field_speaker_free_text';
  $handler->display->display_options['fields']['field_speaker_free_text']['label'] = 'Speaker';
  $handler->display->display_options['fields']['field_speaker_free_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_free_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speaker_free_text']['alter']['text'] = '<strong>Speaker:</strong> [field_speaker_free_text]';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = '';
  $handler->display->display_options['fields']['field_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
</br>
<strong>Speaker:</strong>
<p>[field_speaker_free_text]</p>
[field_exhibitor]
</br>
<p>[field_time]</p>
';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[body]
</br>
<p>[field_speaker_free_text]</p>
[field_exhibitor]

';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'body-hide-quicktabs';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Show Year (field_show_year) */
  $handler->display->display_options['arguments']['field_show_year_tid']['id'] = 'field_show_year_tid';
  $handler->display->display_options['arguments']['field_show_year_tid']['table'] = 'field_data_field_show_year';
  $handler->display->display_options['arguments']['field_show_year_tid']['field'] = 'field_show_year_tid';
  $handler->display->display_options['arguments']['field_show_year_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_show_year_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_show_year_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_show_year_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_show_year_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_show_year_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_show_year_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_show_year_tid']['validate_options']['vocabularies'] = array(
    'show_year' => 'show_year',
  );
  $handler->display->display_options['arguments']['field_show_year_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Content: Show Day (field_show_day) */
  $handler->display->display_options['arguments']['field_show_day_tid']['id'] = 'field_show_day_tid';
  $handler->display->display_options['arguments']['field_show_day_tid']['table'] = 'field_data_field_show_day';
  $handler->display->display_options['arguments']['field_show_day_tid']['field'] = 'field_show_day_tid';
  $handler->display->display_options['arguments']['field_show_day_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_show_day_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_show_day_tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_show_day_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_show_day_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_show_day_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_show_day_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_show_day_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_show_day_tid']['validate_options']['vocabularies'] = array(
    'show_day' => 'show_day',
  );
  $handler->display->display_options['arguments']['field_show_day_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Content: Which information page does this event relate to? (field_node_target) */
  $handler->display->display_options['arguments']['field_node_target_value']['id'] = 'field_node_target_value';
  $handler->display->display_options['arguments']['field_node_target_value']['table'] = 'field_data_field_node_target';
  $handler->display->display_options['arguments']['field_node_target_value']['field'] = 'field_node_target_value';
  $handler->display->display_options['arguments']['field_node_target_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_node_target_value']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_node_target_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_target_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_target_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_node_target_value']['limit'] = '0';
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
    'event' => 'event',
  );
  $export['events'] = $view;

  return $export;
}
