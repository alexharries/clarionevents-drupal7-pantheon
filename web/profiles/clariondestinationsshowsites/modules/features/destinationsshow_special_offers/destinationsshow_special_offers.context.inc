<?php
/**
 * @file
 * destinationsshow_special_offers.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function destinationsshow_special_offers_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'special_offer_all_pages';
  $context->description = 'Special Offer block on all pages';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-special_offers-block_1' => array(
          'module' => 'views',
          'delta' => 'special_offers-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Special Offer block on all pages');
  $export['special_offer_all_pages'] = $context;

  return $export;
}
