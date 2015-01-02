<?php
/**
 * @file
 * features_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function features_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 588.
  $styles[588] = array(
    'name' => 588,
    'label' => 588,
    'effects' => array(
      14 => array(
        'label' => 'Reuse a Manual Crop selection',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 1920,
          'style_name' => 588,
        ),
        'weight' => 0,
      ),
      15 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 588,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      16 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1920, 1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: 1920.
  $styles[1920] = array(
    'name' => 1920,
    'label' => 1920,
    'effects' => array(
      9 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1920,
          'height' => 1080,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 1920,
        ),
        'weight' => -11,
      ),
      11 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1920, 1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => -10,
      ),
    ),
  );

  return $styles;
}
