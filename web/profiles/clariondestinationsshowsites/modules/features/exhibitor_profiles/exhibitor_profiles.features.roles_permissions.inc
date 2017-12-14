<?php
/**
 * @file
 * exhibitor_profiles.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function exhibitor_profiles_default_roles_permissions() {
  $roles = array();

  // Exported role: exhibitor
  $roles['exhibitor'] = array(
    'name' => 'exhibitor',
    'weight' => 4,
    'machine_name' => 'exhibitor',
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access content' => TRUE,
      'access contextual links' => TRUE,
      'check out documents' => TRUE,
      'create body' => TRUE,
      'edit body' => TRUE,
      'edit own body' => TRUE,
      'edit own exhibitor content' => TRUE,
      'edit own special_offer content' => TRUE,
      'search content' => TRUE,
      'show format tips' => TRUE,
      'show more format tips link' => TRUE,
      'use advanced search' => TRUE,
      'use text format filtered_html' => TRUE,
      'view body' => TRUE,
      'view files' => TRUE,
      'view own body' => TRUE,
      'view own unpublished content' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  return $roles;
}
