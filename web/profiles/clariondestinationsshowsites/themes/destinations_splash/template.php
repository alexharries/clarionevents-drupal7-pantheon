<?php

/**
 * Preprocesses the wrapping HTML.
 *
 * @param array &$variables
 *   Template variables.
 */
function destinations_splash_preprocess_html(&$vars) {

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
