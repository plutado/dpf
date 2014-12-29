<?php
/**
 * @file
 * feature_paragraph_copy_only.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_copy_only_paragraphs_info() {
  $items = array(
    'copy_only' => array(
      'name' => 'Copy Only',
      'bundle' => 'copy_only',
      'locked' => '1',
    ),
  );
  return $items;
}
