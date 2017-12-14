<?php
/**
 * @file
 * destinationsshow_attractions_inspiration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function destinationsshow_attractions_inspiration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function destinationsshow_attractions_inspiration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function destinationsshow_attractions_inspiration_flag_default_flags() {
  $flags = array();
  // Exported flag: "Attractions".
  $flags['attractions'] = array(
    'entity_type' => 'node',
    'title' => 'Attractions',
    'global' => 1,
    'types' => array(
      0 => 'page',
    ),
    'flag_short' => 'Flag this item as an Attraction',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item as an attraction',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'destinationsshow_attractions_inspiration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Attractions on homepage".
  $flags['attractions_on_homepage'] = array(
    'entity_type' => 'node',
    'title' => 'Attractions on homepage',
    'global' => 1,
    'types' => array(
      0 => 'page',
    ),
    'flag_short' => 'Flag this item as attraction to place on homepage',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item as attraction to place on homepage',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'destinationsshow_attractions_inspiration',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
