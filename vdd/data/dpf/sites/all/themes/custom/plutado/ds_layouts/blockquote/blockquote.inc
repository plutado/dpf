<?php
function ds_blockquote() {
  return array(
    'label' => t('Blockquote'),
    'regions' => array(
      'blockquote' => t('Blockquote'),
      'quote_source' => t('Source'),
    ),
    'css' => false,
    'image' => false
  );
}
