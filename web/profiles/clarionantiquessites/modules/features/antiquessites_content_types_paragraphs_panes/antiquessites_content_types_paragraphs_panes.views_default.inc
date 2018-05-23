<?php
/**
 * @file
 * antiquessites_content_types_paragraphs_panes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function antiquessites_content_types_paragraphs_panes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibitor_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibitor List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EXHIBITOR LIST SPRING 2018';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'col-md-8';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Stand */
  $handler->display->display_options['fields']['field_stand']['id'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['table'] = 'field_data_field_stand';
  $handler->display->display_options['fields']['field_stand']['field'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['label'] = '';
  $handler->display->display_options['fields']['field_stand']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stand']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stand']['element_default_classes'] = FALSE;
  /* Field: Arrow Button */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Arrow Button';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[field_stand]&nbsp;&nbsp;&nbsp;&nbsp;
<span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
';
  $handler->display->display_options['fields']['nid']['element_type'] = 'p';
  $handler->display->display_options['fields']['nid']['element_class'] = 'text-right';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'col-md-4';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Grouping */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Grouping';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 id="[title_1]">[title_1]</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title (for ordering) (field_title_for_ordering_) */
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['id'] = 'field_title_for_ordering__value';
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['field'] = 'field_title_for_ordering__value';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
    'exhibitor_profile_page' => 'exhibitor_profile_page',
  );
  /* Filter criterion: Content: Categories (field_categories) */
  $handler->display->display_options['filters']['field_categories_tid']['id'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['table'] = 'field_data_field_categories';
  $handler->display->display_options['filters']['field_categories_tid']['field'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categories_tid']['expose']['operator_id'] = 'field_categories_tid_op';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['operator'] = 'field_categories_tid_op';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['identifier'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
  );
  $handler->display->display_options['filters']['field_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categories_tid']['vocabulary'] = 'exhibitor_category';
  $handler->display->display_options['filters']['field_categories_tid']['hierarchy'] = 1;

  /* Display: Exhibitor List */
  $handler = $view->new_display('page', 'Exhibitor List', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'gallery-display';
  $handler->display->display_options['display_description'] = 'Olympia Arts Antiques Exhibitor List';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '3';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_stand' => 'field_stand',
    'nid' => 'nid',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Exhibitor List Key';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="row">
  <div class="col-xs-12">
    <div class="exhibitor-list-key">Key:      <span class="exhibitor-list-key-item exhibitor-list-key-item-highlighted">Section One Exhibitor</span>      <span class="exhibitor-list-key-item exhibitor-list-key-item-standard">Section Two Exhibitor</span>
    </div>
  </div>
</div>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Sort Title (hidden) */
  $handler->display->display_options['fields']['field_title_for_ordering_']['id'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['field'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['ui_name'] = 'Sort Title (hidden)';
  $handler->display->display_options['fields']['field_title_for_ordering_']['label'] = '';
  $handler->display->display_options['fields']['field_title_for_ordering_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Exhibitor Name (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Exhibitor Name (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Exhibitor Stand (hidden) */
  $handler->display->display_options['fields']['field_stand']['id'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['table'] = 'field_data_field_stand';
  $handler->display->display_options['fields']['field_stand']['field'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['ui_name'] = 'Exhibitor Stand (hidden)';
  $handler->display->display_options['fields']['field_stand']['label'] = '';
  $handler->display->display_options['fields']['field_stand']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stand']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stand']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_stand']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'gallery_list_thumbs',
    'image_link' => '',
    'grid_field_formatter' => array(
      'grid_enable' => 0,
      'columns' => '1',
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Content: Enhanced */
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['id'] = 'field_enhanced_exhibitor';
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['table'] = 'field_data_field_enhanced_exhibitor';
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['field'] = 'field_enhanced_exhibitor';
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['label'] = '';
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['alter']['text'] = 'enhanced-exhibitor';
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enhanced_exhibitor']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Section One (Highlighted) Exhibitor? */
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['id'] = 'field_highlighted_exhibitor';
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['table'] = 'field_data_field_highlighted_exhibitor';
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['field'] = 'field_highlighted_exhibitor';
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['label'] = '';
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_highlighted_exhibitor']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Gallery block */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Gallery block';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span>
    <div class=" col-xs-12 exhibitor-block [field_enhanced_exhibitor] [field_highlighted_exhibitor]">
      <div class="gallery-image">[field_logo]</div>
        <hr class="gallery-item-separator" />
        <div class="">
           <p class="text stand">STAND [field_stand] </p>
           <p class="text name">[title] </p>
           <p class="text description">[body] </p>
       </div>
       <div class="col-xs-3 col-sm-1"> 
      </div>
    </div>
 </span>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title (for ordering) */
  $handler->display->display_options['fields']['field_title_for_ordering__1']['id'] = 'field_title_for_ordering__1';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['field'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['label'] = 'title order label';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: A-Z List */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'A-Z List';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$label = substr($data->field_field_title_for_ordering__1[0][\'raw\'][\'value\'], 0, 1);
echo \'<div class="row"><div class="col-md-12"><p class="bg-teal">\' .strtoupper($label). \'</p></div></div>\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (for ordering) (field_title_for_ordering_) */
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['id'] = 'field_title_for_ordering__value';
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['field'] = 'field_title_for_ordering__value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title (for ordering) (field_title_for_ordering_) */
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['id'] = 'field_title_for_ordering__value';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['field'] = 'field_title_for_ordering__value';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['path_case'] = 'lower';
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
    'exhibitor_profile_page' => 'exhibitor_profile_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Categories (field_categories) */
  $handler->display->display_options['filters']['field_categories_tid']['id'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['table'] = 'field_data_field_categories';
  $handler->display->display_options['filters']['field_categories_tid']['field'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categories_tid']['expose']['operator_id'] = 'field_categories_tid_op';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['label'] = 'Find an Exhibitor';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['operator'] = 'field_categories_tid_op';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['identifier'] = 'field_categories_tid';
  $handler->display->display_options['filters']['field_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
  );
  $handler->display->display_options['filters']['field_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categories_tid']['vocabulary'] = 'exhibitor_category';
  $handler->display->display_options['filters']['field_categories_tid']['hierarchy'] = 1;
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'dcterms.title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.subject' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '',
      ),
      'dcterms.publisher' => array(
        'value' => '',
      ),
      'dcterms.contributor' => array(
        'value' => '',
      ),
      'dcterms.date' => array(
        'value' => '',
      ),
      'dcterms.modified' => array(
        'value' => '',
      ),
      'dcterms.type' => array(
        'value' => 'Text',
        'default' => 'Text',
      ),
      'dcterms.format' => array(
        'value' => 'text/html',
        'default' => 'text/html',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'dcterms.source' => array(
        'value' => '',
      ),
      'dcterms.language' => array(
        'value' => '',
      ),
      'dcterms.relation' => array(
        'value' => '',
      ),
      'dcterms.coverage' => array(
        'value' => '',
      ),
      'dcterms.rights' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
        'default' => 'summary',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:image:src' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'exhibitors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Exhibitors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: A-Z filtering */
  $handler = $view->new_display('attachment', 'A-Z filtering', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibitors';
  $handler->display->display_options['display_description'] = 'A-Z filtering';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_title_for_ordering_',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/exhibitors">A - Z</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/exhibitors">VIEW ALL</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title (for ordering) */
  $handler->display->display_options['fields']['field_title_for_ordering_']['id'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['field'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['label'] = 'test';
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title (for ordering) (field_title_for_ordering_) */
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['id'] = 'field_title_for_ordering__value';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['field'] = 'field_title_for_ordering__value';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_title_for_ordering__value']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Exhibitor List */
  $handler = $view->new_display('page', 'Exhibitor List', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'exhibitor-list';
  $handler->display->display_options['display_description'] = 'Olympia Arts Antiques Exhibitor List';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'php',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_stand' => 'field_stand',
    'nid' => 'nid',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Sort Title (hidden) */
  $handler->display->display_options['fields']['field_title_for_ordering_']['id'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['field'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering_']['ui_name'] = 'Sort Title (hidden)';
  $handler->display->display_options['fields']['field_title_for_ordering_']['label'] = '';
  $handler->display->display_options['fields']['field_title_for_ordering_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering_']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Exhibitor Name (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Exhibitor Name (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Exhibitor Stand (hidden) */
  $handler->display->display_options['fields']['field_stand']['id'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['table'] = 'field_data_field_stand';
  $handler->display->display_options['fields']['field_stand']['field'] = 'field_stand';
  $handler->display->display_options['fields']['field_stand']['ui_name'] = 'Exhibitor Stand (hidden)';
  $handler->display->display_options['fields']['field_stand']['label'] = '';
  $handler->display->display_options['fields']['field_stand']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stand']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stand']['element_default_classes'] = FALSE;
  /* Field: Arrow Button */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Arrow Button';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div id="lnkPanel" data-link="[path]" data-target="_self" class="panel-list-grey">
  <div class="col-xs-12 col-sm-7"><p class="">[title]</p></div>  
    <div class="col-xs-12 col-sm-5">
      <p class="text-right">[field_stand]&nbsp;&nbsp;&nbsp;&nbsp;<span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span></p>
  </div>
</div>';
  $handler->display->display_options['fields']['nid']['element_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_class'] = 'col-md-12';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title (for ordering) */
  $handler->display->display_options['fields']['field_title_for_ordering__1']['id'] = 'field_title_for_ordering__1';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['field'] = 'field_title_for_ordering_';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['label'] = 'title order label';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title_for_ordering__1']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: A-Z List */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'A-Z List';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$label = substr($data->field_field_title_for_ordering__1[0][\'raw\'][\'value\'], 0, 1);
echo \'<div class="row"><div class="col-md-12"><p class="bg-teal">\' .strtoupper($label). \'</p></div></div>\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (for ordering) (field_title_for_ordering_) */
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['id'] = 'field_title_for_ordering__value';
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['table'] = 'field_data_field_title_for_ordering_';
  $handler->display->display_options['sorts']['field_title_for_ordering__value']['field'] = 'field_title_for_ordering__value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'exhibitor_category' => 'exhibitor_category',
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
    'exhibitor_profile_page' => 'exhibitor_profile_page',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'dcterms.title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.subject' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '',
      ),
      'dcterms.publisher' => array(
        'value' => '',
      ),
      'dcterms.contributor' => array(
        'value' => '',
      ),
      'dcterms.date' => array(
        'value' => '',
      ),
      'dcterms.modified' => array(
        'value' => '',
      ),
      'dcterms.type' => array(
        'value' => 'Text',
        'default' => 'Text',
      ),
      'dcterms.format' => array(
        'value' => 'text/html',
        'default' => 'text/html',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'dcterms.source' => array(
        'value' => '',
      ),
      'dcterms.language' => array(
        'value' => '',
      ),
      'dcterms.relation' => array(
        'value' => '',
      ),
      'dcterms.coverage' => array(
        'value' => '',
      ),
      'dcterms.rights' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
        'default' => 'summary',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:image:src' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'category-exhibitor';

  /* Display: Select exhibitor */
  $handler = $view->new_display('attachment', 'Select exhibitor', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'path';
  $handler->display->display_options['style_options']['text'] = '';
  $handler->display->display_options['style_options']['choose'] = 'SELECT EXHIBITOR';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '/exhibitor/[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'col-md-8';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $export['exhibitor_list'] = $view;

  return $export;
}
