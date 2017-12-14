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

  // Exported role: Exhibitor.
  $roles['Exhibitor'] = array(
    'name' => 'Exhibitor',
    'weight' => 3,
    'machine_name' => '',
  );

  return $roles;
}
