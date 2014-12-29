<?php
/**
 * @file
 * feature_paragraph_first_paragraph.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_first_paragraph_paragraphs_info() {
  $items = array(
    'first_paragraph' => array(
      'name' => 'First Paragraph',
      'bundle' => 'first_paragraph',
      'locked' => '1',
    ),
  );
  return $items;
}
