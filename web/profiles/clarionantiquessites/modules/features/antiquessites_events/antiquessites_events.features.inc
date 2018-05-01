<?php
/**
 * @file
 * antiquessites_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antiquessites_events_ctools_plugin_api($module = NULL, $api = NULL) {
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
function antiquessites_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function antiquessites_events_image_default_styles() {
  $styles = array();

  // Exported image style: event_image.
  $styles['event_image'] = array(
    'label' => 'Event Image',
    'effects' => array(
      126 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 100,
          'height' => 272,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_image_-_mobile.
  $styles['event_image_-_mobile'] = array(
    'label' => 'Event Image - Mobile',
    'effects' => array(
      131 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
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
function antiquessites_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Creates an events for the exhibitition'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
