<?php
/**
 * @file
 * shopthead.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function shopthead_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_shopthead_about'.
  $field_bases['field_shopthead_about'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_about',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<h3>
	What&#39;s this?
</h3>

<p>
	Upload a large photograph and add one or more labels to display products in an interactive advert style. For example, you can upload a photograph of a baby sitting on a rug - you can position a label over the rug which is indicated by a flower icon; when a visitor clicks the flower icon, a label is displayed with the name of the rug and a link to buy it.
</p>

<p>
	Working out where a label should be positioned is currently a bit fiddly (sorry about that);&nbsp;you will need to load the image into your favourite image editor and resize it to 2000 pixels wide. The horizontal coordinate is the number of pixels from the left edge of the image to the centre of your label; the vertical coordinate is the number of pixels from the <em><strong>top</strong></em> (not the bottom) of the image to the centre of your label. If there is enough call for it, we will develop a point-and-click way to work out label coordinates in a future software update.
</p>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_shopthead_image'.
  $field_bases['field_shopthead_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_image',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_shopthead_label_subtitle'.
  $field_bases['field_shopthead_label_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_label_subtitle',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_shopthead_label_title'.
  $field_bases['field_shopthead_label_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_label_title',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_shopthead_marker'.
  $field_bases['field_shopthead_marker'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_shopthead_marker_height'.
  $field_bases['field_shopthead_marker_height'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_height',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_shopthead_marker_height_lg'.
  $field_bases['field_shopthead_marker_height_lg'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_height_lg',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_shopthead_marker_hover'.
  $field_bases['field_shopthead_marker_hover'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_hover',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_shopthead_marker_labelpos'.
  $field_bases['field_shopthead_marker_labelpos'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_labelpos',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'right' => 'Label to the right of the marker image',
        'below' => 'Label below the marker image',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_shopthead_marker_width'.
  $field_bases['field_shopthead_marker_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_width',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_shopthead_marker_width_lg'.
  $field_bases['field_shopthead_marker_width_lg'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_width_lg',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_shopthead_marker_x'.
  $field_bases['field_shopthead_marker_x'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_x',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_shopthead_marker_y'.
  $field_bases['field_shopthead_marker_y'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_marker_y',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_shopthead_markers'.
  $field_bases['field_shopthead_markers'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shopthead_markers',
    'field_permissions' => array(
      'type' => 0,
    ),
    'global_block_settings' => 1,
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
