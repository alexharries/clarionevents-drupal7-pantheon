<?php

/**
 * @file
 * babytotoddler_sponsors.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function babytotoddler_sponsors_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logo_link|node|sponsor|sponsor_landscape';
  $field_group->group_name = 'group_logo_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sponsor';
  $field_group->mode = 'sponsor_landscape';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logo Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_logo',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Logo Link',
      'instance_settings' => array(
        'link_to' => 'field_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-logo-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_logo_link|node|sponsor|sponsor_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logo_link|node|sponsor|teaser';
  $field_group->group_name = 'group_logo_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sponsor';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logo link',
    'weight' => '0',
    'children' => array(
      0 => 'field_logo',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Logo link',
      'instance_settings' => array(
        'link_to' => 'field_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => '_blank',
        'classes' => 'group-logo-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_logo_link|node|sponsor|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Logo Link');
  t('Logo link');

  return $field_groups;
}
