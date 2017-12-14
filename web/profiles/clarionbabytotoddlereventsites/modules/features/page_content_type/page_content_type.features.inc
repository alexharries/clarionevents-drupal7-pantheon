<?php
/**
 * @file
 * page_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function page_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: basic_page_image_left.
  $styles['basic_page_image_left'] = array(
    'label' => 'Basic Page Image Left',
    'effects' => array(
      126 => array(
        'name' => 'imagemagick_strip',
        'data' => array(),
        'weight' => 1,
      ),
      131 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
      136 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 793,
          'height' => 277.59,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: basic_page_image_left_extra_small.
  $styles['basic_page_image_left_extra_small'] = array(
    'label' => 'Basic Page Image Left Extra Small',
    'effects' => array(
      141 => array(
        'name' => 'imagemagick_strip',
        'data' => array(),
        'weight' => 1,
      ),
      146 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
      151 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 500,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function page_content_type_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Highlights from this years BabyToToddlerEvents show'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
