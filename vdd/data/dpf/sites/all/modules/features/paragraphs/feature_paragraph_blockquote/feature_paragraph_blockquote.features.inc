<?php
/**
 * @file
 * feature_paragraph_blockquote.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_blockquote_paragraphs_info() {
  $items = array(
    'block_quote' => array(
      'name' => 'Blockquote',
      'bundle' => 'block_quote',
      'locked' => '1',
    ),
  );
  return $items;
}
