<?php
/**
 * @file
 * feature_paragraph_post_header_image.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_post_header_image_paragraphs_info() {
  $items = array(
    'post_header_image' => array(
      'name' => 'Post Header Image',
      'bundle' => 'post_header_image',
      'locked' => '1',
    ),
  );
  return $items;
}
