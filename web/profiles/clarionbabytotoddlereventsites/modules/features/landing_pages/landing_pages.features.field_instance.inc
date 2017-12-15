<?php
/**
 * @file
 * landing_pages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landing_pages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing_page-body'.
  $field_instances['node-landing_page-body'] = array(
    'bundle' => 'landing_page',
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
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'grid' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'highlights_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
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
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_contact_paragraphs'.
  $field_instances['node-landing_page-field_contact_paragraphs'] = array(
    'bundle' => 'landing_page',
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
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'masonry_display',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'highlights_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'three_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_contact_paragraphs',
    'label' => 'Contact paragraphs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'address' => -1,
        'back_to_top_link' => -1,
        'call_to_action' => -1,
        'child_pages_listing' => -1,
        'company_contact_info' => -1,
        'customisable_content_listing' => -1,
        'e_mail_address' => -1,
        'file_downloads' => -1,
        'google_map' => -1,
        'heading_and_jump_link' => -1,
        'homepage_leaders' => -1,
        'horizontal_line' => -1,
        'image_carousel' => -1,
        'image_masonry' => -1,
        'images' => -1,
        'images_generic' => -1,
        'key_dates' => -1,
        'large_quote_intro_text' => -1,
        'links_list' => -1,
        'node_reference' => -1,
        'package_item' => -1,
        'page_promo_banner' => -1,
        'promo_with_image' => -1,
        'side_by_side_image_and_text' => -1,
        'slideshow' => -1,
        'soundcloud_player' => -1,
        'teaser_content' => -1,
        'telephone_number' => -1,
        'text' => -1,
        'ticket_' => -1,
        'time_schedule' => -1,
        'two_column_image_left' => -1,
        'two_column_image_right' => -1,
        'two_three_or_four_column_wysiwyg' => -1,
        'views_paragraph' => -1,
        'wysiwyg' => 'wysiwyg',
        'youtube_video' => -1,
      ),
      'bundle_weights' => array(
        'address' => 15,
        'back_to_top_link' => 16,
        'call_to_action' => 2,
        'child_pages_listing' => 18,
        'company_contact_info' => 19,
        'customisable_content_listing' => 20,
        'e_mail_address' => 21,
        'file_downloads' => 22,
        'google_map' => 23,
        'heading_and_jump_link' => 24,
        'homepage_leaders' => 3,
        'horizontal_line' => 26,
        'image_carousel' => 29,
        'image_masonry' => 4,
        'images' => 27,
        'images_generic' => 28,
        'key_dates' => 31,
        'large_quote_intro_text' => 32,
        'links_list' => 33,
        'node_reference' => 34,
        'package_item' => 5,
        'page_promo_banner' => 36,
        'promo_with_image' => 37,
        'side_by_side_image_and_text' => 38,
        'slideshow' => 6,
        'soundcloud_player' => 40,
        'teaser_content' => 7,
        'telephone_number' => 42,
        'text' => 8,
        'ticket_' => 9,
        'time_schedule' => 10,
        'two_column_image_left' => 11,
        'two_column_image_right' => 12,
        'two_three_or_four_column_wysiwyg' => 48,
        'views_paragraph' => 49,
        'wysiwyg' => 50,
        'youtube_video' => 13,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Contact',
      'title_multiple' => 'Contacts',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_content_block_first'.
  $field_instances['node-landing_page-field_content_block_first'] = array(
    'bundle' => 'landing_page',
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
        'weight' => 16,
      ),
      'grid' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'highlights_teaser' => array(
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
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'two_columns',
        ),
        'type' => 'paragraphs_view',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_content_block_first',
    'label' => 'Content Block First',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => -1,
        'homepage_leaders' => -1,
        'image_masonry' => -1,
        'images_generic' => -1,
        'package_item' => -1,
        'slideshow' => -1,
        'teaser_content' => 'teaser_content',
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
        'image_masonry' => 4,
        'images_generic' => 17,
        'package_item' => 5,
        'slideshow' => 6,
        'teaser_content' => 7,
        'text' => 8,
        'ticket_' => 9,
        'time_schedule' => 10,
        'two_column_image_left' => 11,
        'two_column_image_right' => 12,
        'youtube_video' => 13,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Content Block',
      'title_multiple' => 'Content Blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_content_block_second'.
  $field_instances['node-landing_page-field_content_block_second'] = array(
    'bundle' => 'landing_page',
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
        'weight' => 17,
      ),
      'grid' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'highlights_teaser' => array(
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
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'two_columns',
        ),
        'type' => 'paragraphs_view',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_content_block_second',
    'label' => 'Content Block Second',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => -1,
        'homepage_leaders' => -1,
        'image_masonry' => -1,
        'package_item' => -1,
        'slideshow' => -1,
        'teaser_content' => 'teaser_content',
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
        'image_masonry' => 4,
        'package_item' => 5,
        'slideshow' => 6,
        'teaser_content' => 7,
        'text' => 8,
        'ticket_' => 9,
        'time_schedule' => 10,
        'two_column_image_left' => 11,
        'two_column_image_right' => 12,
        'youtube_video' => 13,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Content Block',
      'title_multiple' => 'Content Blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_content_block_third'.
  $field_instances['node-landing_page-field_content_block_third'] = array(
    'bundle' => 'landing_page',
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
        'weight' => 18,
      ),
      'grid' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'highlights_teaser' => array(
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
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'two_columns' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_content_block_third',
    'label' => 'Content Block Third',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => -1,
        'homepage_leaders' => -1,
        'image_masonry' => -1,
        'package_item' => -1,
        'slideshow' => -1,
        'teaser_content' => 'teaser_content',
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
        'image_masonry' => 4,
        'package_item' => 5,
        'slideshow' => 6,
        'teaser_content' => 7,
        'text' => 8,
        'ticket_' => 9,
        'time_schedule' => 10,
        'two_column_image_left' => 11,
        'two_column_image_right' => 12,
        'youtube_video' => 13,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Content Block',
      'title_multiple' => 'Content Blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_grid_item'.
  $field_instances['node-landing_page-field_grid_item'] = array(
    'bundle' => 'landing_page',
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
        'weight' => 19,
      ),
      'grid' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'landing_page_grid',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'highlights_teaser' => array(
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
      'three_columns' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'two_columns' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_grid_item',
    'label' => 'Grid Item',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => -1,
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
        'image_masonry' => 4,
        'images_generic' => 17,
        'package_item' => 5,
        'slideshow' => 6,
        'teaser_content' => 7,
        'text' => 8,
        'ticket_' => 9,
        'time_schedule' => 10,
        'two_column_image_left' => 11,
        'two_column_image_right' => 12,
        'youtube_video' => 13,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Grid Item',
      'title_multiple' => 'Grid Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_highlights_image'.
  $field_instances['node-landing_page-field_highlights_image'] = array(
    'bundle' => 'landing_page',
    'deleted' => 0,
    'description' => 'Image for highlights in the Homepage',
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
        'weight' => 4,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'highlights_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => 'content',
          'image_style' => 'highlights_thumb',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'three_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_highlights_image',
    'label' => 'Highlights image',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_leaders'.
  $field_instances['node-landing_page-field_leaders'] = array(
    'bundle' => 'landing_page',
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
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'grid' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'highlights_teaser' => array(
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
      'three_columns' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'two_columns' => array(
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
        'call_to_action' => 2,
        'homepage_leaders' => 3,
        'image_masonry' => 4,
        'package_item' => 5,
        'slideshow' => 6,
        'teaser_content' => 7,
        'text' => 8,
        'ticket_' => 9,
        'time_schedule' => 10,
        'two_column_image_left' => 11,
        'two_column_image_right' => 12,
        'youtube_video' => 13,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_leaders_title'.
  $field_instances['node-landing_page-field_leaders_title'] = array(
    'bundle' => 'landing_page',
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
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'grid' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'highlights_teaser' => array(
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
      'three_columns' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'two_columns' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_leaders_title',
    'label' => 'Leaders Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
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

  // Exported field_instance: 'node-landing_page-field_time_schedule'.
  $field_instances['node-landing_page-field_time_schedule'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '*Use it for Opening times or any similar behaviours',
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
        'weight' => 2,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'highlights_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'three_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_time_schedule',
    'label' => 'Time Schedule',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'call_to_action' => -1,
        'homepage_leaders' => -1,
        'image_masonry' => -1,
        'package_item' => -1,
        'slideshow' => -1,
        'teaser_content' => -1,
        'text' => -1,
        'ticket_' => -1,
        'time_schedule' => 'time_schedule',
        'two_column_image_left' => -1,
        'two_column_image_right' => -1,
        'youtube_video' => -1,
      ),
      'bundle_weights' => array(
        'call_to_action' => 2,
        'homepage_leaders' => 3,
        'image_masonry' => 4,
        'package_item' => 5,
        'slideshow' => 6,
        'teaser_content' => 7,
        'text' => 8,
        'ticket_' => 9,
        'time_schedule' => 10,
        'two_column_image_left' => 11,
        'two_column_image_right' => 12,
        'youtube_video' => 13,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Schedule',
      'title_multiple' => 'Schedules',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('*Use it for Opening times or any similar behaviours');
  t('Body');
  t('Contact paragraphs');
  t('Content Block First');
  t('Content Block Second');
  t('Content Block Third');
  t('Grid Item');
  t('Highlights image');
  t('Image for highlights in the Homepage');
  t('Leaders');
  t('Leaders Title');
  t('Time Schedule');

  return $field_instances;
}