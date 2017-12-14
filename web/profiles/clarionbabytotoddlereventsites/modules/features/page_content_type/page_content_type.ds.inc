<?php
/**
 * @file
 * page_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function page_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-xs-12 col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_extra_content_bottom' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'row',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|highlights_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'highlights_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|highlights_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|one_column_generic_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'one_column_generic_page';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|page|one_column_generic_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|two_column_left_generic_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'two_column_left_generic_page';
  $ds_fieldsetting->settings = array(
    'field_extra_content_bottom' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|page|two_column_left_generic_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|two_column_right_generic_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'two_column_right_generic_page';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|page|two_column_right_generic_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|slideshow|basic_page';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'slideshow';
  $ds_fieldsetting->view_mode = 'basic_page';
  $ds_fieldsetting->settings = array(
    'field_slideshow_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['paragraphs_item|slideshow|basic_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function page_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_two_column';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'body',
      ),
      'left' => array(
        1 => 'field_slideshow',
      ),
      'right' => array(
        2 => 'field_extra_content',
      ),
      'bottom' => array(
        3 => 'field_extra_content_bottom',
      ),
    ),
    'fields' => array(
      'body' => 'top',
      'field_slideshow' => 'left',
      'field_extra_content' => 'right',
      'field_extra_content_bottom' => 'bottom',
    ),
    'limit' => array(
      'field_slideshow' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
      ),
      'left' => array(
        'col-xs-12' => 'col-xs-12',
        'col-lg-6' => 'col-lg-6',
        'left' => 'left',
      ),
      'right' => array(
        'col-xs-12' => 'col-xs-12',
        'col-lg-6' => 'col-lg-6',
        'right' => 'right',
      ),
      'bottom' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|highlights_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'highlights_teaser';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_highlights_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_highlights_image' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'col-xs-12' => 'col-xs-12',
      ),
      'right' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|page|highlights_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|one_column_generic_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'one_column_generic_page';
  $ds_layout->layout = 'bootstrap_two_column_left';
  $ds_layout->settings = array(
    'regions' => array(
      'top_left' => array(
        0 => 'title',
      ),
      'top_right' => array(
        1 => 'body',
      ),
      'bottom' => array(
        2 => 'field_extra_content_bottom',
      ),
    ),
    'fields' => array(
      'title' => 'top_left',
      'body' => 'top_right',
      'field_extra_content_bottom' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
      ),
      'bottom' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'top_left' => 'div',
      'top_right' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|page|one_column_generic_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|two_column_left_generic_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'two_column_left_generic_page';
  $ds_layout->layout = 'bootstrap_two_column_left';
  $ds_layout->settings = array(
    'regions' => array(
      'top_left' => array(
        0 => 'field_image_column',
      ),
      'top_right' => array(
        1 => 'body',
      ),
      'bottom' => array(
        2 => 'field_extra_content_bottom',
      ),
    ),
    'fields' => array(
      'field_image_column' => 'top_left',
      'body' => 'top_right',
      'field_extra_content_bottom' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
      ),
      'bottom' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'top_left' => 'div',
      'top_right' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|page|two_column_left_generic_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|two_column_right_generic_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'two_column_right_generic_page';
  $ds_layout->layout = 'bootstrap_two_column_right';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'body',
        2 => 'field_extra_content',
      ),
      'right' => array(
        3 => 'field_image_column',
      ),
      'bottom' => array(
        4 => 'field_extra_content_bottom',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'body' => 'left',
      'field_extra_content' => 'left',
      'field_image_column' => 'right',
      'field_extra_content_bottom' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
      ),
      'top' => array(
        'col-xs-12' => 'col-xs-12',
      ),
      'bottom' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|page|two_column_right_generic_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|slideshow|basic_page';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'slideshow';
  $ds_layout->view_mode = 'basic_page';
  $ds_layout->layout = 'bootstrap_one_column';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_slideshow_image',
        1 => 'field_slideshow_description',
      ),
      'ds_hidden' => array(
        2 => 'field_slideshow_link',
      ),
    ),
    'fields' => array(
      'field_slideshow_image' => 'central',
      'field_slideshow_description' => 'central',
      'field_slideshow_link' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'central' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|slideshow|basic_page'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function page_content_type_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'basic_page';
  $ds_view_mode->label = 'Basic Page';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['basic_page'] = $ds_view_mode;

  return $export;
}
