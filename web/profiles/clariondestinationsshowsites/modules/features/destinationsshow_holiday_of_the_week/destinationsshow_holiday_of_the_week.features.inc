<?php
/**
 * @file
 * destinationsshow_holiday_of_the_week.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function destinationsshow_holiday_of_the_week_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function destinationsshow_holiday_of_the_week_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function destinationsshow_holiday_of_the_week_flag_default_flags() {
  $flags = array();
  // Exported flag: "Holiday of the week".
  $flags['holiday_of_the_week'] = array(
    'entity_type' => 'node',
    'title' => 'Holiday of the week',
    'global' => 1,
    'types' => array(
      0 => 'page',
    ),
    'flag_short' => 'Flag this item for holiday of the week',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item for holiday of the week',
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
    'api_version' => 3,
    'module' => 'destinationsshow_holiday_of_the_week',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
