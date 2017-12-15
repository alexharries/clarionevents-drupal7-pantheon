<?php

/**
 * @file
 * Advanced Poll Helper Include.
 *
 * Helper functions for converting node and form data into a more readable
 * and compact format that can easily be passed to sub-functions and templates.
 */

/**
 * Returns an object with a predictable structure regardless of content type.
 *
 * It basically saves having to extract the data in any given function that
 * retrieves specific fields from a node.
 *
 * @param $node
 *   A node generated by any of the advanced poll modules.
 *
 * @return object
 *   An object with the following keys:
 *   - choices: An associative array containing:
 *     - choice_id: The unique hex id of the choice.
 *     - choice: The text for a given choice.
 *     - write_in: A boolean value indicating whether or not the choice was a
 *       write-in.
 *   - start_date: (int) Start date of the poll
 *   - end_date: (int) End date of the poll
 *   - mode: The mode used to store the vote: normal, cookie, unlimited
 *   - cookie_duration: (int) If mode is cookie, the number of minutes to delay
 *     votes.
 *   - state: Is the poll 'open' or 'close'
 *   - behavior: Approval or pool - determines how to treat multiple vote/user
 *     tally. When plugin is installed, voting will default to tabulating values
 *     returned from voting API.
 *   - max_choices: (int) How many choices a user can select per vote.
 *   - show_results: When to display results - aftervote, afterclose or never.
 *   - electoral: Boolean - voting restricted to users in an electoral list.
 *   - write_in: Boolean - all write-in voting.
 *   - block: Boolean - Poll can be displayed as a block.
 */
function advpoll_get_data($node) {
  $data = array();
  $options = array();
  $lang_default = $node->language;
  $lang = $GLOBALS['language']->language;

  if ($node->type == 'advpoll') {
    // Testing each field to make sure there is no translated version.
    if ($node->advpoll_options) {
      (isset($node->advpoll_options[$lang])) ? $options = $node->advpoll_options[$lang] : $options = $node->advpoll_options[LANGUAGE_NONE];
    }
    $field = field_info_field('advpoll_choice');
    if ($field['translatable']) {
      (isset($node->advpoll_choice[$lang])) ? $data['choices'] = $node->advpoll_choice[$lang] : $data['choices'] = $node->advpoll_choice[$lang_default];
    }
    else {
      (isset($node->advpoll_choice[$lang])) ? $data['choices'] = $node->advpoll_choice[$lang] : $data['choices'] = $node->advpoll_choice[LANGUAGE_NONE];
    }

    if ($node->advpoll_dates) {
      $data['start_date'] = (isset($node->advpoll_dates[$lang])) ? strtotime($node->advpoll_dates[$lang][0]['value'] . ' UTC') : strtotime($node->advpoll_dates[LANGUAGE_NONE][0]['value'] . ' UTC');
      $data['end_date'] = (isset($node->advpoll_dates[$lang])) ? strtotime($node->advpoll_dates[$lang][0]['value2'] . ' UTC') : strtotime($node->advpoll_dates[LANGUAGE_NONE][0]['value2'] . 'UTC');
    } else {
      $data['start_date'] = 0;
      $data['end_date'] = 0;
    }

    (isset($node->advpoll_mode[$lang])) ? $data['mode'] = $node->advpoll_mode[$lang][0]['value'] : $data['mode'] = $node->advpoll_mode[LANGUAGE_NONE][0]['value'];
    if (isset($node->advpoll_cookie_duration[$lang])) {
      $data['cookie_duration'] = $node->advpoll_cookie_duration[$lang][0]['value'];
    }
    elseif (isset($node->advpoll_cookie_duration[LANGUAGE_NONE][0]['value'])) {
      $data['cookie_duration'] = $node->advpoll_cookie_duration[LANGUAGE_NONE][0]['value'];
    }
    else {
      $data['cookie_duration'] = 0;
    }
    (isset($node->advpoll_closed[$lang])) ? $data['state'] = $node->advpoll_closed[$lang][0]['value'] : $data['state'] = $node->advpoll_closed[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_behavior[$lang])) ? $data['behavior'] = $node->advpoll_behavior[$lang][0]['value'] : $data['behavior'] = $node->advpoll_behavior[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_max_choices[$lang])) ? $data['max_choices'] = $node->advpoll_max_choices[$lang][0]['value'] : $data['max_choices'] = $node->advpoll_max_choices[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_results[$lang])) ? $data['show_results'] = $node->advpoll_results[$lang][0]['value'] : $data['show_results'] = $node->advpoll_results[LANGUAGE_NONE][0]['value'];
    $data['electoral'] = advpoll_has_data($options, 'electoral');
    $data['write_in'] = advpoll_has_data($options, 'writein');
    $data['block'] = advpoll_has_data($options, 'block');
  }

  return (object) $data;
}

