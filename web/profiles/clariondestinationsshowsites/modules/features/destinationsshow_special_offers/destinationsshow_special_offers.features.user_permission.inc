<?php
/**
 * @file
 * destinationsshow_special_offers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function destinationsshow_special_offers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create body'.
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit body'.
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own body'.
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view body'.
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own body'.
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
