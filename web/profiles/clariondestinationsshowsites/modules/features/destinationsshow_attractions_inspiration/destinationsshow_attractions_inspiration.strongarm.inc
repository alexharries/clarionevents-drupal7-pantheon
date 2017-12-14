<?php
/**
 * @file
 * destinationsshow_attractions_inspiration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function destinationsshow_attractions_inspiration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_default_page';
  $strongarm->value = 0;
  $export['flag_attractions_default_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_on_homepage_default_celebrity_speakers';
  $strongarm->value = 0;
  $export['flag_attractions_on_homepage_default_celebrity_speakers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_on_homepage_default_exhibitor';
  $strongarm->value = 0;
  $export['flag_attractions_on_homepage_default_exhibitor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_on_homepage_default_gallery_item';
  $strongarm->value = 0;
  $export['flag_attractions_on_homepage_default_gallery_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_on_homepage_default_page';
  $strongarm->value = 0;
  $export['flag_attractions_on_homepage_default_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_on_homepage_default_page_feature';
  $strongarm->value = 0;
  $export['flag_attractions_on_homepage_default_page_feature'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_on_homepage_default_partners';
  $strongarm->value = 0;
  $export['flag_attractions_on_homepage_default_partners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_attractions_on_homepage_default_slideshow';
  $strongarm->value = 0;
  $export['flag_attractions_on_homepage_default_slideshow'] = $strongarm;

  return $export;
}
