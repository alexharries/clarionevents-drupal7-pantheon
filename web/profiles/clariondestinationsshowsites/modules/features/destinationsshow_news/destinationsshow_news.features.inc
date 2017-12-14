<?php
/**
 * @file
 * destinationsshow_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function destinationsshow_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function destinationsshow_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function destinationsshow_news_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Latest news'),
      'base' => 'node_content',
      'description' => t('Latest news, similar in form to a page, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a story entry. By default, a story entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
