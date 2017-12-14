<?php
/**
 * @file
 * seomanager.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function seomanager_default_roles_permissions() {
  $roles = array();

  // Exported role: seomanager
  $roles['seomanager'] = array(
    'name' => 'seomanager',
    'weight' => 10,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access workbench' => TRUE,
      'administer google analytics' => TRUE,
      'administer meta tags' => TRUE,
      'administer nodes' => TRUE,
      'administer pathauto' => TRUE,
      'administer robots.txt' => TRUE,
      'administer site verify' => TRUE,
      'administer site verify uploads' => TRUE,
      'administer url aliases' => TRUE,
      'administer xmlsitemap' => TRUE,
      'bypass node access' => TRUE,
      'bypass workbench moderation' => TRUE,
      'create url aliases' => TRUE,
      'edit meta tags' => TRUE,
      'moderate content from draft to needs_review' => TRUE,
      'moderate content from needs_review to draft' => TRUE,
      'moderate content from needs_review to published' => TRUE,
      'revert revisions' => TRUE,
      'use workbench_moderation my drafts tab' => TRUE,
      'use workbench_moderation needs review tab' => TRUE,
      'view all unpublished content' => TRUE,
      'view moderation history' => TRUE,
      'view moderation messages' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
    ),
  );

  return $roles;
}
