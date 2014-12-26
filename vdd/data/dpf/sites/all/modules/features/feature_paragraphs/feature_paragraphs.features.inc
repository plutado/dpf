<?php
/**
 * @file
 * feature_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraphs_paragraphs_info() {
  $items = array(
    'block_quote' => array(
      'name' => 'Blockquote',
      'bundle' => 'block_quote',
      'locked' => '1',
    ),
    'copy_only' => array(
      'name' => 'Copy Only',
      'bundle' => 'copy_only',
      'locked' => '1',
    ),
    'first_paragraph' => array(
      'name' => 'First Paragraph',
      'bundle' => 'first_paragraph',
      'locked' => '1',
    ),
    'half_image' => array(
      'name' => 'Half Image',
      'bundle' => 'half_image',
      'locked' => '1',
    ),
    'half_image_tout' => array(
      'name' => 'Half Image Tout',
      'bundle' => 'half_image_tout',
      'locked' => '1',
    ),
    'post_header_gallery' => array(
      'name' => 'Post Header Gallery',
      'bundle' => 'post_header_gallery',
      'locked' => '1',
    ),
    'post_header_image' => array(
      'name' => 'Post Header Image',
      'bundle' => 'post_header_image',
      'locked' => '1',
    ),
    'post_image' => array(
      'name' => 'Post Image',
      'bundle' => 'post_image',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
    'wide_image_tout' => array(
      'name' => 'Wide Image Tout',
      'bundle' => 'wide_image_tout',
      'locked' => '1',
    ),
  );
  return $items;
}
