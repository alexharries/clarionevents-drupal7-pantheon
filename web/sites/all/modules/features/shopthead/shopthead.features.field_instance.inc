<?php
/**
 * @file
 * shopthead.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function shopthead_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_shopthead_markers-field_shopthead_label_subtitle'.
  $field_instances['field_collection_item-field_shopthead_markers-field_shopthead_label_subtitle'] = array(
    'bundle' => 'field_shopthead_markers',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter the title text to be shown in the label. This text will be shown as a paragraph (a &lt;p&gt; tag). You can use some HTML tags such as &lt;a&gt;.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_label_subtitle',
    'label' => 'Label subtitle',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'editor' => 0,
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'plain_text' => 0,
          'unfiltered' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
            ),
            'editor' => array(
              'weight' => -8,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'unfiltered' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_shopthead_markers-field_shopthead_label_title'.
  $field_instances['field_collection_item-field_shopthead_markers-field_shopthead_label_title'] = array(
    'bundle' => 'field_shopthead_markers',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter the title text to be shown in the label. This text will be shown as a level 3 heading (an "H3"). You can use some HTML tags such as &lt;a&gt;.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_label_title',
    'label' => 'Label title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'editor' => 0,
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'plain_text' => 0,
          'unfiltered' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => -6,
            ),
            'editor' => array(
              'weight' => -8,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'unfiltered' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_shopthead_markers-field_shopthead_marker_labelpos'.
  $field_instances['field_collection_item-field_shopthead_markers-field_shopthead_marker_labelpos'] = array(
    'bundle' => 'field_shopthead_markers',
    'default_value' => array(
      0 => array(
        'value' => 'below',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_labelpos',
    'label' => 'Label position',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_shopthead_markers-field_shopthead_marker_x'.
  $field_instances['field_collection_item-field_shopthead_markers-field_shopthead_marker_x'] = array(
    'bundle' => 'field_shopthead_markers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How many pixels from the left edge of the Shop The Ad image should the centre of the label be on a 2000 pixel-width image? (This position will be recalculated relative to the image\'s width)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_x',
    'label' => 'Horizontal position',
    'required' => 1,
    'settings' => array(
      'max' => 2000,
      'min' => 0,
      'prefix' => '',
      'suffix' => 'pixel|pixels',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_shopthead_markers-field_shopthead_marker_y'.
  $field_instances['field_collection_item-field_shopthead_markers-field_shopthead_marker_y'] = array(
    'bundle' => 'field_shopthead_markers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How many pixels from the <strong>top</strong> edge of the Shop The Ad image should the centre of the label be, when the image is 2000 pixels <strong>wide</strong>. (This position will be recalculated relative to the image\'s height)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_y',
    'label' => 'Vertical position',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => 'pixel|pixels',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-shopthead-field_shopthead_about'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_about'] = array(
    'bundle' => 'shopthead',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'markup_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_about',
    'label' => 'About this paragraph',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-shopthead-field_shopthead_image'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_image'] = array(
    'bundle' => 'shopthead',
    'deleted' => 0,
    'description' => 'Upload the photograph to be used for the Shop The Ad paragraph. This image <strong>must</strong> be at least 2000 pixels wide.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_image',
    'label' => 'Shop The Ad Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'paragraphs/shopthead/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '2000x1',
      'title_field' => 0,
      'user_register_form' => FALSE,
      'wysiwyg_insert' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          's3' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-shopthead-field_shopthead_marker'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_marker'] = array(
    'bundle' => 'shopthead',
    'deleted' => 0,
    'description' => 'You can upload a custom marker image (the image which you click on or tap to show a label). This image should be at least 50 pixels wide.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker',
    'label' => 'Custom marker image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'paragraphs/shopthead/markers',
      'file_extensions' => 'png jpg jpeg gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
      'wysiwyg_insert' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          's3' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-shopthead-field_shopthead_marker_height'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_marker_height'] = array(
    'bundle' => 'shopthead',
    'default_value' => array(
      0 => array(
        'value' => 30,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you upload a custom marker which is a different width or height than the default marker, please enter how high it should be shown on mobile devices.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_height',
    'label' => 'Marker image height (mobile)',
    'required' => 1,
    'settings' => array(
      'max' => 200,
      'min' => 1,
      'prefix' => '',
      'suffix' => 'pixel|pixels',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-shopthead-field_shopthead_marker_height_lg'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_marker_height_lg'] = array(
    'bundle' => 'shopthead',
    'default_value' => array(
      0 => array(
        'value' => 60,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you upload a custom marker which is a different width or height than the default marker, please enter how high it should be shown on larger screens such as tablets and desktop computers.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_height_lg',
    'label' => 'Marker image height (tablet/desktop)',
    'required' => 1,
    'settings' => array(
      'max' => 200,
      'min' => 1,
      'prefix' => '',
      'suffix' => 'pixel|pixels',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-shopthead-field_shopthead_marker_hover'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_marker_hover'] = array(
    'bundle' => 'shopthead',
    'deleted' => 0,
    'description' => 'This is the image shown when you hover over a marker. This should be the same size as the "custom marker image"; if not, you may find that the marker image appears to jump around when you hover over it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_hover',
    'label' => 'Custom marker hover image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'paragraphs/shopthead/markers/hover',
      'file_extensions' => 'png jpg jpeg gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
      'wysiwyg_insert' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          's3' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-shopthead-field_shopthead_marker_width'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_marker_width'] = array(
    'bundle' => 'shopthead',
    'default_value' => array(
      0 => array(
        'value' => 30,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you upload a custom marker which is a different width or height than the default marker, please enter how wide it should be shown on mobile devices.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_width',
    'label' => 'Marker image width (mobile)',
    'required' => 1,
    'settings' => array(
      'max' => 200,
      'min' => 1,
      'prefix' => '',
      'suffix' => 'pixel|pixels',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-shopthead-field_shopthead_marker_width_lg'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_marker_width_lg'] = array(
    'bundle' => 'shopthead',
    'default_value' => array(
      0 => array(
        'value' => 60,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you upload a custom marker which is a different width or height than the default marker, please enter how wide it should be shown on larger screens such as tablets and desktop computers.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_marker_width_lg',
    'label' => 'Marker image width (tablet/desktop)',
    'required' => 1,
    'settings' => array(
      'max' => 200,
      'min' => 1,
      'prefix' => '',
      'suffix' => 'pixel|pixels',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-shopthead-field_shopthead_markers'.
  $field_instances['paragraphs_item-shopthead-field_shopthead_markers'] = array(
    'bundle' => 'shopthead',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add one or more markers. These will be shown on the main Shop The Ad image as an icon which, when clicked, displays a label.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_shopthead_markers',
    'label' => 'Markers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About this paragraph');
  t('Add one or more markers. These will be shown on the main Shop The Ad image as an icon which, when clicked, displays a label.');
  t('Custom marker hover image');
  t('Custom marker image');
  t('Enter the title text to be shown in the label. This text will be shown as a level 3 heading (an "H3"). You can use some HTML tags such as &lt;a&gt;.');
  t('Enter the title text to be shown in the label. This text will be shown as a paragraph (a &lt;p&gt; tag). You can use some HTML tags such as &lt;a&gt;.');
  t('Horizontal position');
  t('How many pixels from the <strong>top</strong> edge of the Shop The Ad image should the centre of the label be, when the image is 2000 pixels <strong>wide</strong>. (This position will be recalculated relative to the image\'s height)');
  t('How many pixels from the left edge of the Shop The Ad image should the centre of the label be on a 2000 pixel-width image? (This position will be recalculated relative to the image\'s width)');
  t('If you upload a custom marker which is a different width or height than the default marker, please enter how high it should be shown on larger screens such as tablets and desktop computers.');
  t('If you upload a custom marker which is a different width or height than the default marker, please enter how high it should be shown on mobile devices.');
  t('If you upload a custom marker which is a different width or height than the default marker, please enter how wide it should be shown on larger screens such as tablets and desktop computers.');
  t('If you upload a custom marker which is a different width or height than the default marker, please enter how wide it should be shown on mobile devices.');
  t('Label position');
  t('Label subtitle');
  t('Label title');
  t('Marker image height (mobile)');
  t('Marker image height (tablet/desktop)');
  t('Marker image width (mobile)');
  t('Marker image width (tablet/desktop)');
  t('Markers');
  t('Shop The Ad Image');
  t('This is the image shown when you hover over a marker. This should be the same size as the "custom marker image"; if not, you may find that the marker image appears to jump around when you hover over it.');
  t('Upload the photograph to be used for the Shop The Ad paragraph. This image <strong>must</strong> be at least 2000 pixels wide.');
  t('Vertical position');
  t('You can upload a custom marker image (the image which you click on or tap to show a label). This image should be at least 50 pixels wide.');

  return $field_instances;
}
