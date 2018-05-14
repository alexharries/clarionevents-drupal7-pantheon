<?php
/**
 * @file
 * antiquessites_content_types_paragraphs_panes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function antiquessites_content_types_paragraphs_panes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bootstrap_column_1|node|exhibitor_profile_page|default';
  $field_group->group_name = 'group_bootstrap_column_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bootstrap Column',
    'weight' => '0',
    'children' => array(
      0 => 'field_logo',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Bootstrap Column',
      'instance_settings' => array(
        'classes' => 'col-xs-12 col-sm-3 col-md-3 col-lg-3 contact-description',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_bootstrap_column_1|node|exhibitor_profile_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bootstrap_column_2|node|exhibitor_profile_page|default';
  $field_group->group_name = 'group_bootstrap_column_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bootstrap Column',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Bootstrap Column',
      'instance_settings' => array(
        'classes' => 'col-xs-12 col-sm-9 col-md-9  col-lg-9 contact-image',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_bootstrap_column_2|node|exhibitor_profile_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|exhibitor_profile_page|form';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_telephone',
      2 => 'field_email',
      3 => 'field_website',
      4 => 'field_mobile',
      5 => 'field_address',
      6 => 'field_fax',
      7 => 'group_social_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_details|node|exhibitor_profile_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_block|node|basic_page|form';
  $field_group->group_name = 'group_homepage_block';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured content on homepage',
    'weight' => '6',
    'children' => array(
      0 => 'field_promote_on_homepage',
      1 => 'field_small_caption',
      2 => 'field_large_caption',
      3 => 'field_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-block field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_homepage_block|node|basic_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|media_image_video_|default';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_image_video_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_media_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'figure',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image|paragraphs_item|media_image_video_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|exhibitor_profile_page|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor_profile_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_details';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '15',
    'children' => array(
      0 => 'field_twitter_url',
      1 => 'field_facebook_url',
      2 => 'field_instagram_url',
      3 => 'field_pinterest_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-media field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_social_media|node|exhibitor_profile_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bootstrap Column');
  t('Contact Details');
  t('Featured content on homepage');
  t('Image');
  t('Social Media');

  return $field_groups;
}
