<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Implements template_preprocess_field.
 *
 * @param $variables
 * @param $hook
 */
function babytotoddlerevent_sass_preprocess_field(&$variables, $hook) {
  // Remove "example@example.com" from the exhibitor e-mail field, and if the
  // field contains a valid e-mail (that isn't the @example.com address of
  // doom), make it clickaboo.
  if ($variables['element']['#field_name'] == 'field_exhibitor_email') {
    if ($variables['items']['0']['#markup'] == 'example@example.com') {
      $variables['items']['0']['#markup'] = '';
    }

    if (valid_email_address($variables['items']['0']['#markup'])) {
      $variables['items']['0']['#markup'] = t('<a href="mailto:@email?subject=@subject">@email</a>', [
        '@email' => $variables['items']['0']['#markup'],
        '@subject' => t('Enquiry from @site_name', ['@site_name' => check_plain(variable_get('site_name'))]),
      ]);
    }
  }
}
