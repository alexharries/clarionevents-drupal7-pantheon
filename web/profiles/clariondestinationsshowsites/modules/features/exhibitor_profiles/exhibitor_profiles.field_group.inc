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
  $field_group->identifier = 'group_additonal_information|node|exhibitor|form';
  $field_group->group_name = 'group_additonal_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Exhibitor information',
    'weight' => '3',
    'children' => array(
      0 => 'field_category',
      1 => 'field_enhanced',
      2 => 'field_new',
      3 => 'field_exhibitor_isdistributor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additonal-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_additonal_information|node|exhibitor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|exhibitor|form';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '5',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_telephone',
      2 => 'field_website',
      3 => 'field_e_mail_address',
      4 => 'field_fax',
      5 => 'field_street_address',
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
  $field_groups['group_contact_details|node|exhibitor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|exhibitor|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_telephone',
      2 => 'field_fax',
      3 => 'field_email',
      4 => 'field_street_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_contact_information|node|exhibitor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|exhibitor|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibitor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibitor details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_logo',
      2 => 'field_website',
      3 => 'field_basic',
      4 => 'field_stand',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Exhibitor details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_details|node|exhibitor|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Exhibitor information');
  t('Contact Information');
  t('Contact details');
  t('Exhibitor details');

  return $field_groups;
}
