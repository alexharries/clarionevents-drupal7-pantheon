<?php
/**
 * @file
 * exhibitor_profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function exhibitor_profiles_user_default_roles() {
  $roles = array();

  // Exported role: exhibitor.
  $roles['exhibitor'] = array(
    'name' => 'exhibitor',
    'weight' => 4,
    'machine_name' => 'exhibitor',
  );

  return $roles;
}
