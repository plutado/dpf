<?php
/**
 * @file
 * feature_video.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_video_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-video-field_body'
  $field_instances['node-video-field_body'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'semantic_field_format' => 0,
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
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_body',
    'label' => 'Video Embed',
    'required' => 0,
    'settings' => array(
      'allowed_bundles' => array(
        'block_quote' => 0,
        'video' => 'video',
        'wide_image_tout' => 0,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Video Embed',
      'title_multiple' => 'Video Embed',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Video Embed');

  return $field_instances;
}
