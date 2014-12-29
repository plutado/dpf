<?php
/**
 * @file
 * feature_paragraph_post_header_gallery.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_post_header_gallery_paragraphs_info() {
  $items = array(
    'post_header_gallery' => array(
      'name' => 'Post Header Gallery',
      'bundle' => 'post_header_gallery',
      'locked' => '1',
    ),
  );
  return $items;
}
