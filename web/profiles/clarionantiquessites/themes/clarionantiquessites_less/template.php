<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

// MAKE IMAGES RESPONSIVE //
function clarionantiquessites_less_preprocess_image(&$vars) {
  $vars['attributes']['class'][] = 'img-responsive';
  // http://getbootstrap.com/css/#overview-responsive-images
}

/**
 * Implements hook_html_head_alter().
 *
 * @param $head_elements
 */
function clarionantiquessites_less_html_head_alter(&$head_elements) {
  //  // If we have more than one shortcut icon, and one has a path which points
  //  // to this theme's folder, remove the other one(s).
  //  $favicon_in_this_theme = FALSE;
  //  $this_theme_path = url(drupal_get_path('theme', 'clarionantiquessites_less') . '/images/');
  //
  //  // Keep track of favicons which aren't in this theme.
  //  $favicons_not_in_this_theme = [];
  //
  //  foreach ($head_elements as $key => $value) {
  //    if (!empty($value['#attributes']['rel']) && ($value['#attributes']['rel'] == 'shortcut icon')) {
  //      // Is this favicon in this theme?
  //      if (!empty($value['#attributes']['href']) &&
  //        (substr($value['#attributes']['href'], 0, strlen($this_theme_path)) == $this_theme_path)) {
  //        $favicon_in_this_theme = TRUE;
  //      }
  //      else {
  //        // No; add it to the list of favicons which we will remove if there is
  //        // a favicon in this theme.
  //        $favicons_not_in_this_theme[] = $key;
  //      }
  //    }
  //  }
  //
  //  if ($favicon_in_this_theme && !empty($favicons_not_in_this_theme)) {
  //    foreach ($favicons_not_in_this_theme as $favicon_not_in_this_theme) {
  //      unset($head_elements[$favicon_not_in_this_theme]);
  //    }
  //  }
}

/**
 * Implements hook_page_alter().
 *
 * @param $pages
 */
function clarionantiquessites_less_page_alter(&$pages) {
  //  // Override favicons depending on the site.
  //  $favicon_overrides = [
  //    // olympia-art-antiques.com
  //    olympia-art-antiques => 'olympia-art-antiques-favicon.ico',
  //
  //    // olympia-antiques.com
  //    olympia-antiques => 'olympia-antiques-favicon.ico',
  //
  //    // antiquesforeveryone.co.uk
  //    antiques-for-everyone => 'antiquesforeveryone-favicon.jpg',
  //
  //    // artantiquesinteriorsfair.com
  //    art-antiques-interiors-fair => 'antiquesforeveryone-london-favicon.png',
  //  ];
  //
  //  if (array_key_exists(SITE_MACHINE_NAME, $favicon_overrides)) {
  //    $favicon_url = url(drupal_get_path('theme', 'clarionantiquessites_less') . '/images/' . $favicon_overrides[SITE_MACHINE_NAME]);
  //    $type = theme_get_setting('favicon_mimetype');
  //    drupal_add_html_head_link(array('rel' => 'shortcut icon', 'href' => $favicon_url, 'type' => $type));
  //  }
}

/**
 * Implements hook_preprocess_html().
 *
 * @param $variables
 */
function clarionantiquessites_less_preprocess_html(&$variables) {
  // Set a class to indicate the conf path in use.
  $variables['classes_array'] = empty($variables['classes_array']) ? [] : $variables['classes_array'];
  $variables['classes_array'][] = 'conf-path-' . SITE_MACHINE_NAME;

  // Override the page title with the Metatags module-set title, if available.
  $metatags = metatag_page_get_metatags();
  $metatags_for_this_page = reset($metatags);

  // If we have $metatags_for_this_page['title']['#attached']['metatag_set_preprocess_variable'],
  // loop through each item and look for [1] == 'head_title'.
  if (!empty($metatags_for_this_page['title']['#attached']['metatag_set_preprocess_variable'])) {
    $title = NULL;

    foreach ($metatags_for_this_page['title']['#attached']['metatag_set_preprocess_variable'] as $title_preprocess_variaboo) {
      if ($title_preprocess_variaboo[1] == 'head_title') {
        $title = $title_preprocess_variaboo[2];
      }
    }
  }

  // If we have a title override, set it in the page head now.
  if (!empty($title)) {
    // Can't use Drupal Set Title here. Need to manually set title in page
    // array.
    // The following line should be uncommented once we have a clue wth is
    // going on with metatags...
    $variables['head_title'] = $title;

    // None of the following variables change the page title - keeping this
    // sample code in here for reference :)
    //    $variables['title'] = 'monkey' . $title;
    //    $variables['head_array']['title'] = 'monkeybananana' . $title;
    //    $variables['head_title_array']['title'] = 'flibble' . $variables['head_title_array']['title'];
    //    $variables['head_title_array']['name'] = 'wibble' . $variables['head_title_array']['name'];
  }
}

/**
 * hook_preprocess_page rewrite
 */
function clarionantiquessites_less_preprocess_page(&$variables) {
  //Add compatibility over modules that use an older version of jquery
  $jquery_migrate = '//code.jquery.com/jquery-migrate-1.2.1.min.js';
  drupal_add_js($jquery_migrate, 'external');

  // Set the site directory as a variable available in the page template.
  $variables['sites_directory'] = SITE_MACHINE_NAME;
}

