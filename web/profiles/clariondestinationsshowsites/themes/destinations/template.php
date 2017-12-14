<?php

/**
 * @param $variables
 */
function destinations_preprocess_views_view(&$variables) {
  // Reload Masonry after window loads.
  // Dafq dis shzz?
  if ($variables['view']->plugin_name == 'masonry_views') {
    drupal_add_js(drupal_get_path('theme', 'destinations') . '/js/destinations-masonry-redraw-after-window-load.js');
  }

  //  // If this is the exhibitor list view, add in glossary links and data.
  //  if ($variables['view']->name == 'exhibitor_list_20170912') {
  //    $monkey = TRUE;
  //    $variables['view']->monkey = TRUE;
  //  }
}

/**
 * Preprocesses the wrapping HTML.
 *
 * @param array &$variables
 *   Template variables.
 */
function destinations_preprocess_html(&$vars) {

  // Setup Google Webmasters Verification Meta Tag
  $google_webmasters_verification = [
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => [
      'name' => 'google-site-verification',
      // REPLACE THIS CODE WITH THE ONE GOOGLE SUPPLIED YOU WITH
      'content' => '6HmZvgKpv6myidkJqL0nYrW0CgLBy4OFHM4D6aD5WNc',
    ],
  ];

  // Add Google Webmasters Verification Meta Tag to head
  drupal_add_html_head($google_webmasters_verification, 'google_webmasters_verification');
}

/**
 * Implements theme_preprocess_node().
 *
 * @param $variables
 * @param $hook
 */
function destinations_preprocess_node(&$variables, $hook) {
  // Convenience variables rock.
  $node = &$variables['node'];

  /**
   * Add template suggestions for the node templating system: this adds template
   * suggestions such as:
   *
   * node--landing-page--teaser.tpl.php
   * node--landing-page--full.tpl.php
   */
  $variables['theme_hook_suggestions'][] = 'node__' . $node->type . '__' . $variables['view_mode'];

  $variables['submitted'] = format_date($variables['revision_timestamp'], 'date_only');
}

/**
 * Implements template_preprocess_field().
 *
 * @param $variables
 */
function destinations_preprocess_field(&$variables) {
  $element = &$variables['element'];

  // Make telephone fields clickable (primarily on mobile, but also works on
  // desktop with the right browser extensions).
  if ($element['#field_name'] == 'field_telephone') {
    if (!empty($variables['items'])) {
      foreach (element_children($variables['items']) as $item) {
        if (!empty($variables['items'][$item]['#markup'])) {
          $variables['items'][$item]['#markup'] = '<a class="telephone-link" href="tel:' . check_plain($variables['items'][$item]['#markup']) . '">' . $variables['items'][$item]['#markup'] . '</a>';
        }
      }
    }
  }

  // Make plain text e-mail fields clickable.
  if ($element['#field_name'] == 'field_email') {
    foreach (element_children($variables['items']) as $item) {
      if (!empty($variables['items'][$item]['#markup'])) {
        $variables['items'][$item]['#markup'] = '<a class="email-link" href="mailto:' . check_plain($variables['items'][$item]['#markup']) . '">' . $variables['items'][$item]['#markup'] . '</a>';
      }
    }
  }

  // Make street addresses clickable.
  if ($element['#field_name'] == 'field_street_address') {
    foreach (element_children($variables['items']) as $item) {
      if (!empty($variables['items'][$item]['#markup'])) {
        $variables['items'][$item]['#markup'] = '<a title="' . t('Click to view this address on Google Maps.')  . '" class="address-link" target="_blank" href="https://maps.google.co.uk?q=' . check_plain($variables['items'][$item]['#markup']) . '">' . $variables['items'][$item]['#markup'] . '</a>';
      }
    }
  }
}