/**
 * Convenience function to find value in a nested array.
 */
function advpoll_has_data($options, $term) {

  foreach ($options as $option) {
    if ($option['value'] == $term) {
      return TRUE;
    }
  }

  return FALSE;
}

/**
 * Returns an object with a predictable structure.
 *
 * Works regardless of content type form state.
 * This call returns the same data structure as the advpoll_get_data() call,
 * only using form_state data rather than node data.
 *
 * @param $form_state
 *   form_state returned from a node submission.
 *
 * @return object
 *   An object containing the following keys:
 *   - choices: An associative array containing:
 *     - choice_id: The unique hex id of the choice.
 *     - choice: The text for a given choice.
 *     - write_in: A boolean value indicating whether or not the choice was a
 *       write in.
 *   - start_date: (int) Start date of the poll.
 *   - end_date: (int) End date of the poll.
 *   - mode: The mode used to store the vote: normal, cookie, unlimited.
 *   - cookie_duration: (int) If mode is cookie, the number of minutes to delay
 *     votes.
 *   - state: Is the poll 'open' or 'close'
 *   - behavior: approval or pool - determines how to treat multiple vote/user
 *     tally. When plugin is installed, voting will default to tabulating
 *     values returned from voting API.
 *   - max_choices: (int) How many choices a user can select per vote.
 *   - show_results: When to display results - aftervote, afterclose or never.
 *   - electoral: (bool) Voting restricted to users in an electoral list.
 *   - write_in: (bool) All write-in voting.
 *   - block: (bool) Poll can be displayed as a block.
 */
function advpoll_get_form_data($form_state, $index = 0) {
  $data = array();
  $node = $form_state['build_info']['args'][$index];
  $lang = $GLOBALS['language']->language;
  $options = array();

  if ($node->type == 'advpoll') {
    if ($node->advpoll_options) {
      (isset($node->advpoll_options[$lang])) ? $options = $node->advpoll_options[$lang] : $options = $node->advpoll_options[LANGUAGE_NONE];
    }
    (isset($node->advpoll_choice[$lang])) ? $data['choices'] = $node->advpoll_choice[$lang] : $data['choices'] = $node->advpoll_choice[LANGUAGE_NONE];
    if ($node->advpoll_dates) {
      (isset($node->advpoll_dates[$lang])) ? $data['start_date'] = strtotime($node->advpoll_dates[$lang][0]['value']) : $data['start_date'] = strtotime($node->advpoll_dates[LANGUAGE_NONE][0]['value']);
      (isset($node->advpoll_dates[$lang])) ? $data['end_date'] = strtotime($node->advpoll_dates[$lang][0]['value2']) : $data['end_date'] = strtotime($node->advpoll_dates[LANGUAGE_NONE][0]['value2']);
    } else {
      $data['start_date'] = 0;
      $data['end_date'] = 0;
    }
    (isset($node->advpoll_mode[$lang])) ? $data['mode'] = $node->advpoll_mode[$lang][0]['value'] : $data['mode'] = $node->advpoll_mode[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_cookie_duration[$lang])) ? $data['cookie_duration'] = $node->advpoll_cookie_duration[$lang][0]['value'] : $data['cookie_duration'] = $node->advpoll_cookie_duration[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_closed[$lang])) ? $data['state'] = $node->advpoll_closed[$lang][0]['value'] : $data['state'] = $node->advpoll_closed[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_behavior[$lang])) ? $data['behavior'] = $node->advpoll_behavior[$lang][0]['value'] : $data['behavior'] = $node->advpoll_behavior[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_max_choices[$lang])) ? $data['max_choices'] = $node->advpoll_max_choices[$lang][0]['value'] : $data['max_choices'] = $node->advpoll_max_choices[LANGUAGE_NONE][0]['value'];
    (isset($node->advpoll_results[$lang])) ? $data['show_results'] = $node->advpoll_results[$lang][0]['value'] : $data['show_results'] = $node->advpoll_results[LANGUAGE_NONE][0]['value'];
    $data['electoral'] = advpoll_has_data($options, 'electoral');
    $data['write_in'] = advpoll_has_data($options, 'writein');
    $data['block'] = advpoll_has_data($options, 'block');
  }

  return (object) $data;
}