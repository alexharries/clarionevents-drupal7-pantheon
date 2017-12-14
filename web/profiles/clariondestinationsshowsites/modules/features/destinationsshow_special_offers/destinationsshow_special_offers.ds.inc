<?php
/**
 * @file
 * destinationsshow_special_offers.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function destinationsshow_special_offers_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitor_profile_special_offers';
  $ds_field->label = 'Exhibitor Profile - Special Offers';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|exhibitor_content-block_3',
    'block_render' => '3',
  );
  $export['exhibitor_profile_special_offers'] = $ds_field;

  return $export;
}
