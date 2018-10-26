<?php
/**
 * @file
 * package_offers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function package_offers_ctools_plugin_api($module = NULL, $api = NULL) {
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
function package_offers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function package_offers_image_default_styles() {
  $styles = array();

  // Exported image style: package_logo.
  $styles['package_logo'] = array(
    'label' => 'Package Logo',
    'effects' => array(
      296 => array(
        'name' => 'imagemagick_strip',
        'data' => array(),
        'weight' => 1,
      ),
      301 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
      311 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: packages-thumbnail.
  $styles['packages-thumbnail'] = array(
    'label' => 'Package Thumbnail',
    'effects' => array(
      567 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function package_offers_node_info() {
  $items = array(
    'package_offer' => array(
      'name' => t('Package/Offer'),
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
function package_offers_paragraphs_info() {
  $items = array(
    'package_item' => array(
      'name' => 'Package item',
      'bundle' => 'package_item',
      'locked' => '1',
    ),
  );
  return $items;
}
