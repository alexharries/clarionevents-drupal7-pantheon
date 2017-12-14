<?php
/**
 * @file
 * exhibitor_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function exhibitor_profiles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|exhibitor_profile|featured_exhibitor_teaser';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile';
  $field_group->mode = 'featured_exhibitor_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_stand',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container field-group-div col-xs-12 col-sm-10 col-sm-offset-1 col-md-8 col-md-offset-2 col-lg-6 col-lg-offset-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|node|exhibitor_profile|featured_exhibitor_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|exhibitor_profile|full';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '2',
    'children' => array(
      0 => 'field_website',
      1 => 'field_exhibitor_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|node|exhibitor_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|exhibitor_profile|highlights_teaser';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile';
  $field_group->mode = 'highlights_teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'container',
    'weight' => '1',
    'children' => array(
      0 => 'field_logo',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'exhibitor-carousel-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|node|exhibitor_profile|highlights_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|exhibitor_profile|teaser';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'container',
    'weight' => '0',
    'children' => array(
      0 => 'field_stand',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container field-group-div col-xs-12 col-sm-10 col-sm-offset-1 col-md-8 col-md-offset-2 col-lg-6 col-lg-offset-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|node|exhibitor_profile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|taxonomy_term|categories|default';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'categories';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_logo',
      1 => 'title',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => 'exhibitors/all/[term:name]',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|taxonomy_term|categories|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|exhibitor_profile|highlights_teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile';
  $field_group->mode = 'highlights_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'outer wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_container',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'outer wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper field-group-div col-xs-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper|node|exhibitor_profile|highlights_teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Container');
  t('Link');
  t('container');
  t('outer wrapper');

  return $field_groups;
}
