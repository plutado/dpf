<?php
function ds_post_image() {
  return array(
    'label' => t('Post Image'),
    'regions' => array(
      'image' => t('Image'),
      'adjacent_content' => t('Adjacent Content'),
      'float' => t('Float'),
    ),
    'css' => false,
    'image' => false
  );
}
