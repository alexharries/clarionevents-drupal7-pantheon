<?php
/**
 * @file
 * babytotoddler_owl_carousel_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function babytotoddler_owl_carousel_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_default';
  $strongarm->value = '2000';
  $export['owlcarousel_auto_play_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '10000';
  $export['owlcarousel_auto_play_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '2000';
  $export['owlcarousel_auto_play_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '2000';
  $export['owlcarousel_auto_play_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '10000';
  $export['owlcarousel_auto_play_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_default';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 'owl-carousel-speakers';
  $export['owlcarousel_base_class_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_exhibitor-carousel_items';
  $strongarm->value = '6';
  $export['owlcarousel_items_desktop_owlcarousel_settings_exhibitor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_exhibitor-carousel_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_exhibitor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_homepage-highlights_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_homepage-highlights_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_homepage-highlights_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_homepage-highlights_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_speaker-carousel_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_speaker-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_speaker-carousel_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_speaker-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = array(
    0 => '1199',
    1 => 6,
  );
  $export['owlcarousel_items_desktop_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_sponsor-carousel_items';
  $strongarm->value = '11';
  $export['owlcarousel_items_desktop_owlcarousel_settings_sponsor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_sponsor-carousel_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_sponsor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_exhibitor-carousel_items';
  $strongarm->value = '6';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_exhibitor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_exhibitor-carousel_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_exhibitor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_homepage-highlights_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_homepage-highlights_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_homepage-highlights_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_homepage-highlights_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_speaker-carousel_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_speaker-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_speaker-carousel_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_speaker-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = array(
    0 => '979',
    1 => 6,
  );
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_sponsor-carousel_items';
  $strongarm->value = '9';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_sponsor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_sponsor-carousel_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_sponsor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_exhibitor-carousel_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_mobile_owlcarousel_settings_exhibitor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_exhibitor-carousel_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_exhibitor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_homepage-highlights_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_homepage-highlights_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_homepage-highlights_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_homepage-highlights_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_speaker-carousel_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_speaker-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_speaker-carousel_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_speaker-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = array(
    0 => '479',
    1 => 4,
  );
  $export['owlcarousel_items_mobile_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_sponsor-carousel_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_mobile_owlcarousel_settings_sponsor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_sponsor-carousel_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_sponsor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_default';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '6';
  $export['owlcarousel_items_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '4';
  $export['owlcarousel_items_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '4';
  $export['owlcarousel_items_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '11';
  $export['owlcarousel_items_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_exhibitor-carousel_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_tablet_owlcarousel_settings_exhibitor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_exhibitor-carousel_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_exhibitor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_homepage-highlights_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_homepage-highlights_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_homepage-highlights_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_homepage-highlights_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_speaker-carousel_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_speaker-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_speaker-carousel_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_speaker-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = array(
    0 => '768',
    1 => 4,
  );
  $export['owlcarousel_items_tablet_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_sponsor-carousel_items';
  $strongarm->value = '7';
  $export['owlcarousel_items_tablet_owlcarousel_settings_sponsor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_sponsor-carousel_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_sponsor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_exhibitor-carousel_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_exhibitor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_exhibitor-carousel_width';
  $strongarm->value = '580';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_exhibitor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_homepage-highlights_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_homepage-highlights_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_homepage-highlights_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_homepage-highlights_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_speaker-carousel_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_speaker-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_speaker-carousel_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_speaker-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = array(
    0 => '0',
    1 => 0,
  );
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_sponsor-carousel_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_sponsor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_sponsor-carousel_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_sponsor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_default';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_load_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_load_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_default';
  $strongarm->value = array(
    0 => '&laquo; previous',
    1 => 'next &raquo;',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = array(
    0 => '&laquo; previous',
    1 => 'next &raquo;',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_homepage-highlights';
  $strongarm->value = array(
    0 => '&laquo; previous',
    1 => 'next &raquo;',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_speaker-carousel';
  $strongarm->value = array(
    0 => '&laquo; previous',
    1 => 'next &raquo;',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = array(
    0 => '&laquo; previous',
    1 => 'next &raquo;',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_sponsor-carousel_items';
  $strongarm->value = 'next';
  $export['owlcarousel_navigation_text_owlcarousel_settings_sponsor-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_sponsor-carousel_width';
  $strongarm->value = 'prev';
  $export['owlcarousel_navigation_text_owlcarousel_settings_sponsor-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_default';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '1000';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '1000';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_default';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_default';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '2000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '2000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_default';
  $strongarm->value = 'owlcarousel_default';
  $export['owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 'exhibitor-carousel';
  $export['owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_homepage-highlights';
  $strongarm->value = 'homepage highlights';
  $export['owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_speaker-carousel';
  $strongarm->value = 'Speaker carousel';
  $export['owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 'owlcarousel_settings_sponsor-carousel';
  $export['owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '1000';
  $export['owlcarousel_slide_speed_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '1000';
  $export['owlcarousel_slide_speed_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_default';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_homepage-highlights';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_speaker-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_exhibitor-carousel';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_exhibitor-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_homepage-highlights';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_homepage-highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_speaker-carousel';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_speaker-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_sponsor-carousel';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_sponsor-carousel'] = $strongarm;

  return $export;
}
