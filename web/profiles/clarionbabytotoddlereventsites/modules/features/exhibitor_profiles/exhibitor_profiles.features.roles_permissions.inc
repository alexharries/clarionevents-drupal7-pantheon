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

  // Exported role: Exhibitor
  $roles['Exhibitor'] = array(
    'name' => 'Exhibitor',
    'weight' => 3,
    'machine_name' => '',
    'permissions' => array(
      'access media browser' => TRUE,
      'create files' => TRUE,
      'edit own exhibitor_profile content' => TRUE,
      'use text format editor' => TRUE,
      'view author on node' => TRUE,
      'view files' => TRUE,
      'view node_link on node' => TRUE,
      'view own files' => TRUE,
      'view own private files' => TRUE,
    ),
  );

  return $roles;
}
