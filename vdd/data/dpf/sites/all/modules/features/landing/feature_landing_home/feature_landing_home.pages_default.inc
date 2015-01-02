<?php
/**
 * @file
 * feature_landing_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_landing_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'index';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_everywhere_site_template' => '-1',
  );
  $display = new panels_display();
  $display->layout = 'home_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'header' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'sixth' => NULL,
      'seventh' => NULL,
      'eighth' => NULL,
      'ninth' => NULL,
      'tenth' => NULL,
      'video' => NULL,
    ),
    'first' => array(
      'style' => 'naked',
    ),
    'second' => array(
      'style' => 'naked',
    ),
    'header' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = '0343cfe8-6fe7-43ea-8009-33834886c034';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26faa5f9-edf6-4e46-85ff-bba0bafdb802';
    $pane->panel = 'eighth';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '11',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '26faa5f9-edf6-4e46-85ff-bba0bafdb802';
    $display->content['new-26faa5f9-edf6-4e46-85ff-bba0bafdb802'] = $pane;
    $display->panels['eighth'][0] = 'new-26faa5f9-edf6-4e46-85ff-bba0bafdb802';
    $pane = new stdClass();
    $pane->pid = 'new-6dca7063-a01b-406e-a81c-4bd19eb3a1b3';
    $pane->panel = 'fifth';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '8',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '6dca7063-a01b-406e-a81c-4bd19eb3a1b3';
    $display->content['new-6dca7063-a01b-406e-a81c-4bd19eb3a1b3'] = $pane;
    $display->panels['fifth'][0] = 'new-6dca7063-a01b-406e-a81c-4bd19eb3a1b3';
    $pane = new stdClass();
    $pane->pid = 'new-5ebb795d-e2c2-485a-8c79-03fe32baae4b';
    $pane->panel = 'first';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ebb795d-e2c2-485a-8c79-03fe32baae4b';
    $display->content['new-5ebb795d-e2c2-485a-8c79-03fe32baae4b'] = $pane;
    $display->panels['first'][0] = 'new-5ebb795d-e2c2-485a-8c79-03fe32baae4b';
    $pane = new stdClass();
    $pane->pid = 'new-58fce2f1-a068-4d70-9d0c-c8c9bf23953f';
    $pane->panel = 'fourth';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '58fce2f1-a068-4d70-9d0c-c8c9bf23953f';
    $display->content['new-58fce2f1-a068-4d70-9d0c-c8c9bf23953f'] = $pane;
    $display->panels['fourth'][0] = 'new-58fce2f1-a068-4d70-9d0c-c8c9bf23953f';
    $pane = new stdClass();
    $pane->pid = 'new-4ecfb6ba-d670-4bf9-9f19-4f17dabc9575';
    $pane->panel = 'header';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '4ecfb6ba-d670-4bf9-9f19-4f17dabc9575';
    $display->content['new-4ecfb6ba-d670-4bf9-9f19-4f17dabc9575'] = $pane;
    $display->panels['header'][0] = 'new-4ecfb6ba-d670-4bf9-9f19-4f17dabc9575';
    $pane = new stdClass();
    $pane->pid = 'new-5c18d2dd-a386-4939-a6f1-34f03089a37e';
    $pane->panel = 'ninth';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '5c18d2dd-a386-4939-a6f1-34f03089a37e';
    $display->content['new-5c18d2dd-a386-4939-a6f1-34f03089a37e'] = $pane;
    $display->panels['ninth'][0] = 'new-5c18d2dd-a386-4939-a6f1-34f03089a37e';
    $pane = new stdClass();
    $pane->pid = 'new-808ec2f5-e679-420f-94bf-10ae47910195';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '808ec2f5-e679-420f-94bf-10ae47910195';
    $display->content['new-808ec2f5-e679-420f-94bf-10ae47910195'] = $pane;
    $display->panels['second'][0] = 'new-808ec2f5-e679-420f-94bf-10ae47910195';
    $pane = new stdClass();
    $pane->pid = 'new-7ebb2d91-4cf5-432b-af55-54f26f269673';
    $pane->panel = 'seventh';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '10',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '7ebb2d91-4cf5-432b-af55-54f26f269673';
    $display->content['new-7ebb2d91-4cf5-432b-af55-54f26f269673'] = $pane;
    $display->panels['seventh'][0] = 'new-7ebb2d91-4cf5-432b-af55-54f26f269673';
    $pane = new stdClass();
    $pane->pid = 'new-70907b59-8884-47d9-8d70-8da2a26d4c22';
    $pane->panel = 'sixth';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '70907b59-8884-47d9-8d70-8da2a26d4c22';
    $display->content['new-70907b59-8884-47d9-8d70-8da2a26d4c22'] = $pane;
    $display->panels['sixth'][0] = 'new-70907b59-8884-47d9-8d70-8da2a26d4c22';
    $pane = new stdClass();
    $pane->pid = 'new-21022e90-9ece-4c02-9d8d-ec9734fa8826';
    $pane->panel = 'tenth';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '7',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '21022e90-9ece-4c02-9d8d-ec9734fa8826';
    $display->content['new-21022e90-9ece-4c02-9d8d-ec9734fa8826'] = $pane;
    $display->panels['tenth'][0] = 'new-21022e90-9ece-4c02-9d8d-ec9734fa8826';
    $pane = new stdClass();
    $pane->pid = 'new-26b77049-d767-45e8-aa6a-04f5cfec4e46';
    $pane->panel = 'third';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '4',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '26b77049-d767-45e8-aa6a-04f5cfec4e46';
    $display->content['new-26b77049-d767-45e8-aa6a-04f5cfec4e46'] = $pane;
    $display->panels['third'][0] = 'new-26b77049-d767-45e8-aa6a-04f5cfec4e46';
    $pane = new stdClass();
    $pane->pid = 'new-73634161-e3d9-43cf-aaf6-d68f31969c7d';
    $pane->panel = 'video';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'post_tout_node',
      'link_node_title' => 0,
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
    $pane->uuid = '73634161-e3d9-43cf-aaf6-d68f31969c7d';
    $display->content['new-73634161-e3d9-43cf-aaf6-d68f31969c7d'] = $pane;
    $display->panels['video'][0] = 'new-73634161-e3d9-43cf-aaf6-d68f31969c7d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
