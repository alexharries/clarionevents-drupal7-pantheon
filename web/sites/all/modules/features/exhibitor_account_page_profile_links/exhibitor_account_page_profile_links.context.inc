<?php
/**
 * @file
 * exhibitor_account_page_profile_links.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function exhibitor_account_page_profile_links_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'current_user_account_page';
  $context->description = 'This context is active when the current user views their own account page (e.g. user/123).';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2fc9768bded891d8864b0d0f79f7b5ff' => array(
          'module' => 'views',
          'delta' => '2fc9768bded891d8864b0d0f79f7b5ff',
          'region' => 'content',
          'weight' => '-58',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is active when the current user views their own account page (e.g. user/123).');
  $export['current_user_account_page'] = $context;

  return $export;
}
