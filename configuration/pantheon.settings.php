<?php

/**
 * @file
 * Pantheon-specific settings.
 */

/**
 * All Pantheon sites except a couple run on HTTPS, so redirect them.
 *
 * @see https://pantheon.io/docs/http-to-https/
 * @see https://pantheon.io/docs/https/
 */

// Don't attempt to redirect Drush.
if (!defined('GREYHEAD_SITE_DOES_NOT_SUPPORT_HTTPS') || !GREYHEAD_SITE_DOES_NOT_SUPPORT_HTTPS) {
  if (php_sapi_name() != 'cli') {
    // Upgrade HTTP requests to secure HTTPS
    header("Content-Security-Policy: upgrade-insecure-requests;");

    // Report all insecure requests, but do not refuse
    header("Content-Security-Policy-Report-Only: img-src https:; script-src https: 'unsafe-inline'; style-src https: 'unsafe-inline';");

    if (!isset($_SERVER['HTTP_X_SSL']) || ($_SERVER['HTTP_X_SSL'] != 'ON')) {
      // Name transaction "redirect" in New Relic for improved reporting (optional)
      if (extension_loaded('newrelic')) {
        newrelic_name_transaction("redirect");
      }

      header('HTTP/1.0 301 Moved Permanently');
      header('Location: https://' . $_SERVER['HTTP_HOST'] . $_SERVER['REQUEST_URI']);
      exit();
    }
  }
}
