<?php

/**
 * @file
 * babytotoddler_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function babytotoddler_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
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
function babytotoddler_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function babytotoddler_sponsors_image_default_styles() {
  $styles = array();

  // Exported image style: headline_sponsor.
  $styles['headline_sponsor'] = array(
    'label' => 'Headline Sponsor',
    'effects' => array(
      66 => array(
        'name' => 'imagemagick_strip',
        'data' => array(),
        'weight' => 1,
      ),
      71 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
      76 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: sponsors_176x150.
  $styles['sponsors_176x150'] = array(
    'label' => 'Sponsors Landscape',
    'effects' => array(
      221 => array(
        'name' => 'imagemagick_strip',
        'data' => array(),
        'weight' => -10,
      ),
      216 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => -9,
      ),
      506 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: sponsors_portrait.
  $styles['sponsors_portrait'] = array(
    'label' => 'Sponsors Portrait',
    'effects' => array(
      471 => array(
        'name' => 'imagemagick_strip',
        'data' => array(),
        'weight' => -10,
      ),
      476 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => -9,
      ),
      491 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 176,
          'height' => 176,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => -8,
      ),
      501 => array(
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 5,
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => 5,
      ),
    ),
  );

  // Exported image style: sponsors_processed.
  $styles['sponsors_processed'] = array(
    'label' => 'Sponsors Processed',
    'effects' => array(
      441 => array(
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'sponsors_portrait',
          'landscape' => 'sponsors_176x150',
          'ratio_adjustment' => 1,
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
function babytotoddler_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
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
