<?php
/**
 * @file
 * page_content_type.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function page_content_type_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Basic Page Image Left';
  $picture_mapping->machine_name = 'basic_page_image_left';
  $picture_mapping->breakpoint_group = 'bootstrap';
  $picture_mapping->mapping = array(
    'breakpoints.theme.bootstrap.screen-xs-max' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'basic_page_image_left_extra_small',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-sm-min' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-sm-max' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-md-min' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-md-max' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-lg-min' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'basic_page_image_left',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['basic_page_image_left'] = $picture_mapping;

  return $export;
}
