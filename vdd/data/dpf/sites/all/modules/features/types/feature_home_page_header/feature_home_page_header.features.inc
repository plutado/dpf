<?php
/**
 * @file
 * feature_home_page_header.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_home_page_header_node_info() {
  $items = array(
    'home_page_header' => array(
      'name' => t('Home Page Header'),
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
