<?php
/**
 * @file
 * antiquessites_content_types_paragraphs_panes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function antiquessites_content_types_paragraphs_panes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_archive'.
  $permissions['create field_archive'] = array(
    'name' => 'create field_archive',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_featured_item'.
  $permissions['create field_featured_item'] = array(
    'name' => 'create field_featured_item',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_press_area'.
  $permissions['create field_press_area'] = array(
    'name' => 'create field_press_area',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_stand'.
  $permissions['create field_stand'] = array(
    'name' => 'create field_stand',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_title_for_ordering_'.
  $permissions['create field_title_for_ordering_'] = array(
    'name' => 'create field_title_for_ordering_',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_archive'.
  $permissions['edit field_archive'] = array(
    'name' => 'edit field_archive',
    'roles' => array(
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_featured_item'.
  $permissions['edit field_featured_item'] = array(
    'name' => 'edit field_featured_item',
    'roles' => array(
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_press_area'.
  $permissions['edit field_press_area'] = array(
    'name' => 'edit field_press_area',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_stand'.
  $permissions['edit field_stand'] = array(
    'name' => 'edit field_stand',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_title_for_ordering_'.
  $permissions['edit field_title_for_ordering_'] = array(
    'name' => 'edit field_title_for_ordering_',
    'roles' => array(
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_archive'.
  $permissions['edit own field_archive'] = array(
    'name' => 'edit own field_archive',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_featured_item'.
  $permissions['edit own field_featured_item'] = array(
    'name' => 'edit own field_featured_item',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_press_area'.
  $permissions['edit own field_press_area'] = array(
    'name' => 'edit own field_press_area',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_stand'.
  $permissions['edit own field_stand'] = array(
    'name' => 'edit own field_stand',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_title_for_ordering_'.
  $permissions['edit own field_title_for_ordering_'] = array(
    'name' => 'edit own field_title_for_ordering_',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_archive'.
  $permissions['view field_archive'] = array(
    'name' => 'view field_archive',
    'roles' => array(
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_featured_item'.
  $permissions['view field_featured_item'] = array(
    'name' => 'view field_featured_item',
    'roles' => array(
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_press_area'.
  $permissions['view field_press_area'] = array(
    'name' => 'view field_press_area',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_stand'.
  $permissions['view field_stand'] = array(
    'name' => 'view field_stand',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_title_for_ordering_'.
  $permissions['view field_title_for_ordering_'] = array(
    'name' => 'view field_title_for_ordering_',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'Temporary user' => 'Temporary user',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_archive'.
  $permissions['view own field_archive'] = array(
    'name' => 'view own field_archive',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_featured_item'.
  $permissions['view own field_featured_item'] = array(
    'name' => 'view own field_featured_item',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_press_area'.
  $permissions['view own field_press_area'] = array(
    'name' => 'view own field_press_area',
    'roles' => array(
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_stand'.
  $permissions['view own field_stand'] = array(
    'name' => 'view own field_stand',
    'roles' => array(
      'Exhibitor' => 'Exhibitor',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_title_for_ordering_'.
  $permissions['view own field_title_for_ordering_'] = array(
    'name' => 'view own field_title_for_ordering_',
    'roles' => array(
      'Intern' => 'Intern',
      'Marketing exec' => 'Marketing exec',
      'Senior Marketing exec' => 'Senior Marketing exec',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
