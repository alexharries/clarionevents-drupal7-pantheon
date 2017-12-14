<?php
/**
 * @file
 * antiquessites_content_types_paragraphs_panes.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function antiquessites_content_types_paragraphs_panes_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|basic_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'basic_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_paragraphs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|basic_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|basic_page|event_programme';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'basic_page';
  $ds_fieldsetting->view_mode = 'event_programme';
  $ds_fieldsetting->settings = array(
    'event_programme' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'highlight_tours' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:12:"attachment_1";s:14:"override_title";i:1;s:19:"override_title_text";s:21:"Daily Highlight Tours";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:15:"event_programme";}',
        'load_terms' => 0,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|basic_page|event_programme'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|basic_page|exhibitor_downloads_centre';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'basic_page';
  $ds_fieldsetting->view_mode = 'exhibitor_downloads_centre';
  $ds_fieldsetting->settings = array(
    'exhibitor_fair_images' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'exhibitor_logos_and_banners' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|basic_page|exhibitor_downloads_centre'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|basic_page|partner_page_vm';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'basic_page';
  $ds_fieldsetting->view_mode = 'partner_page_vm';
  $ds_fieldsetting->settings = array(
    'airline_alliance' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:12:{s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:4:"path";s:0:"";s:9:"arguments";a:1:{s:3:"tid";s:16:"Airline Alliance";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_2";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'associated_partners' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:9:"arguments";a:1:{s:3:"tid";s:10:"Associated";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:1;s:19:"override_title_text";s:19:"Associated Partners";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_1";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'charity_partner' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:12:{s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:4:"path";s:0:"";s:9:"arguments";a:1:{s:3:"tid";s:15:"Charity Partner";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:1;s:19:"override_title_text";s:15:"Charity Partner";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_2";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'concierge_partner' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:12:{s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:4:"path";s:0:"";s:9:"arguments";a:1:{s:3:"tid";s:17:"Concierge Partner";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:1;s:19:"override_title_text";s:17:"Concierge Partner";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_2";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'event_partners' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:9:"arguments";a:1:{s:3:"tid";s:14:"Event Partners";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:1;s:19:"override_title_text";s:14:"Event Partners";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_1";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'hotel_partners' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:12:{s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:4:"path";s:0:"";s:9:"arguments";a:1:{s:3:"tid";s:14:"Hotel Partners";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_2";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'interiors_partners' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:12:{s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:4:"path";s:0:"";s:9:"arguments";a:1:{s:3:"tid";s:18:"Interiors Partners";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:1;s:19:"override_title_text";s:18:"Interiors Partners";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_2";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'media_partners' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:9:"arguments";a:1:{s:3:"tid";s:14:"Media Partners";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:1;s:19:"override_title_text";s:14:"Media Partners";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_1";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'partners' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:9:"arguments";a:1:{s:3:"tid";s:8:"Partners";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_1";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'social_partners' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:12:{s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:4:"path";s:0:"";s:9:"arguments";a:1:{s:3:"tid";s:15:"Social Partners";}s:15:"fields_override";a:4:{s:18:"field_partner_type";i:0;s:5:"title";i:0;s:10:"field_logo";i:0;s:4:"body";i:1;}s:14:"override_title";i:1;s:19:"override_title_text";s:15:"Social Partners";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"partners-panel_pane_2";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|basic_page|partner_page_vm'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|basic_page|press_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'basic_page';
  $ds_fieldsetting->view_mode = 'press_page';
  $ds_fieldsetting->settings = array(
    'download_logos_and_fair_images' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'press_enquiries' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'press_releases' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|basic_page|press_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_start_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Time',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'event-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'event-field',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_speaker' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Speaker(s)',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'event-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-speakers',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-location',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => 'event-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_start_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Time',
          'lb-el' => 'div',
          'lb-cl' => 'event-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'event-field',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_speaker' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Speakers(s)',
          'lb-el' => 'div',
          'lb-cl' => 'event-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-speakers',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'event-location',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'exhibitor_profile_gallery_items' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'sofa_exhibitor' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_no_string',
            'configuration' => array(
              'target' => 'field_categories',
              'string' => 'SOFA LONDON',
            ),
          ),
        ),
      ),
    ),
    'field_stand' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'contact-container',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container stand-number',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_contact_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_telephone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_website' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container exhibitor-categories',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contact-fields',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_mobile' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_pdf' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contact-fields',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile_page|entity_reference_link';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile_page';
  $ds_fieldsetting->view_mode = 'entity_reference_link';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_field',
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|exhibitor_profile_page|entity_reference_link'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile_page|exhibitor_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile_page';
  $ds_fieldsetting->view_mode = 'exhibitor_list';
  $ds_fieldsetting->settings = array(
    'linkback' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile_page|exhibitor_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibitor_profile_page|exhibitor_profile';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibitor_profile_page';
  $ds_fieldsetting->view_mode = 'exhibitor_profile';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_contact_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_telephone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_website' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_mobile' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_twitter_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_facebook_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_instagram_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_pinterest_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|exhibitor_profile_page|exhibitor_profile'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|image_gallery|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'image_gallery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_exhibitor' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'a',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'a',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|image_gallery|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|image_gallery|entity_reference_link';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'image_gallery';
  $ds_fieldsetting->view_mode = 'entity_reference_link';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_exhibitor' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|image_gallery|entity_reference_link'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|image_gallery|featured_gallery';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'image_gallery';
  $ds_fieldsetting->view_mode = 'featured_gallery';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Full Details',
        'wrapper' => 'button',
        'class' => 'btn btn-primary',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_exhibitor' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|image_gallery|featured_gallery'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|image_gallery|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'image_gallery';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'back_to_node_edit_gallery' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_on_pages',
            'configuration' => array(
              'visibility' => '0',
              'pages' => 'node/*/draft*',
            ),
          ),
        ),
      ),
    ),
    'gallery_item_list_by_category' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:1;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_3";s:7:"context";a:1:{i:0;s:42:"argument_entity_id:node_1.field-categories";}s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:23:"exhibitor_s_sale_pieces";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'gallery-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_size' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_exhibitor' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|image_gallery|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|image_gallery|gallery_display';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'image_gallery';
  $ds_fieldsetting->view_mode = 'gallery_display';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'gallery-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_size' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'contact-fields',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_exhibitor' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contact-container exhibitor-categories',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|image_gallery|gallery_display'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partners_pages|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partners_pages';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|partners_pages|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partners_pages|partner_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partners_pages';
  $ds_fieldsetting->view_mode = 'partner_page';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|partners_pages|partner_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|block_highlights|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'block_highlights';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_block_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_block_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|block_highlights|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|exhibitor_category|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'exhibitor_category';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'gallery_item_list_by_category' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:1:{i:0;s:38:"argument_entity_id:taxonomy_term_1.tid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:23:"exhibitor_s_sale_pieces";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'term_gallery_entity' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"1";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_2";s:7:"context";a:1:{i:0;s:38:"argument_entity_id:taxonomy_term_1.tid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:7:"gallery";}',
        'load_terms' => 1,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['taxonomy_term|exhibitor_category|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function antiquessites_content_types_paragraphs_panes_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'airline_alliance';
  $ds_field->label = 'Airline Alliance';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['airline_alliance'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'associated_partners';
  $ds_field->label = 'Associated Partners';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['associated_partners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'back_to_node_edit_gallery';
  $ds_field->label = 'Back to node edit gallery';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[node:edit-url]">Back to edit</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['back_to_node_edit_gallery'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'charity_partner';
  $ds_field->label = 'Charity Partner';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['charity_partner'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'concierge_partner';
  $ds_field->label = 'Concierge Partner';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['concierge_partner'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'download_logos_and_fair_images';
  $ds_field->label = 'Download Logos and Fair Images';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|41',
    'block_render' => '1',
  );
  $export['download_logos_and_fair_images'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'download_sale_pieces';
  $ds_field->label = 'Download Sale Pieces';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'ds_views' => 'ds_views',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|36',
    'block_render' => '1',
  );
  $export['download_sale_pieces'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'event_partners';
  $ds_field->label = 'Event Partners';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['event_partners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'event_programme';
  $ds_field->label = 'Event Programme';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|event_programme-block_1',
    'block_render' => '3',
  );
  $export['event_programme'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitor_fair_images';
  $ds_field->label = 'Exhibitor Fair Images';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|bf2915d596a3c7f2a9b171d4b3e4910a',
    'block_render' => '1',
  );
  $export['exhibitor_fair_images'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitor_logos_and_banners';
  $ds_field->label = 'Exhibitor Logos and Banners';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|3199fa5c7b7d9ce5bf72f8e2bdfd0370',
    'block_render' => '1',
  );
  $export['exhibitor_logos_and_banners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitor_menu';
  $ds_field->label = 'Exhibitor menu';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'menu|menu-create-content',
    'block_render' => '1',
  );
  $export['exhibitor_menu'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitor_profile_edit';
  $ds_field->label = 'Exhibitor profile edit';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|gallery_items_list-block_1',
    'block_render' => '3',
  );
  $export['exhibitor_profile_edit'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitor_profile_gallery_items';
  $ds_field->label = 'Exhibitor Profile - Gallery Items';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|exhibitor_s_sale_pieces-block',
    'block_render' => '1',
  );
  $export['exhibitor_profile_gallery_items'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitor_profile_social_media_l';
  $ds_field->label = 'Exhibitor Profile - Social Media Links';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['exhibitor_profile_social_media_l'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'gallery_item_list_by_category';
  $ds_field->label = 'Gallery Item List By Category';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['gallery_item_list_by_category'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'gallery_item_list_by_item';
  $ds_field->label = 'Gallery Item List By Item';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['gallery_item_list_by_item'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'gallery_items';
  $ds_field->label = 'gallery items';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|gallery_items_list-block',
    'block_render' => '3',
  );
  $export['gallery_items'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'highlight_tours';
  $ds_field->label = 'Highlight Tours';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['highlight_tours'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'hotel_partners';
  $ds_field->label = 'Hotel Partners';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['hotel_partners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'interiors_partners';
  $ds_field->label = 'Interiors Partners';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['interiors_partners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'link';
  $ds_field->label = 'Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:url:absolute]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'linkback';
  $ds_field->label = 'Linkback';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2>[node:title]Stand number [node:field_stand]<a href="[node:url:absolute]">></a></h2>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['linkback'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'masquerade_block';
  $ds_field->label = 'Masquerade';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'masquerade|masquerade',
    'block_render' => '1',
  );
  $export['masquerade_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'media_partners';
  $ds_field->label = 'Media Partners';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['media_partners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'partners';
  $ds_field->label = 'Partners';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['partners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'press_account';
  $ds_field->label = 'Press Account';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|31',
    'block_render' => '1',
  );
  $export['press_account'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'press_enquiries';
  $ds_field->label = 'Press Enquiries';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|26',
    'block_render' => '1',
  );
  $export['press_enquiries'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'press_log_out';
  $ds_field->label = 'Press Log Out';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|21',
    'block_render' => '1',
  );
  $export['press_log_out'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'press_login';
  $ds_field->label = 'Press Login';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'user|login',
    'block_render' => '2',
  );
  $export['press_login'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'press_releases';
  $ds_field->label = 'Press Releases';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|press_releases-block',
    'block_render' => '1',
  );
  $export['press_releases'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'social_partners';
  $ds_field->label = 'Social Partners';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['social_partners'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sofa_exhibitor';
  $ds_field->label = 'Sofa exhibitor';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="label-inline">Exhibiting within</div>

<div class="label-inline"><img alt="" src="/sites/antiques_summer/files/files/sofalogo.png" style="height: 38px; width: 250px;" /></div>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['sofa_exhibitor'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'term_gallery_entity';
  $ds_field->label = 'Term Gallery Entity';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['term_gallery_entity'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function antiquessites_content_types_paragraphs_panes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_paragraphs',
        1 => 'field_featured_highlights',
      ),
    ),
    'fields' => array(
      'field_paragraphs' => 'central',
      'field_featured_highlights' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|basic_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|event_programme';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'event_programme';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_paragraphs',
        1 => 'highlight_tours',
        2 => 'event_programme',
      ),
    ),
    'fields' => array(
      'field_paragraphs' => 'central',
      'highlight_tours' => 'central',
      'event_programme' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|basic_page|event_programme'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|exhibitor_downloads_centre';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'exhibitor_downloads_centre';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_paragraphs',
        1 => 'exhibitor_logos_and_banners',
        2 => 'exhibitor_fair_images',
      ),
    ),
    'fields' => array(
      'field_paragraphs' => 'central',
      'exhibitor_logos_and_banners' => 'central',
      'exhibitor_fair_images' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|basic_page|exhibitor_downloads_centre'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_paragraphs',
        2 => 'field_featured_highlights',
        3 => 'xmlsitemap',
        4 => 'path',
        5 => 'metatags',
        6 => 'group_homepage_block',
        7 => 'field_promote_on_homepage',
        8 => 'field_small_caption',
        10 => 'field_large_caption',
        11 => 'field_link',
      ),
      'hidden' => array(
        9 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_paragraphs' => 'central',
      'field_featured_highlights' => 'central',
      'xmlsitemap' => 'central',
      'path' => 'central',
      'metatags' => 'central',
      'group_homepage_block' => 'central',
      'field_promote_on_homepage' => 'central',
      'field_small_caption' => 'central',
      '_add_existing_field' => 'hidden',
      'field_large_caption' => 'central',
      'field_link' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|basic_page|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|full_width';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'full_width';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs',
      ),
    ),
    'fields' => array(
      'field_paragraphs' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|basic_page|full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|partner_page_vm';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'partner_page_vm';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'associated_partners',
        1 => 'field_paragraphs',
      ),
      'left' => array(
        2 => 'concierge_partner',
        3 => 'hotel_partners',
      ),
      'right' => array(
        4 => 'interiors_partners',
        5 => 'charity_partner',
        6 => 'social_partners',
        7 => 'airline_alliance',
      ),
      'bottom' => array(
        8 => 'event_partners',
        9 => 'media_partners',
        10 => 'partners',
      ),
    ),
    'fields' => array(
      'associated_partners' => 'top',
      'field_paragraphs' => 'top',
      'concierge_partner' => 'left',
      'hotel_partners' => 'left',
      'interiors_partners' => 'right',
      'charity_partner' => 'right',
      'social_partners' => 'right',
      'airline_alliance' => 'right',
      'event_partners' => 'bottom',
      'media_partners' => 'bottom',
      'partners' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|basic_page|partner_page_vm'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|press_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'press_page';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_paragraphs',
      ),
      'central' => array(
        1 => 'press_enquiries',
        2 => 'press_releases',
      ),
      'bottomleft' => array(
        3 => 'download_logos_and_fair_images',
      ),
    ),
    'fields' => array(
      'field_paragraphs' => 'top',
      'press_enquiries' => 'central',
      'press_releases' => 'central',
      'download_logos_and_fair_images' => 'bottomleft',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'bottomleft' => array(
        'col-md-3' => 'col-md-3',
      ),
      'bottomright' => array(
        'col-md-3' => 'col-md-3',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|basic_page|press_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page|two_column';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page';
  $ds_layout->view_mode = 'two_column';
  $ds_layout->layout = 'panels-twocol';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        0 => 'field_paragraphs',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_paragraphs' => 'right',
    ),
  );
  $export['node|basic_page|two_column'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_location',
        1 => 'field_start_time',
        2 => 'field_evebts_paragraphs',
        3 => 'field_speaker',
        4 => 'field_paragraph_column_2',
        5 => 'webform',
      ),
    ),
    'fields' => array(
      'field_location' => 'central',
      'field_start_time' => 'central',
      'field_evebts_paragraphs' => 'central',
      'field_speaker' => 'central',
      'field_paragraph_column_2' => 'central',
      'webform' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_3_9';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_talk_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_location',
        3 => 'field_start_time',
        4 => 'body',
        5 => 'field_speaker',
      ),
    ),
    'fields' => array(
      'field_talk_image' => 'left',
      'title' => 'right',
      'field_location' => 'right',
      'field_start_time' => 'right',
      'body' => 'right',
      'field_speaker' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|event|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'group_bootstrap_column_1',
        1 => 'group_bootstrap_column_2',
        8 => 'field_logo',
        9 => 'body',
        11 => 'sofa_exhibitor',
      ),
      'left' => array(
        2 => 'field_contact_name',
        3 => 'field_telephone',
        4 => 'field_mobile',
        5 => 'field_email',
        6 => 'field_stand',
      ),
      'right' => array(
        7 => 'field_website',
        10 => 'field_address',
        12 => 'exhibitor_social_media_links_entity_view_1',
        13 => 'field_categories',
        14 => 'field_pdf',
      ),
      'bottom' => array(
        15 => 'exhibitor_profile_gallery_items',
      ),
    ),
    'fields' => array(
      'group_bootstrap_column_1' => 'top',
      'group_bootstrap_column_2' => 'top',
      'field_contact_name' => 'left',
      'field_telephone' => 'left',
      'field_mobile' => 'left',
      'field_email' => 'left',
      'field_stand' => 'left',
      'field_website' => 'right',
      'field_logo' => 'top',
      'body' => 'top',
      'field_address' => 'right',
      'sofa_exhibitor' => 'top',
      'exhibitor_social_media_links_entity_view_1' => 'right',
      'field_categories' => 'right',
      'field_pdf' => 'right',
      'exhibitor_profile_gallery_items' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|exhibitor_profile_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile_page|entity_reference_link';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile_page';
  $ds_layout->view_mode = 'entity_reference_link';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|exhibitor_profile_page|entity_reference_link'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile_page|exhibitor_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile_page';
  $ds_layout->view_mode = 'exhibitor_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'linkback',
      ),
    ),
    'fields' => array(
      'linkback' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|exhibitor_profile_page|exhibitor_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibitor_profile_page|exhibitor_profile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibitor_profile_page';
  $ds_layout->view_mode = 'exhibitor_profile';
  $ds_layout->layout = 'bootstrap_4_4_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_logo',
      ),
      'central' => array(
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_contact_name',
        3 => 'field_telephone',
        4 => 'field_mobile',
        5 => 'field_email',
        6 => 'field_website',
        7 => 'field_address',
        8 => 'field_facebook_url',
        9 => 'field_twitter_url',
        10 => 'field_instagram_url',
        11 => 'field_pinterest_url',
        12 => 'field_categories',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'body' => 'central',
      'field_contact_name' => 'right',
      'field_telephone' => 'right',
      'field_mobile' => 'right',
      'field_email' => 'right',
      'field_website' => 'right',
      'field_address' => 'right',
      'field_facebook_url' => 'right',
      'field_twitter_url' => 'right',
      'field_instagram_url' => 'right',
      'field_pinterest_url' => 'right',
      'field_categories' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'central' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|exhibitor_profile_page|exhibitor_profile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|image_gallery|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'image_gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_7_5';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_s_',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
        3 => 'field_size',
        4 => 'field_exhibitor',
        5 => 'field_categories',
      ),
    ),
    'fields' => array(
      'field_image_s_' => 'left',
      'title' => 'right',
      'body' => 'right',
      'field_size' => 'right',
      'field_exhibitor' => 'right',
      'field_categories' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|image_gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|image_gallery|entity_reference_link';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'image_gallery';
  $ds_layout->view_mode = 'entity_reference_link';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_exhibitor',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_exhibitor' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|image_gallery|entity_reference_link'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|image_gallery|featured_gallery';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'image_gallery';
  $ds_layout->view_mode = 'featured_gallery';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_s_',
      ),
      'right' => array(
        1 => 'field_exhibitor',
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_image_s_' => 'left',
      'field_exhibitor' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|image_gallery|featured_gallery'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|image_gallery|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'image_gallery';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_s_',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
        3 => 'field_size',
        4 => 'field_exhibitor',
        5 => 'field_categories',
        6 => 'back_to_node_edit_gallery',
      ),
      'bottom' => array(
        7 => 'gallery_item_list_by_category',
      ),
    ),
    'fields' => array(
      'field_image_s_' => 'left',
      'title' => 'right',
      'body' => 'right',
      'field_size' => 'right',
      'field_exhibitor' => 'right',
      'field_categories' => 'right',
      'back_to_node_edit_gallery' => 'right',
      'gallery_item_list_by_category' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '2',
    'page_option_title' => '%node:field-categories',
  );
  $export['node|image_gallery|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|image_gallery|gallery_display';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'image_gallery';
  $ds_layout->view_mode = 'gallery_display';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_s_',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
        3 => 'field_size',
        4 => 'field_exhibitor',
        5 => 'field_categories',
      ),
    ),
    'fields' => array(
      'field_image_s_' => 'left',
      'title' => 'right',
      'body' => 'right',
      'field_size' => 'right',
      'field_exhibitor' => 'right',
      'field_categories' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|image_gallery|gallery_display'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|image_gallery|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'image_gallery';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|image_gallery|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partners_pages|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partners_pages';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_logo',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_logo' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|partners_pages|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partners_pages|partner_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partners_pages';
  $ds_layout->view_mode = 'partner_page';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_logo',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_logo' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|partners_pages|partner_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|visiting_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'visiting_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'body',
        1 => 'field_paragraph_column_2',
        2 => 'field_paragraphs',
      ),
    ),
    'fields' => array(
      'body' => 'central',
      'field_paragraph_column_2' => 'central',
      'field_paragraphs' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|visiting_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|block_highlights|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'block_highlights';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_block_image',
        1 => 'field_block_title',
        2 => 'field_block_body',
        3 => 'field_block_button',
      ),
    ),
    'fields' => array(
      'field_block_image' => 'central',
      'field_block_title' => 'central',
      'field_block_body' => 'central',
      'field_block_button' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|block_highlights|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|one_column|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'one_column';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_para_content_left',
      ),
    ),
    'fields' => array(
      'field_para_content_left' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|one_column|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|programme|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'programme';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_start_time',
      ),
      'middle' => array(
        1 => 'field_programme_title',
      ),
      'right' => array(
        2 => 'field_description',
      ),
    ),
    'fields' => array(
      'field_start_time' => 'left',
      'field_programme_title' => 'middle',
      'field_description' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|programme|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|slideshow|slider';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'slideshow';
  $ds_layout->view_mode = 'slider';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_slider_image',
        1 => 'field_caption',
        2 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_slider_image' => 'ds_content',
      'field_caption' => 'ds_content',
      'field_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|slideshow|slider'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_body_text',
      ),
    ),
    'fields' => array(
      'field_body_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|three_column|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'three_column';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_4_4_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_para_content_left',
      ),
      'central' => array(
        1 => 'field_para_content_right',
      ),
      'right' => array(
        2 => 'field_para_content_middle',
      ),
    ),
    'fields' => array(
      'field_para_content_left' => 'left',
      'field_para_content_right' => 'central',
      'field_para_content_middle' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'col-xs-12' => 'col-xs-12',
        'col-md-4' => 'col-md-4',
      ),
      'central' => array(
        'col-xs-12' => 'col-xs-12',
        'col-md-4' => 'col-md-4',
        'col-md-push-4' => 'col-md-push-4',
      ),
      'right' => array(
        'col-xs-12' => 'col-xs-12',
        'col-md-4' => 'col-md-4',
        'col-md-pull-4' => 'col-md-pull-4',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'central' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|three_column|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_column_3_9|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_column_3_9';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_3_9';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_para_content_left',
      ),
      'right' => array(
        1 => 'field_para_content_right',
      ),
    ),
    'fields' => array(
      'field_para_content_left' => 'left',
      'field_para_content_right' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|two_column_3_9|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_column_6_6|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_column_6_6';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_para_content_left',
      ),
      'right' => array(
        1 => 'field_para_content_right',
      ),
    ),
    'fields' => array(
      'field_para_content_left' => 'left',
      'field_para_content_right' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|two_column_6_6|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_column_9_3|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_column_9_3';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_para_content_left',
      ),
      'right' => array(
        1 => 'field_para_content_right',
      ),
    ),
    'fields' => array(
      'field_para_content_left' => 'left',
      'field_para_content_right' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|two_column_9_3|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|exhibitor_category|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'exhibitor_category';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'term_gallery_entity',
        1 => 'gallery_item_list_by_category',
      ),
    ),
    'fields' => array(
      'term_gallery_entity' => 'central',
      'gallery_item_list_by_category' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|exhibitor_category|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function antiquessites_content_types_paragraphs_panes_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'entity_reference_link';
  $ds_view_mode->label = 'entity reference link';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['entity_reference_link'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'event_programme';
  $ds_view_mode->label = 'Event Programme';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['event_programme'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'exhibitor_downloads_centre';
  $ds_view_mode->label = 'Exhibitor Downloads Centre';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['exhibitor_downloads_centre'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'exhibitor_list';
  $ds_view_mode->label = 'Exhibitor List';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['exhibitor_list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'exhibitor_profile';
  $ds_view_mode->label = 'Exhibitor profile';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['exhibitor_profile'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured_gallery';
  $ds_view_mode->label = 'Featured Gallery';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['featured_gallery'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_width';
  $ds_view_mode->label = 'Full Width';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['full_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'gallery_display';
  $ds_view_mode->label = 'Gallery display';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['gallery_display'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'partner_page';
  $ds_view_mode->label = 'partner page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['partner_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'partner_page_vm';
  $ds_view_mode->label = 'Partner Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['partner_page_vm'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'press_page';
  $ds_view_mode->label = 'Press Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['press_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'slider';
  $ds_view_mode->label = 'slider';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['slider'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'two_column';
  $ds_view_mode->label = 'Two Column';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['two_column'] = $ds_view_mode;

  return $export;
}
