<?php
/**
 * @file
 * destinationsshow_holiday_of_the_week.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function destinationsshow_holiday_of_the_week_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_holiday_of_the_week_default_page';
  $strongarm->value = 0;
  $export['flag_holiday_of_the_week_default_page'] = $strongarm;

  return $export;
}
