<?php
/**
 * @file
 * destinationsshow_special_offers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function destinationsshow_special_offers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function destinationsshow_special_offers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function destinationsshow_special_offers_node_info() {
  $items = array(
    'special_offer' => array(
      'name' => t('Special Offer'),
      'base' => 'node_content',
      'description' => t('Upload any special offers taking place alongside where and how to obtain them. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