/**
 * Implements hook_css_alter().
 *
 * This function will swap out the generic CSS file for a site-specific one.
 *
 * @param $css
 */
function clarionantiquessites_less_css_alter(&$css) {
  // Switch out style.css with the style-[SITE_MACHINE_NAME].css file.

  // Until I have the cojones to rename the antiques sites' site directories,
  // we're going to map the old site directory names to the new CSS file
  // names.
  $full_width_header_sites = [
    'clarion-olympia-art-antiques-summer',
    'clarion-olympia-antiques-winter',
    'clarion-antiques-for-everyone',
    'clarion-art-antiques-interiors-fair',
  ];
  $sites_directories_to_css_files_mappings = [
    'clarion-antiques-for-everyone' => 'antiquesforeveryone-co-uk',
    'clarion-art-antiques-interiors-fair' => 'artantiquesinteriorsfair-com',
    'clarion-olympia-art-antiques-summer' => 'olympia-art-antiques-com',
    'clarion-olympia-antiques-winter' => 'olympia-antiques-com',
  ];

  // Is there a CSS file like
  // "profiles/clarionantiquessites/themes/clarionantiquessites_less/css/style.css"?
  $path_to_theme_styles = drupal_get_path('theme', 'clarionantiquessites_less') . '/css/';

  if (array_key_exists($path_to_theme_styles . 'style.css', $css)
    && array_key_exists(SITE_MACHINE_NAME, $sites_directories_to_css_files_mappings)) {
    // Yes. Replace it with a file like "style-antiquesforeveryone.css".
    $replacement_css_file_path = $path_to_theme_styles . 'style-' . $sites_directories_to_css_files_mappings[SITE_MACHINE_NAME] . '.css';

    // Implement a hook_clarionantiquessites_less_css_file_override_alter.
    // We use this on AFE to switch to spring, summer or winter colours.
    drupal_alter('clarionantiquessites_less_css_file_override', $replacement_css_file_path, $sites_directories_to_css_files_mappings[SITE_MACHINE_NAME], $path_to_theme_styles);

    // Copy the default style.css file data from the CSS array, and then change
    // the file path to point to the overridden CSS file.
    $css[$replacement_css_file_path] = $css[$path_to_theme_styles . 'style.css'];
    $css[$replacement_css_file_path]['data'] = $replacement_css_file_path;

    unset($css[$path_to_theme_styles . 'style.css']);
  }
}

/**
 * This will replace the default version of jquery with a newer version.
 */
function clarionantiquessites_less_js_alter(&$js) {
  // Copy the current jQuery file settings and change
  if (!empty($js['misc/jquery.js'])) {
    $CDN_path = '//ajax.googleapis.com/ajax/libs/jquery/';
    $new_jquery = $CDN_path . '1.10.0/jquery.min.js';

    $js[$new_jquery] = $js['misc/jquery.js'];

    // Update necessary settings
    $js[$new_jquery]['version'] = 1.10;
    $js[$new_jquery]['data'] = $new_jquery;

    // Finally remove the original jQuery
    unset($js['misc/jquery.js']);
  }

  if (!empty($js['misc/ui/jquery.ui.core.min.js'])) {
    $CDN_jquery_UI = '//code.jquery.com/ui/';
    $new_jquery_UI = $CDN_jquery_UI . '1.10.0/jquery-ui.min.js';

    $js[$new_jquery_UI] = $js['misc/ui/jquery.ui.core.min.js'];

    // Update necessary settings
    $js[$new_jquery_UI]['version'] = 1.10;
    $js[$new_jquery_UI]['data'] = $new_jquery_UI;

    // Finally remove the original jQuery
    unset($js['misc/ui/jquery.ui.core.min.js']);
    unset($js['misc/ui/jquery.ui.widget.min.js']);
    unset($js['misc/ui/jquery.ui.mouse.min.js']);
    unset($js['misc/ui/jquery.ui.draggable.min.js']);
    unset($js['misc/ui/jquery.ui.droppable.min.js']);
    unset($js['misc/ui/jquery.ui.sortable.min.js']);
    unset($js['misc/ui/jquery.ui.button.min.js']);
    unset($js['misc/ui/jquery.ui.position.min.js']);
    unset($js['misc/ui/jquery.ui.resizable.min.js']);
    unset($js['misc/ui/jquery.ui.dialog.min.js']);
  }
}

/**
 * hook_preprocess_field()
 * Rewrite field display.
 */
function clarionantiquessites_less_preprocess_field(&$vars) {
  if (!empty($vars['element']['#object']->type) &&
    ($vars['element']['#object']->type == 'exhibitor_profile_page')
  ) {
    if (in_array('field-name-field-categories', $vars['classes_array'])) {
      $count = 0;
      foreach ($vars['items'] as $item) {
        if (!empty($vars['element']['#object']->field_categories[LANGUAGE_NONE][$count]['tid'])) {
          $vars['items'][$count]['#href'] = 'category-exhibitor/' . $vars['element']['#object']->field_categories[LANGUAGE_NONE][$count]['tid'];
        }
        $count++;
      }
    }
  }
}
