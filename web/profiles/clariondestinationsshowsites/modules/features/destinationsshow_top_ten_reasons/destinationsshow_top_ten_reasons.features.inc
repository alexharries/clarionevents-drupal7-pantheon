<?php
/**
 * @file
 * destinationsshow_top_ten_reasons.features.inc
 */

/**
 * Implements hook_views_api().
 */
function destinationsshow_top_ten_reasons_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function destinationsshow_top_ten_reasons_flag_default_flags() {
  $flags = array();
  // Exported flag: "Flag as 10 top reason to visit".
  $flags['flag_as_10_top_reason_to_visit'] = array(
    'entity_type' => 'node',
    'title' => 'Flag as 10 top reason to visit',
    'global' => 1,
    'types' => array(
      0 => 'page',
    ),
    'flag_short' => 'Flag this item as a 10 top reason to visit',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item as a 10 top reason to visit',
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
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'destinationsshow_top_ten_reasons',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
