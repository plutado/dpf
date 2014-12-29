<?php
/**
 * @file
 * feature_paragraph_video.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraph_video_paragraphs_info() {
  $items = array(
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
