<?php

/**
 * @file
 * babytotoddler_sponsors.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function babytotoddler_sponsors_ds_field_settings_info() {
  $export = array();

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
function babytotoddler_sponsors_ds_layout_settings_info() {
  $export = array();

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
function babytotoddler_sponsors_ds_view_modes_info() {
  $export = array();

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
