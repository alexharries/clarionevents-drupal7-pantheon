<?php
/**
 * @file
 * exhibitor_profiles.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function exhibitor_profiles_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'exhibitor_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Exhibitor Dashboard';
  $page->admin_description = '';
  $page->path = 'admin/exhibitor-dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
            3 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'User Dashboard',
    'name' => 'management',
    'weight' => '-50',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_exhibitor_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'exhibitor_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'Content from User (on node.node_author)',
        'keyword' => 'user_2',
        'name' => 'entity_from_schema:uid-user-node',
        'context' => 'context_user_1',
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '85b158ab-a141-48fe-b2b4-4ba83755f4e7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_exhibitor_dashboard_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-be50d8da-e8d4-491d-ac49-c93a71618a81';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'exhibitor_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'be50d8da-e8d4-491d-ac49-c93a71618a81';
  $display->content['new-be50d8da-e8d4-491d-ac49-c93a71618a81'] = $pane;
  $display->panels['left'][0] = 'new-be50d8da-e8d4-491d-ac49-c93a71618a81';
  $pane = new stdClass();
  $pane->pid = 'new-80371a43-dd9c-4779-9048-b7bdb4e243fd';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'exhibitor_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '80371a43-dd9c-4779-9048-b7bdb4e243fd';
  $display->content['new-80371a43-dd9c-4779-9048-b7bdb4e243fd'] = $pane;
  $display->panels['left'][1] = 'new-80371a43-dd9c-4779-9048-b7bdb4e243fd';
  $pane = new stdClass();
  $pane->pid = 'new-3df0a4ec-17e2-4ad0-a0bc-27d677788021';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'exhibitor_content-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3df0a4ec-17e2-4ad0-a0bc-27d677788021';
  $display->content['new-3df0a4ec-17e2-4ad0-a0bc-27d677788021'] = $pane;
  $display->panels['left'][2] = 'new-3df0a4ec-17e2-4ad0-a0bc-27d677788021';
  $pane = new stdClass();
  $pane->pid = 'new-07bf78b0-0b3e-4014-8d9b-15329eeb7bb3';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '07bf78b0-0b3e-4014-8d9b-15329eeb7bb3';
  $display->content['new-07bf78b0-0b3e-4014-8d9b-15329eeb7bb3'] = $pane;
  $display->panels['right'][0] = 'new-07bf78b0-0b3e-4014-8d9b-15329eeb7bb3';
  $pane = new stdClass();
  $pane->pid = 'new-70bfb63b-f9f9-404a-9efa-e6cb8af360b0';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'system-user-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '70bfb63b-f9f9-404a-9efa-e6cb8af360b0';
  $display->content['new-70bfb63b-f9f9-404a-9efa-e6cb8af360b0'] = $pane;
  $display->panels['right'][1] = 'new-70bfb63b-f9f9-404a-9efa-e6cb8af360b0';
  $pane = new stdClass();
  $pane->pid = 'new-fa1d9450-bcb9-4e92-be28-52143dfd7046';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-25';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Your Exhibitor Manual & Show Guide',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fa1d9450-bcb9-4e92-be28-52143dfd7046';
  $display->content['new-fa1d9450-bcb9-4e92-be28-52143dfd7046'] = $pane;
  $display->panels['right'][2] = 'new-fa1d9450-bcb9-4e92-be28-52143dfd7046';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-be50d8da-e8d4-491d-ac49-c93a71618a81';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitor_dashboard'] = $page;

  return $pages;

}
