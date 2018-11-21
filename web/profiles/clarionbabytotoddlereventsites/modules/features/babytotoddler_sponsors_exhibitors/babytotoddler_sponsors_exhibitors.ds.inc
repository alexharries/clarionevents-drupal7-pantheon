<?php

/**
 * @file
 * babytotoddler_sponsors_exhibitors.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function babytotoddler_sponsors_exhibitors_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_stand' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Stand no.',
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile|exhibitor_profile';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile';
  $ds_fieldsetting->view_mode = 'exhibitor_profile';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|exhibitor_profile|exhibitor_profile'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile|featured_exhibitor_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile';
  $ds_fieldsetting->view_mode = 'featured_exhibitor_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => 'pull-left title',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-xs-12 col-sm-6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_stand' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Stand',
          'lb-cl' => 'inline',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stand col-xs-12 col-sm-6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'inline',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-sm-12',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'container',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile|featured_exhibitor_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
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
    'field_stand' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Stand No',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stand',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_website' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => 'Visit ',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'website',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'categories',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_exhibitor_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'row images',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-xs-12 col-sm-4',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_exhibitor_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'email',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile|highlights_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile';
  $ds_fieldsetting->view_mode = 'highlights_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'conditions' => array(),
      ),
    ),
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'full-width-image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile|highlights_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => 'pull-left title',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-xs-12 col-sm-6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_stand' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Stand',
          'lb-cl' => 'inline',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-xs-12 col-sm-6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'inline',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sponsor|sponsor_landscape';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sponsor';
  $ds_fieldsetting->view_mode = 'sponsor_landscape';
  $ds_fieldsetting->settings = array(
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'center-image no-rounded-img',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|sponsor|sponsor_landscape'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sponsor|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sponsor';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'center-image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|sponsor|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function babytotoddler_sponsors_exhibitors_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_two_column_left';
  $ds_layout->settings = array(
    'regions' => array(
      'top_left' => array(
        0 => 'title',
        1 => 'field_stand',
        2 => 'field_website',
        3 => 'field_logo',
      ),
      'top_right' => array(
        4 => 'body',
      ),
      'bottom' => array(
        5 => 'field_categories',
        6 => 'field_exhibitor_images',
      ),
    ),
    'fields' => array(
      'title' => 'top_left',
      'field_stand' => 'top_left',
      'field_website' => 'top_left',
      'field_logo' => 'top_left',
      'body' => 'top_right',
      'field_categories' => 'bottom',
      'field_exhibitor_images' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
  $export['node|exhibitor_profile|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile|exhibitor_profile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile';
  $ds_layout->view_mode = 'exhibitor_profile';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'author',
        1 => 'exhibitor_edit_link_entity_view_1',
        2 => 'title',
      ),
      'left' => array(
        3 => 'field_logo',
        4 => 'field_stand',
        5 => 'field_website',
      ),
      'right' => array(
        6 => 'body',
      ),
      'ds_hidden' => array(
        7 => 'field_categories',
      ),
    ),
    'fields' => array(
      'author' => 'top',
      'exhibitor_edit_link_entity_view_1' => 'top',
      'title' => 'top',
      'field_logo' => 'left',
      'field_stand' => 'left',
      'field_website' => 'left',
      'body' => 'right',
      'field_categories' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
  $export['node|exhibitor_profile|exhibitor_profile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile|featured_exhibitor_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile';
  $ds_layout->view_mode = 'featured_exhibitor_teaser';
  $ds_layout->layout = 'bootstrap_one_column';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_logo',
        1 => 'group_container',
        2 => 'title',
        3 => 'field_stand',
      ),
    ),
    'fields' => array(
      'field_logo' => 'central',
      'group_container' => 'central',
      'title' => 'central',
      'field_stand' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|exhibitor_profile|featured_exhibitor_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_two_column_left';
  $ds_layout->settings = array(
    'regions' => array(
      'top_left' => array(
        0 => 'field_logo',
      ),
      'top_right' => array(
        1 => 'field_stand',
        2 => 'group_container',
        3 => 'body',
        4 => 'field_exhibitor_email',
        6 => 'field_website',
      ),
      'bottom' => array(
        5 => 'field_categories',
        7 => 'field_exhibitor_images',
      ),
    ),
    'fields' => array(
      'field_logo' => 'top_left',
      'field_stand' => 'top_right',
      'group_container' => 'top_right',
      'body' => 'top_right',
      'field_exhibitor_email' => 'top_right',
      'field_categories' => 'bottom',
      'field_website' => 'top_right',
      'field_exhibitor_images' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
        'col-lg-10' => 'col-lg-10',
        'col-lg-offset-1' => 'col-lg-offset-1',
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
  $export['node|exhibitor_profile|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile|highlights_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile';
  $ds_layout->view_mode = 'highlights_teaser';
  $ds_layout->layout = 'bootstrap_one_column';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_wrapper',
        1 => 'group_container',
        2 => 'field_logo',
        3 => 'title',
      ),
    ),
    'fields' => array(
      'group_wrapper' => 'central',
      'group_container' => 'central',
      'field_logo' => 'central',
      'title' => 'central',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|exhibitor_profile|highlights_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_one_column';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_container',
        1 => 'title',
        2 => 'field_stand',
      ),
    ),
    'fields' => array(
      'group_container' => 'central',
      'title' => 'central',
      'field_stand' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|exhibitor_profile|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|sponsor_landscape';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'sponsor_landscape';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_logo_link',
        1 => 'field_logo',
      ),
    ),
    'fields' => array(
      'group_logo_link' => 'central',
      'field_logo' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
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
  $export['node|sponsor|sponsor_landscape'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_logo_link',
        1 => 'field_logo',
      ),
    ),
    'fields' => array(
      'group_logo_link' => 'central',
      'field_logo' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
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
  $export['node|sponsor|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function babytotoddler_sponsors_exhibitors_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'exhibitor_profile';
  $ds_view_mode->label = 'Exhibitor Profile';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['exhibitor_profile'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured_exhibitor_teaser';
  $ds_view_mode->label = 'Featured Exhibitor Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['featured_exhibitor_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sponsor_landscape';
  $ds_view_mode->label = 'Sponsor Landscape';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sponsor_landscape'] = $ds_view_mode;

  return $export;
}
