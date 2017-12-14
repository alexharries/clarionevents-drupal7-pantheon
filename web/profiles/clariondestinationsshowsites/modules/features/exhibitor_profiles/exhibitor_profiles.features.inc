<?php
/**
 * @file
 * exhibitor_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibitor_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function exhibitor_profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function exhibitor_profiles_node_info() {
  $items = array(
    'exhibitor' => array(
      'name' => t('Exhibitor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function exhibitor_profiles_paragraphs_info() {
  $items = array(
    'exhibitor_listing' => array(
      'name' => 'Exhibitor Listing',
      'bundle' => 'exhibitor_listing',
      'locked' => '1',
    ),
  );
  return $items;
}
