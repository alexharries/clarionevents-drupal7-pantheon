<?php
/**
 * @file
 * babytotoddler_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function babytotoddler_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function babytotoddler_paragraphs_paragraphs_info() {
  $items = array(
    'call_to_action' => array(
      'name' => 'Call to action',
      'bundle' => 'call_to_action',
      'locked' => '1',
    ),
    'homepage_leaders' => array(
      'name' => 'Homepage Leaders',
      'bundle' => 'homepage_leaders',
      'locked' => '1',
    ),
    'image_masonry' => array(
      'name' => 'Image Masonry',
      'bundle' => 'image_masonry',
      'locked' => '1',
    ),
    'images_generic' => array(
      'name' => 'Images Generic',
      'bundle' => 'images_generic',
      'locked' => '1',
    ),
    'package_item' => array(
      'name' => 'Package item',
      'bundle' => 'package_item',
      'locked' => '1',
    ),
    'slideshow' => array(
      'name' => 'Slideshow',
      'bundle' => 'slideshow',
      'locked' => '1',
    ),
    'teaser_content' => array(
      'name' => 'Teaser Content',
      'bundle' => 'teaser_content',
      'locked' => '1',
    ),
    'ticket_' => array(
      'name' => 'Ticket',
      'bundle' => 'ticket_',
      'locked' => '1',
    ),
    'time_schedule' => array(
      'name' => 'Time schedule',
      'bundle' => 'time_schedule',
      'locked' => '1',
    ),
    'two_column_image_left' => array(
      'name' => 'Two column Image left',
      'bundle' => 'two_column_image_left',
      'locked' => '1',
    ),
    'two_column_image_right' => array(
      'name' => 'Two column Image right',
      'bundle' => 'two_column_image_right',
      'locked' => '1',
    ),
    'youtube_video' => array(
      'name' => 'Youtube video',
      'bundle' => 'youtube_video',
      'locked' => '1',
    ),
  );
  return $items;
}
