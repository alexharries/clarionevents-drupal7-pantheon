<?php

/**
 * @file
 * exhibitor_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibitor_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
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
 * Implements hook_image_default_styles().
 */
function exhibitor_profiles_image_default_styles() {
  $styles = array();

  // Exported image style: exhibitor_list_image.
  $styles['exhibitor_list_image'] = array(
    'label' => 'Exhibitor List Image',
    'effects' => array(
      316 => array(
        'name' => 'imagemagick_strip',
        'data' => array(),
        'weight' => 1,
      ),
      321 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
      331 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 4,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function exhibitor_profiles_node_info() {
  $items = array(
    'exhibitor_profile' => array(
      'name' => t('Exhibitor Profile'),
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
