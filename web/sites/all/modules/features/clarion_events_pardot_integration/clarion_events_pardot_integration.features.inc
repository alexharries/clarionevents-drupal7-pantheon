<?php
/**
 * @file
 * clarion_events_pardot_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clarion_events_pardot_integration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
