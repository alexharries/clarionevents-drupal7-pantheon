<?php
/**
 * @file
 * antiquessites_content_types_paragraphs_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antiquessites_content_types_paragraphs_panes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function antiquessites_content_types_paragraphs_panes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function antiquessites_content_types_paragraphs_panes_image_default_styles() {
  $styles = array();

  // Exported image style: block_hightlights_-_desktop.
  $styles['block_hightlights_-_desktop'] = array(
    'label' => 'Block Hightlights - Desktop',
    'effects' => array(
      176 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 563,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: exhibitor_banners.
  $styles['exhibitor_banners'] = array(
    'label' => 'Exhibitor Banners',
    'effects' => array(
      76 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 205,
          'height' => 205,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: exhibitor_logo.
  $styles['exhibitor_logo'] = array(
    'label' => 'Exhibitor Logo - Desktop and Tablet',
    'effects' => array(
      41 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 235,
          'height' => 235,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'top_left',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: exhibitor_logo_-_mobile.
  $styles['exhibitor_logo_-_mobile'] = array(
    'label' => 'Exhibitor Logo - Mobile',
    'effects' => array(
      81 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'top_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: exhibitor_logo_style.
  $styles['exhibitor_logo_style'] = array(
    'label' => 'Exhibitor logo style',
    'effects' => array(
      171 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_image_style.
  $styles['gallery_image_style'] = array(
    'label' => 'gallery Image Style',
    'effects' => array(
      6 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 1024,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_list_thumbs.
  $styles['gallery_list_thumbs'] = array(
    'label' => 'Gallery list Thumbs',
    'effects' => array(
      166 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 193,
          'height' => 133,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: homepage_gallery_slider.
  $styles['homepage_gallery_slider'] = array(
    'label' => 'homepage gallery slider',
    'effects' => array(
      216 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 205,
          'height' => 205,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_partner_logo.
  $styles['homepage_partner_logo'] = array(
    'label' => 'Homepage Partner Logo',
    'effects' => array(
      46 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#FFFFFF',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: homepage_slider.
  $styles['homepage_slider'] = array(
    'label' => 'Homepage Slider - Desktop',
    'effects' => array(
      66 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 390,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_slider_-_mobile.
  $styles['homepage_slider_-_mobile'] = array(
    'label' => 'Homepage Slider - Mobile',
    'effects' => array(
      91 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 238,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_slider_-_tablet.
  $styles['homepage_slider_-_tablet'] = array(
    'label' => 'Homepage Slider - Tablet',
    'effects' => array(
      226 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 768,
          'height' => 380,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: languages.
  $styles['languages'] = array(
    'label' => 'Languages',
    'effects' => array(
      56 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 20,
          'height' => 20,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#575757',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mobile-480.
  $styles['mobile-480'] = array(
    'label' => 'mobile-480',
    'effects' => array(
      96 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_imagemodule_picture_empty_srcset_1x.
  $styles['responsive_imagemodule_picture_empty_srcset_1x'] = array(
    'label' => 'responsive_imagemodule_picture_empty_srcset_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 930,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sale_pieces_gallery.
  $styles['sale_pieces_gallery'] = array(
    'label' => 'Sale Pieces Gallery',
    'effects' => array(
      21 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 245,
          'height' => 245,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      221 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'weight' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function antiquessites_content_types_paragraphs_panes_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Used for static pages that are not updated very often.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'exhibitor_profile_page' => array(
      'name' => t('Exhibitor Profile Page'),
      'base' => 'node_content',
      'description' => t('Content type that saves data about the exhibitor. The data will be displayed on exhibitor listing page and exhibitor detail page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('Gallery Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'languages' => array(
      'name' => t('Languages'),
      'base' => 'node_content',
      'description' => t('Languages items '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partners_pages' => array(
      'name' => t('Partners Pages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'press_image' => array(
      'name' => t('Press image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'press_release' => array(
      'name' => t('Press file'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slider' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => t('Create a slider with images and text'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'social_media' => array(
      'name' => t('Social media'),
      'base' => 'node_content',
      'description' => t('Content type for social media management'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'visiting_page' => array(
      'name' => t('Visiting Page'),
      'base' => 'node_content',
      'description' => t('Creates a page that will sit under your Visiting section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function antiquessites_content_types_paragraphs_panes_paragraphs_info() {
  $items = array(
    'attachment' => array(
      'name' => 'Attachment',
      'bundle' => 'attachment',
      'locked' => '1',
    ),
    'block_highlights' => array(
      'name' => 'Block Highlights',
      'bundle' => 'block_highlights',
      'locked' => '1',
    ),
    'button' => array(
      'name' => 'Button',
      'bundle' => 'button',
      'locked' => '1',
    ),
    'call_to_action' => array(
      'name' => 'Call to Action',
      'bundle' => 'call_to_action',
      'locked' => '1',
    ),
    'image_gallery' => array(
      'name' => 'Image Gallery',
      'bundle' => 'image_gallery',
      'locked' => '1',
    ),
    'media_image_video_' => array(
      'name' => 'Media (image,video)',
      'bundle' => 'media_image_video_',
      'locked' => '1',
    ),
    'one_column' => array(
      'name' => 'One Column',
      'bundle' => 'one_column',
      'locked' => '1',
    ),
    'programme' => array(
      'name' => 'Programme',
      'bundle' => 'programme',
      'locked' => '1',
    ),
    'slideshow' => array(
      'name' => 'Slideshow',
      'bundle' => 'slideshow',
      'locked' => '1',
    ),
    'table' => array(
      'name' => 'Table',
      'bundle' => 'table',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
    'three_column' => array(
      'name' => 'Three Column',
      'bundle' => 'three_column',
      'locked' => '1',
    ),
    'two_column_3_9' => array(
      'name' => 'Two Column 3/9',
      'bundle' => 'two_column_3_9',
      'locked' => '1',
    ),
    'two_column_6_6' => array(
      'name' => 'Two Column 6/6',
      'bundle' => 'two_column_6_6',
      'locked' => '1',
    ),
    'two_column_9_3' => array(
      'name' => 'Two Column 9/3',
      'bundle' => 'two_column_9_3',
      'locked' => '1',
    ),
  );
  return $items;
}
