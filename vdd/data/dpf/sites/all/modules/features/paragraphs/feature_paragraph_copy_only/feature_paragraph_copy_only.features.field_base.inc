<?php
/**
 * @file
 * feature_paragraph_copy_only.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_paragraph_copy_only_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_body_copy'
  $field_bases['field_body_copy'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_body_copy',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}