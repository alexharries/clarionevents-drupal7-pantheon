<?php

/**
 * @file
 * babytotoddler_sponsors_exhibitors.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function babytotoddler_sponsors_exhibitors_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_exhibitor_profile';
  $strongarm->value = 'edit-xmlsitemap';
  $export['additional_settings__active_tab_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_sponsor';
  $strongarm->value = 'edit-xmlsitemap';
  $export['additional_settings__active_tab_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_exhibitor_profile';
  $strongarm->value = TRUE;
  $export['autosave_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_sponsor';
  $strongarm->value = TRUE;
  $export['autosave_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_exhibitor_profile';
  $strongarm->value = 0;
  $export['comment_anonymous_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sponsor';
  $strongarm->value = 0;
  $export['comment_anonymous_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_exhibitor_profile';
  $strongarm->value = 0;
  $export['comment_default_mode_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sponsor';
  $strongarm->value = 0;
  $export['comment_default_mode_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_exhibitor_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sponsor';
  $strongarm->value = '50';
  $export['comment_default_per_page_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_exhibitor_profile';
  $strongarm->value = '1';
  $export['comment_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_exhibitor_profile';
  $strongarm->value = 0;
  $export['comment_form_location_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sponsor';
  $strongarm->value = 0;
  $export['comment_form_location_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_exhibitor_profile';
  $strongarm->value = '0';
  $export['comment_preview_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sponsor';
  $strongarm->value = '0';
  $export['comment_preview_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sponsor';
  $strongarm->value = '1';
  $export['comment_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_exhibitor_profile';
  $strongarm->value = 0;
  $export['comment_subject_field_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sponsor';
  $strongarm->value = 0;
  $export['comment_subject_field_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_exhibitor_profile';
  $strongarm->value = array();
  $export['ds_extras_view_modes_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_sponsor';
  $strongarm->value = array();
  $export['ds_extras_view_modes_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__exhibitor_profile';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'highlights_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
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
        'custom_settings' => TRUE,
      ),
      'featured_exhibitor_teaser' => array(
        'custom_settings' => TRUE,
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
          'weight' => '7',
        ),
      ),
      'display' => array(
        'exhibitor_edit_link_entity_view_1' => array(
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'exhibitor_profile' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'highlights_teaser' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'featured_exhibitor_teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'categories_field_entity_view_1' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sponsor';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'exhibitor_profile' => array(
        'custom_settings' => FALSE,
      ),
      'featured_exhibitor_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'grid' => array(
        'custom_settings' => FALSE,
      ),
      'highlights_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'image_separator' => array(
        'custom_settings' => FALSE,
      ),
      'newsletter_block' => array(
        'custom_settings' => FALSE,
      ),
      'one_column_generic_page' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'three_column' => array(
        'custom_settings' => FALSE,
      ),
      'three_columns' => array(
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'sponsor_landscape' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_exhibitor_profile';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sponsor';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_exhibitor_profile';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sponsor';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_comment__comment_node_exhibitor_profile';
  $strongarm->value = 1;
  $export['metatag_enable_comment__comment_node_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_comment__comment_node_sponsor';
  $strongarm->value = 1;
  $export['metatag_enable_comment__comment_node_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__exhibitor_profile';
  $strongarm->value = 1;
  $export['metatag_enable_node__exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__sponsor';
  $strongarm->value = 1;
  $export['metatag_enable_node__sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__sponsor_type';
  $strongarm->value = 1;
  $export['metatag_enable_taxonomy_term__sponsor_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_exhibitor_profile';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sponsor';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_exhibitor_profile';
  $strongarm->value = '1';
  $export['node_preview_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sponsor';
  $strongarm->value = '0';
  $export['node_preview_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_exhibitor_profile';
  $strongarm->value = 0;
  $export['node_submitted_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sponsor';
  $strongarm->value = 0;
  $export['node_submitted_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_exhibitor_profile_pattern';
  $strongarm->value = 'exhibitor/[node:title]';
  $export['pathauto_node_exhibitor_profile_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_sponsor_pattern';
  $strongarm->value = '';
  $export['pathauto_node_sponsor_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_categories_pattern';
  $strongarm->value = 'exhibitors/all/[term:name]';
  $export['pathauto_taxonomy_term_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sponsor_type_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_sponsor_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_exhibitor_profile';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_sponsor';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_exhibitor_profile';
  $strongarm->value = 0;
  $export['webform_node_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_sponsor';
  $strongarm->value = 0;
  $export['webform_node_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_exhibitor_profile';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_exhibitor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_sponsor';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_categories';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_categories'] = $strongarm;

  return $export;
}
