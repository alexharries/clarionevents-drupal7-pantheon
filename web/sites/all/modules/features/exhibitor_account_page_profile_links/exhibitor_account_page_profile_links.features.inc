<?php
/**
 * @file
 * exhibitor_account_page_profile_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibitor_account_page_profile_links_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function exhibitor_account_page_profile_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
