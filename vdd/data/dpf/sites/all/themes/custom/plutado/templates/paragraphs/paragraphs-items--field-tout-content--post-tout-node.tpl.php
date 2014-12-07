<?php

/**
 * @file
 * Default theme implementation for a group of paragraph items.
 *
 * Available variables:
 * - $content: Rendered HTML of content items.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - paragraphs-items
 *   - paragraphs-items-{field_name}
 *   - paragraphs-items-{field_name}-{view_mode}
 *   - paragraphs-items-{view_mode}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_paragraphs_items()
 * @see template_process()
 */
?>
<div class="post-tout-item">
  <?php $paragraph_id = $variables['element']['#items'][0]['value']; ?>
  <?php print l($variables['element'][0]['entity']['paragraphs_item'][$paragraph_id]['field_tout_image'][0]['#markup'], 'node/' . $variables['element']['#object']->nid, array( html => true )); ?>

  <div class="tout-details">
    <h3 class="tout-title">
      <?php print l($variables['element'][0]['entity']['paragraphs_item'][$paragraph_id]['field_tout_title'][0]['#markup'], 'node/' . $variables['element']['#object']->nid); ?>
    </h3>
    <p class="tout-blurb">
      <?php print $variables['element'][0]['entity']['paragraphs_item'][$paragraph_id]['field_tout_blurb'][0]['#markup']; ?>
    </p>
  </div>
</div>
