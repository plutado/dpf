<?php
/**
 * @file
 * feature_paragraph_wide_image_tout.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_wide_image_tout_paragraphs_info() {
  $items = array(
    'wide_image_tout' => array(
      'name' => 'Wide Image Tout',
      'bundle' => 'wide_image_tout',
      'locked' => '1',
    ),
  );
  return $items;
}
