<?php
/**
 * @file
 * shopthead.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function shopthead_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shopthead_marker|paragraphs_item|shopthead|form';
  $field_group->group_name = 'group_shopthead_marker';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'shopthead';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Marker Icon',
    'weight' => '2',
    'children' => array(
      0 => 'field_shopthead_marker',
      1 => 'field_shopthead_marker_hover',
      2 => 'field_shopthead_marker_width',
      3 => 'field_shopthead_marker_height',
      4 => 'field_shopthead_marker_width_lg',
      5 => 'field_shopthead_marker_height_lg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-shopthead-marker field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_shopthead_marker|paragraphs_item|shopthead|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marker Icon');

  return $field_groups;
}
