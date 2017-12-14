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

  // Exported permission: 'create field_basic'.
  $permissions['create field_basic'] = array(
    'name' => 'create field_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_enhanced'.
  $permissions['create field_enhanced'] = array(
    'name' => 'create field_enhanced',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_exhibitor_isdistributor'.
  $permissions['create field_exhibitor_isdistributor'] = array(
    'name' => 'create field_exhibitor_isdistributor',
    'roles' => array(
      'administrator' => 'administrator',
      'client administrator' => 'client administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_new'.
  $permissions['create field_new'] = array(
    'name' => 'create field_new',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_stand'.
  $permissions['create field_stand'] = array(
    'name' => 'create field_stand',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_basic'.
  $permissions['edit field_basic'] = array(
    'name' => 'edit field_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_enhanced'.
  $permissions['edit field_enhanced'] = array(
    'name' => 'edit field_enhanced',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_exhibitor_isdistributor'.
  $permissions['edit field_exhibitor_isdistributor'] = array(
    'name' => 'edit field_exhibitor_isdistributor',
    'roles' => array(
      'administrator' => 'administrator',
      'client administrator' => 'client administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_new'.
  $permissions['edit field_new'] = array(
    'name' => 'edit field_new',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_stand'.
  $permissions['edit field_stand'] = array(
    'name' => 'edit field_stand',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_basic'.
  $permissions['edit own field_basic'] = array(
    'name' => 'edit own field_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_enhanced'.
  $permissions['edit own field_enhanced'] = array(
    'name' => 'edit own field_enhanced',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_exhibitor_isdistributor'.
  $permissions['edit own field_exhibitor_isdistributor'] = array(
    'name' => 'edit own field_exhibitor_isdistributor',
    'roles' => array(
      'administrator' => 'administrator',
      'client administrator' => 'client administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_new'.
  $permissions['edit own field_new'] = array(
    'name' => 'edit own field_new',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_stand'.
  $permissions['edit own field_stand'] = array(
    'name' => 'edit own field_stand',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_basic'.
  $permissions['view field_basic'] = array(
    'name' => 'view field_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_enhanced'.
  $permissions['view field_enhanced'] = array(
    'name' => 'view field_enhanced',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_exhibitor_isdistributor'.
  $permissions['view field_exhibitor_isdistributor'] = array(
    'name' => 'view field_exhibitor_isdistributor',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'client administrator' => 'client administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_new'.
  $permissions['view field_new'] = array(
    'name' => 'view field_new',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_stand'.
  $permissions['view field_stand'] = array(
    'name' => 'view field_stand',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_basic'.
  $permissions['view own field_basic'] = array(
    'name' => 'view own field_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_enhanced'.
  $permissions['view own field_enhanced'] = array(
    'name' => 'view own field_enhanced',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_exhibitor_isdistributor'.
  $permissions['view own field_exhibitor_isdistributor'] = array(
    'name' => 'view own field_exhibitor_isdistributor',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'client administrator' => 'client administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_new'.
  $permissions['view own field_new'] = array(
    'name' => 'view own field_new',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_stand'.
  $permissions['view own field_stand'] = array(
    'name' => 'view own field_stand',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
