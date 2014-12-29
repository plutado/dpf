<?php
/**
 * @file
 * feature_paragraph_post_image.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_post_image_paragraphs_info() {
  $items = array(
    'post_image' => array(
      'name' => 'Post Image',
      'bundle' => 'post_image',
      'locked' => '1',
    ),
  );
  return $items;
}
