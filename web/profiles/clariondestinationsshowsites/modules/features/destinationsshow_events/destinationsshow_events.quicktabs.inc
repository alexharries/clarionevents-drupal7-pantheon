<?php
/**
 * @file
 * destinationsshow_events.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function destinationsshow_events_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'events_timeslot';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Stanfords Travel Writers Festival timetable 2017';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '250/20170202',
      'use_title' => 0,
      'title' => 'Thursday 2 February',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '250/20170203',
      'use_title' => 0,
      'title' => 'Friday 3 February',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '250/20170204',
      'use_title' => 0,
      'title' => 'Saturday 4 February',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '250/20170205',
      'use_title' => 0,
      'title' => 'Sunday 5 February',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Friday 3 February');
  t('Saturday 4 February');
  t('Stanfords Travel Writers Festival timetable 2017');
  t('Sunday 5 February');
  t('Thursday 2 February');

  $export['events_timeslot'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'experience_the_africa_timetable';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Experience the Africa timetable 2017';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4366/20170202',
      'use_title' => 0,
      'title' => 'Thursday 2nd Feb',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4366/20170203',
      'use_title' => 0,
      'title' => 'Friday 3rd Feb',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4366/20170204',
      'use_title' => 0,
      'title' => 'Saturday 4th Feb',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4366/20170205',
      'use_title' => 0,
      'title' => 'Sunday 5th Feb',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Experience the Africa timetable 2017');
  t('Friday 3rd Feb');
  t('Saturday 4th Feb');
  t('Sunday 5th Feb');
  t('Thursday 2nd Feb');

  $export['experience_the_africa_timetable'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'experience_the_america_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Experience the America timetable 2017';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4376/20170202',
      'use_title' => 0,
      'title' => 'Thursday 2nd Feb',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4376/20170203',
      'use_title' => 0,
      'title' => 'Friday 3rd Feb',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4376/20170204',
      'use_title' => 0,
      'title' => 'Saturday 4th Feb',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4376/20170205',
      'use_title' => 0,
      'title' => 'Sunday 5th Feb',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Experience the America timetable 2017');
  t('Friday 3rd Feb');
  t('Saturday 4th Feb');
  t('Sunday 5th Feb');
  t('Thursday 2nd Feb');

  $export['experience_the_america_quicktab'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'experience_the_asia_timetable';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Experience the Asia timetable 2017';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4361/20170202',
      'use_title' => 0,
      'title' => 'Thursday 2nd Feb',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4361/20170203',
      'use_title' => 0,
      'title' => 'Friday 3rd Feb',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4361/20170204',
      'use_title' => 0,
      'title' => 'Saturday 4th Feb',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4361/20170205',
      'use_title' => 0,
      'title' => 'Sunday 5th Feb',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Experience the Asia timetable 2017');
  t('Friday 3rd Feb');
  t('Saturday 4th Feb');
  t('Sunday 5th Feb');
  t('Thursday 2nd Feb');

  $export['experience_the_asia_timetable'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'experience_the_europe_timetable';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Experience the Europe timetable 2017';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4371/20170202',
      'use_title' => 0,
      'title' => 'Thursday 2nd Feb',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4371/20170203',
      'use_title' => 0,
      'title' => 'Friday 3rd Feb',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4371/20170204',
      'use_title' => 0,
      'title' => 'Saturday 4th Feb',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'block_12',
      'args' => '4371/20170205',
      'use_title' => 0,
      'title' => 'Sunday 5th Feb',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Experience the Europe timetable 2017');
  t('Friday 3rd Feb');
  t('Saturday 4th Feb');
  t('Sunday 5th Feb');
  t('Thursday 2nd Feb');

  $export['experience_the_europe_timetable'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'meet_the_experts_theatre_one_tim';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Meet the Experts Theatre One Timetable';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'block_4',
      'args' => '',
      'use_title' => 0,
      'title' => 'Thursday',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'block_5',
      'args' => '',
      'use_title' => 0,
      'title' => 'Friday',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'block_6',
      'args' => '',
      'use_title' => 0,
      'title' => 'Saturday',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'block_8',
      'args' => '',
      'use_title' => 0,
      'title' => 'Sunday',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Friday');
  t('Meet the Experts Theatre One Timetable');
  t('Saturday');
  t('Sunday');
  t('Thursday');

  $export['meet_the_experts_theatre_one_tim'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'meet_the_experts_theatre_two_tim';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Meet the Experts Theatre Two Timetable';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Thursday 2 February',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'block_9',
      'args' => '',
      'title' => 'Friday 3 February',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'block_10',
      'args' => '',
      'title' => 'Saturday 4 February',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'block_11',
      'args' => '',
      'title' => 'Sunday 5 February',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Friday 3 February');
  t('Meet the Experts Theatre Two Timetable');
  t('Saturday 4 February');
  t('Sunday 5 February');
  t('Thursday 2 February');

  $export['meet_the_experts_theatre_two_tim'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'stanfords_travel_fest_2018';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Stanfords Travel Writers Festival timetable 2018';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Thursday',
      'use_title' => 0,
      'title' => 'Thursday',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Friday',
      'use_title' => 0,
      'title' => 'Friday',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Saturday',
      'use_title' => 0,
      'title' => 'Saturday',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Sunday',
      'use_title' => 0,
      'title' => 'Sunday',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Friday');
  t('Saturday');
  t('Stanfords Travel Writers Festival timetable 2018');
  t('Sunday');
  t('Thursday');

  $export['stanfords_travel_fest_2018'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'timetable_generic';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Timetable';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Thursday',
      'use_title' => 0,
      'title' => 'Thursday',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Friday',
      'use_title' => 0,
      'title' => 'Friday',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Saturday',
      'use_title' => 0,
      'title' => 'Saturday',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'events',
      'display' => 'events_by_show_day_taxonomy',
      'args' => '2018/Sunday',
      'use_title' => 0,
      'title' => 'Sunday',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Friday');
  t('Saturday');
  t('Sunday');
  t('Thursday');
  t('Timetable');

  $export['timetable_generic'] = $quicktabs;

  return $export;
}
