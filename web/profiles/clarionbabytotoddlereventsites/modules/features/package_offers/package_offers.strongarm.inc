<?php
/**
 * @file
 * package_offers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function package_offers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_package_offer';
  $strongarm->value = 'edit-xmlsitemap';
  $export['additional_settings__active_tab_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_package_offer';
  $strongarm->value = TRUE;
  $export['autosave_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_package_offer';
  $strongarm->value = 0;
  $export['comment_anonymous_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_package_offer';
  $strongarm->value = 0;
  $export['comment_default_mode_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_package_offer';
  $strongarm->value = '50';
  $export['comment_default_per_page_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_package_offer';
  $strongarm->value = 0;
  $export['comment_form_location_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_package_offer';
  $strongarm->value = '1';
  $export['comment_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_package_offer';
  $strongarm->value = '0';
  $export['comment_preview_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_package_offer';
  $strongarm->value = 0;
  $export['comment_subject_field_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_package_offer';
  $strongarm->value = array();
  $export['ds_extras_view_modes_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__package_offer';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'highlights_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'one_column_generic_page' => array(
        'custom_settings' => FALSE,
      ),
      'two_column_left_generic_page' => array(
        'custom_settings' => FALSE,
      ),
      'two_column_right_generic_page' => array(
        'custom_settings' => FALSE,
      ),
      'exhibitor_profile' => array(
        'custom_settings' => FALSE,
      ),
      'featured_exhibitor_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'grid' => array(
        'custom_settings' => FALSE,
      ),
      'image_separator' => array(
        'custom_settings' => FALSE,
      ),
      'three_columns' => array(
        'custom_settings' => FALSE,
      ),
      'two_columns' => array(
        'custom_settings' => FALSE,
      ),
      'newsletter_block' => array(
        'custom_settings' => FALSE,
      ),
      'three_column' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__package_item';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'basic_page' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_grid' => array(
        'custom_settings' => FALSE,
      ),
      'masonry_display' => array(
        'custom_settings' => FALSE,
      ),
      'newsletter_block' => array(
        'custom_settings' => FALSE,
      ),
      'one_column_generic_page' => array(
        'custom_settings' => FALSE,
      ),
      'three_column' => array(
        'custom_settings' => FALSE,
      ),
      'two_columns' => array(
        'custom_settings' => FALSE,
      ),
      'two_column_left_generic_page' => array(
        'custom_settings' => FALSE,
      ),
      'two_column_right_generic_page' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__package_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_package_offer';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_package_offer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__package_offer';
  $strongarm->value = 1;
  $export['metatag_enable_node__package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_package_offer';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_package_offer';
  $strongarm->value = '0';
  $export['node_preview_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_package_offer';
  $strongarm->value = 0;
  $export['node_submitted_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_package_offer_pattern';
  $strongarm->value = '';
  $export['pathauto_node_package_offer_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_package_offer';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_package_offer';
  $strongarm->value = 0;
  $export['webform_node_package_offer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_package_offer';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_package_offer'] = $strongarm;

  return $export;
}
