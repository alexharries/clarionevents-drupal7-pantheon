<?php
/**
 * @file
 * shopthead.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function shopthead_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function shopthead_image_default_styles() {
  $styles = array();

  // Exported image style: shopthead_paragraph_image.
  $styles['shopthead_paragraph_image'] = array(
    'label' => 'Shop The Ad Paragraph Image',
    'effects' => array(
      647 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function shopthead_paragraphs_info() {
  $items = array(
    'shopthead' => array(
      'name' => 'Shop The Ad (The Baby Show)',
      'bundle' => 'shopthead',
      'locked' => '1',
    ),
  );
  return $items;
}
