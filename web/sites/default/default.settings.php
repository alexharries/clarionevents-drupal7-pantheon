<?php

/**
 * @file
 * Drupal site-specific configuration file.
 */

// Work out the directory name of this multisite:
define('MULTISITE_IDENTIFIER', substr(dirname(__FILE__), strrpos(dirname(__FILE__), '/') + 1));

// Include the common settings.php file. Paths relative to index.php!
require_once '../configuration/common.settings.php';

/**
 * S3FS module config.
 */

// Set the bucket name.
$conf['s3fs_bucket'] = 'clarion-default';

// If we know the env and aren't in production or drush use the test bucket.
// @todo: How can we tell if we're in Drush on live?
if (defined('CURRENT_ENVIRONMENT') && defined('ENVIRONMENT_TYPE_LIVE') && (CURRENT_ENVIRONMENT !== ENVIRONMENT_TYPE_LIVE) && (CURRENT_ENVIRONMENT !== ENVIRONMENT_TYPE_UNKNOWN) && (CURRENT_ENVIRONMENT !== ENVIRONMENT_TYPE_DRUSH)) {
  // Disabled for now: $conf['s3fs_bucket'] .= '-test';
}

/**
 * Redirects.
 *
 * @see /configuration/includes/redirects.php for examples.
 */
