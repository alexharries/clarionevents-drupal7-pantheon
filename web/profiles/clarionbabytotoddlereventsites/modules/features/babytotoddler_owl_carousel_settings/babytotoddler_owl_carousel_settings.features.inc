<?php
/**
 * @file
 * babytotoddler_owl_carousel_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function babytotoddler_owl_carousel_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
