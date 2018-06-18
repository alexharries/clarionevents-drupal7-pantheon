<?php
/**
 * @file
 * clarion_events_pardot_integration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function clarion_events_pardot_integration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pardot_a_id';
  $strongarm->value = '508231';
  $export['pardot_a_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pardot_c_id';
  $strongarm->value = '9960';
  $export['pardot_c_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pardot_pages';
  $strongarm->value = 'admin
admin/*
batch
node/add*
node/*/*
user/*/*';
  $export['pardot_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pardot_roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    30037204 => 0,
    11 => 0,
    25241038 => 0,
    16 => 0,
    200153887 => 0,
    21 => 0,
    231001329 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    46 => 0,
    56 => 0,
  );
  $export['pardot_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pardot_validate_url';
  $strongarm->value = 0;
  $export['pardot_validate_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pardot_visibility_pages';
  $strongarm->value = '0';
  $export['pardot_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pardot_visibility_roles';
  $strongarm->value = '0';
  $export['pardot_visibility_roles'] = $strongarm;

  return $export;
}
