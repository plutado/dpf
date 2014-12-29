<?php
/**
 * @file
 * feature_paragraph_post_header_image.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_paragraph_post_header_image_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-post_header_image-field_header_image'
  $field_instances['paragraphs_item-post_header_image-field_header_image'] = array(
    'bundle' => 'post_header_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'tout_wide_image_scald_context',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_header_image',
    'label' => 'Header Image',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'image' => 'image',
        'video' => 'video',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'tout_wide_image_scald_context',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Image');

  return $field_instances;
}
