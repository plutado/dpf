<?php
/**
 * @file
 * feature_post.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function feature_post_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Post',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'post' => 'post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'post_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'header' => NULL,
      'main' => NULL,
      'title' => NULL,
      'subline' => NULL,
      'placement' => NULL,
    ),
    'subline' => array(
      'style' => 'naked',
    ),
    'header' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8b7ce8a1-4b43-4d96-b152-5d10e0fd63c5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a6344d0-036a-4fe6-92b6-a05cb0d1ff3a';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_header_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'sdl_editor_representation',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '2a6344d0-036a-4fe6-92b6-a05cb0d1ff3a';
    $display->content['new-2a6344d0-036a-4fe6-92b6-a05cb0d1ff3a'] = $pane;
    $display->panels['header'][0] = 'new-2a6344d0-036a-4fe6-92b6-a05cb0d1ff3a';
    $pane = new stdClass();
    $pane->pid = 'new-6528943b-373e-46fb-a1ad-d8fadfef3dcf';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6528943b-373e-46fb-a1ad-d8fadfef3dcf';
    $display->content['new-6528943b-373e-46fb-a1ad-d8fadfef3dcf'] = $pane;
    $display->panels['main'][0] = 'new-6528943b-373e-46fb-a1ad-d8fadfef3dcf';
    $pane = new stdClass();
    $pane->pid = 'new-f5758230-bd23-40ba-a0ed-493a3ddbde23';
    $pane->panel = 'placement';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_title_placement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_key',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = 'f5758230-bd23-40ba-a0ed-493a3ddbde23';
    $display->content['new-f5758230-bd23-40ba-a0ed-493a3ddbde23'] = $pane;
    $display->panels['placement'][0] = 'new-f5758230-bd23-40ba-a0ed-493a3ddbde23';
    $pane = new stdClass();
    $pane->pid = 'new-477c8ffb-da27-4162-b30b-ebcbcb0915aa';
    $pane->panel = 'subline';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_header_subline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '477c8ffb-da27-4162-b30b-ebcbcb0915aa';
    $display->content['new-477c8ffb-da27-4162-b30b-ebcbcb0915aa'] = $pane;
    $display->panels['subline'][0] = 'new-477c8ffb-da27-4162-b30b-ebcbcb0915aa';
    $pane = new stdClass();
    $pane->pid = 'new-0bf0d351-1a01-4d8a-9299-0ebbaea6d76e';
    $pane->panel = 'title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '0bf0d351-1a01-4d8a-9299-0ebbaea6d76e';
    $display->content['new-0bf0d351-1a01-4d8a-9299-0ebbaea6d76e'] = $pane;
    $display->panels['title'][0] = 'new-0bf0d351-1a01-4d8a-9299-0ebbaea6d76e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
