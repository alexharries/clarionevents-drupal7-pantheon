<?php
/**
 * @file
 * babytotoddler_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function babytotoddler_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|paragraphs_item|teaser_content|default';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'teaser_content';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'container',
    'weight' => '1',
    'children' => array(
      0 => 'field_teaser_content_body',
      1 => 'field_teaser_content_thumbnails',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container field-group-div mobile-toggle',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|paragraphs_item|teaser_content|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|paragraphs_item|teaser_content|two_columns';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'teaser_content';
  $field_group->mode = 'two_columns';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'container',
    'weight' => '1',
    'children' => array(
      0 => 'field_teaser_content_body',
      1 => 'field_teaser_content_thumbnails',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container field-group-div mobile-toggle',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|paragraphs_item|teaser_content|two_columns'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|paragraphs_item|call_to_action|default';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call_to_action';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_image',
      1 => 'field_paragraph_title',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'field_paragraph_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|paragraphs_item|call_to_action|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|paragraphs_item|call_to_action|landing_page_grid';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call_to_action';
  $field_group->mode = 'landing_page_grid';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_image',
      1 => 'field_paragraph_title',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'field_paragraph_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|paragraphs_item|call_to_action|landing_page_grid'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|paragraphs_item|call_to_action|newsletter_block';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'call_to_action';
  $field_group->mode = 'newsletter_block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_image',
      1 => 'field_paragraph_title',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Container Link',
      'instance_settings' => array(
        'link_to' => 'field_paragraph_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|paragraphs_item|call_to_action|newsletter_block'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|paragraphs_item|homepage_leaders|default';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'homepage_leaders';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_homepage_leader_image',
      1 => 'field_homepage_leader_title',
      2 => 'field_homepage_leaderdescription',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'field_homepage_leader_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|paragraphs_item|homepage_leaders|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parapgraph_main_link|paragraphs_item|slideshow|full';
  $field_group->group_name = 'group_parapgraph_main_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'slideshow';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_slideshow_image',
      1 => 'field_slideshow_description',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Main Link',
      'instance_settings' => array(
        'link_to' => 'field_slideshow_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => '_blank',
        'classes' => 'group-parapgraph-main-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_parapgraph_main_link|paragraphs_item|slideshow|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Container Link');
  t('Link');
  t('Main Link');
  t('container');

  return $field_groups;
}
