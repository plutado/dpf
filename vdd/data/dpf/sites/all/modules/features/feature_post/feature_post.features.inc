<?php
/**
 * @file
 * post.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_post_node_info() {
  $items = array(
    'post' => array(
      'name' => t('post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
