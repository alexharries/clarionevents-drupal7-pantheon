<?php
/**
 * @file
 * exhibitor_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function exhibitor_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_featured_exhibitor'.
  $permissions['create field_featured_exhibitor'] = array(
    'name' => 'create field_featured_exhibitor',
    'roles' => array(
      'administrator' => 'administrator',
      'marketing executive' => 'marketing executive',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_featured_exhibitor'.
  $permissions['edit field_featured_exhibitor'] = array(
    'name' => 'edit field_featured_exhibitor',
    'roles' => array(
      'administrator' => 'administrator',
      'marketing executive' => 'marketing executive',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_featured_exhibitor'.
  $permissions['edit own field_featured_exhibitor'] = array(
    'name' => 'edit own field_featured_exhibitor',
    'roles' => array(
      'administrator' => 'administrator',
      'marketing executive' => 'marketing executive',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_featured_exhibitor'.
  $permissions['view field_featured_exhibitor'] = array(
    'name' => 'view field_featured_exhibitor',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_featured_exhibitor'.
  $permissions['view own field_featured_exhibitor'] = array(
    'name' => 'view own field_featured_exhibitor',
    'roles' => array(
      'administrator' => 'administrator',
      'marketing executive' => 'marketing executive',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
