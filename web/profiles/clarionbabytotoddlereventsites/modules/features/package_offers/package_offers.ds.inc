<?php
/**
 * @file
 * package_offers.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function package_offers_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|package_offer|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'package_offer';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'book_package_additional' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'button',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
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
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'center-image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_packages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-xs-12',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_book_packages_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'button',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_package_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'full-width-image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-sm-6 img-squared',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|package_offer|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|package_offer|highlights_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'package_offer';
  $ds_fieldsetting->view_mode = 'highlights_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|package_offer|highlights_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|package_offer|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'package_offer';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'View Packages',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|package_offer|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function package_offers_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'book_package_additional';
  $ds_field->label = 'Book package additional';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field_book_packages_link]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['book_package_additional'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function package_offers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|package_offer|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'package_offer';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_two_column_left';
  $ds_layout->settings = array(
    'regions' => array(
      'top_left' => array(
        0 => 'field_logo',
      ),
      'top_right' => array(
        1 => 'body',
      ),
      'bottom' => array(
        2 => 'field_book_packages_link',
        3 => 'field_packages',
        4 => 'field_package_images',
        5 => 'book_package_additional',
      ),
    ),
    'fields' => array(
      'field_logo' => 'top_left',
      'body' => 'top_right',
      'field_book_packages_link' => 'bottom',
      'field_packages' => 'bottom',
      'field_package_images' => 'bottom',
      'book_package_additional' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-xs-12' => 'col-xs-12',
        'col-sm-10' => 'col-sm-10',
        'col-sm-offset-1' => 'col-sm-offset-1',
        'col-lg-8' => 'col-lg-8',
        'col-lg-offset-2' => 'col-lg-offset-2',
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
  $export['node|package_offer|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|package_offer|highlights_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'package_offer';
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
  $export['node|package_offer|highlights_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|package_offer|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'package_offer';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'body' => 'central',
      'node_link' => 'central',
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
  $export['node|package_offer|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|package_item|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'package_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_four_column_package';
  $ds_layout->settings = array(
    'regions' => array(
      'first_left' => array(
        0 => 'field_package_logo',
      ),
      'second_left' => array(
        1 => 'field_package_title',
      ),
      'first_right' => array(
        2 => 'field_package_description',
      ),
      'second_right' => array(
        3 => 'field_package_price',
      ),
    ),
    'fields' => array(
      'field_package_logo' => 'first_left',
      'field_package_title' => 'second_left',
      'field_package_description' => 'first_right',
      'field_package_price' => 'second_right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'first_left' => 'div',
      'second_left' => 'div',
      'first_right' => 'div',
      'second_right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|package_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|package_item|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'package_item';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_four_column_package';
  $ds_layout->settings = array(
    'regions' => array(
      'first_left' => array(
        0 => 'field_package_logo',
      ),
      'second_left' => array(
        1 => 'field_package_title',
      ),
      'first_right' => array(
        2 => 'field_package_description',
      ),
      'second_right' => array(
        3 => 'field_package_price',
      ),
    ),
    'fields' => array(
      'field_package_logo' => 'first_left',
      'field_package_title' => 'second_left',
      'field_package_description' => 'first_right',
      'field_package_price' => 'second_right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'first_left' => 'div',
      'second_left' => 'div',
      'first_right' => 'div',
      'second_right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|package_item|full'] = $ds_layout;

  return $export;
}
