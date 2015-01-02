<?php
/**
 * @file
 * feature_paragraph_post_image.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_paragraph_post_image_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_image_float'
  $field_bases['field_image_float'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_float',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'left' => 'Float Image Left',
        'right' => 'Float Image Right',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
