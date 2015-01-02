<?php
/**
 * @file
 * feature_home_page_header.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_home_page_header_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-home_page_header-field_header_image'
  $field_instances['node-home_page_header-field_header_image'] = array(
    'bundle' => 'home_page_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'semantic_field_format' => 0,
        ),
        'type' => 'title',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'semantic_field_format' => 0,
        ),
        'type' => 'title',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_header_image',
    'label' => 'Header Image',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_library_item',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-home_page_header-field_header_subline'
  $field_instances['node-home_page_header-field_header_subline'] = array(
    'bundle' => 'home_page_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_header_subline',
    'label' => 'Header Subline',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 140,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-home_page_header-field_header_title'
  $field_instances['node-home_page_header-field_header_title'] = array(
    'bundle' => 'home_page_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_header_title',
    'label' => 'Header Title',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 140,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Image');
  t('Header Subline');
  t('Header Title');

  return $field_instances;
}
