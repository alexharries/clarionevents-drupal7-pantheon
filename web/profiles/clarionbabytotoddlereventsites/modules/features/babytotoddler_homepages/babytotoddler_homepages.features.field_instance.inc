<?php
/**
 * @file
 * babytotoddler_homepages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function babytotoddler_homepages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-homepage-body'.
  $field_instances['node-homepage-body'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'image_separator' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'newsletter_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'slideshow' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-homepage-field_blocks'.
  $field_instances['node-homepage-field_blocks'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bottom content blocks images for advertising and newsletters',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'image_separator' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'newsletter_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'slideshow' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_blocks',
    'label' => 'Blocks',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => 'call_to_action',
        'homepage_leaders' => -1,
        'image_masonry' => -1,
        'package_item' => -1,
        'slideshow' => -1,
        'teaser_content' => -1,
        'text' => -1,
        'ticket_' => -1,
        'time_schedule' => -1,
        'two_column_image_left' => -1,
        'two_column_image_right' => -1,
        'youtube_video' => -1,
      ),
      'bundle_weights' => array(
        'call_to_action' => 13,
        'homepage_leaders' => 2,
        'image_masonry' => 3,
        'package_item' => 4,
        'slideshow' => 5,
        'teaser_content' => 6,
        'text' => 7,
        'ticket_' => 8,
        'time_schedule' => 23,
        'two_column_image_left' => 9,
        'two_column_image_right' => 10,
        'youtube_video' => 11,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Image block',
      'title_multiple' => 'Image blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-homepage-field_highlights'.
  $field_instances['node-homepage-field_highlights'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the content which should go in the Highlights area in the Homepage',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'image_separator' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'newsletter_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'slideshow' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_highlights',
    'label' => 'Highlights',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-homepage-field_image_bottom_separator'.
  $field_instances['node-homepage-field_image_bottom_separator'] = array(
    'bundle' => 'homepage',
    'deleted' => 0,
    'description' => 'Image to separate Featured Exhibitors from Sponsors in the Homepage',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'image_separator' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'conditions' => array(),
          'fallback_image_style' => '',
          'image_link' => '',
          'image_style' => '',
          'picture_mapping' => 'image_separator',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'newsletter_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'slideshow' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image_bottom_separator',
    'label' => 'Image Bottom Separator',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '50 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-homepage-field_leaders'.
  $field_instances['node-homepage-field_leaders'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Three content teasers that can link everywhere in and out the website.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'image_separator' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'newsletter_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'slideshow' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_leaders',
    'label' => 'Leaders',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => -1,
        'homepage_leaders' => 'homepage_leaders',
        'image_masonry' => -1,
        'package_item' => -1,
        'slideshow' => -1,
        'teaser_content' => -1,
        'text' => -1,
        'ticket_' => -1,
        'time_schedule' => -1,
        'two_column_image_left' => -1,
        'two_column_image_right' => -1,
        'youtube_video' => -1,
      ),
      'bundle_weights' => array(
        'call_to_action' => 11,
        'homepage_leaders' => 2,
        'image_masonry' => 13,
        'package_item' => 3,
        'slideshow' => 4,
        'teaser_content' => 16,
        'text' => 5,
        'ticket_' => 6,
        'time_schedule' => 19,
        'two_column_image_left' => 7,
        'two_column_image_right' => 8,
        'youtube_video' => 9,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Leader',
      'title_multiple' => 'Leaders',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-homepage-field_newsletter_block'.
  $field_instances['node-homepage-field_newsletter_block'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'image_separator' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter_block' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'newsletter_block',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'slideshow' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_newsletter_block',
    'label' => 'Newsletter block',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => 'call_to_action',
        'homepage_leaders' => -1,
        'image_masonry' => -1,
        'images_generic' => -1,
        'package_item' => -1,
        'slideshow' => -1,
        'teaser_content' => -1,
        'text' => -1,
        'ticket_' => -1,
        'time_schedule' => -1,
        'two_column_image_left' => -1,
        'two_column_image_right' => -1,
        'youtube_video' => -1,
      ),
      'bundle_weights' => array(
        'call_to_action' => 2,
        'homepage_leaders' => 3,
        'image_masonry' => 5,
        'images_generic' => 4,
        'package_item' => 6,
        'slideshow' => 7,
        'teaser_content' => 8,
        'text' => 9,
        'ticket_' => 10,
        'time_schedule' => 11,
        'two_column_image_left' => 12,
        'two_column_image_right' => 13,
        'youtube_video' => 14,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Newsletter block',
      'title_multiple' => 'Newsletter blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-homepage-field_slideshow'.
  $field_instances['node-homepage-field_slideshow'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'image_separator' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'newsletter_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'slideshow' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_slideshow',
    'label' => 'Slideshow',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'slideshow' => 'slideshow',
        'text' => -1,
        'two_column_image_left' => -1,
        'two_column_image_right' => -1,
        'youtube_video' => -1,
      ),
      'bundle_weights' => array(
        'slideshow' => 2,
        'text' => 3,
        'two_column_image_left' => 4,
        'two_column_image_right' => 5,
        'youtube_video' => 6,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Slide',
      'title_multiple' => 'Slides',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Body');
  t('Bottom content blocks images for advertising and newsletters');
  t('Highlights');
  t('Image Bottom Separator');
  t('Image to separate Featured Exhibitors from Sponsors in the Homepage');
  t('Leaders');
  t('Newsletter block');
  t('Select the content which should go in the Highlights area in the Homepage');
  t('Slideshow');
  t('Three content teasers that can link everywhere in and out the website.');

  return $field_instances;
}
