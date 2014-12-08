<?php
/**
 * @file panels-pane.tpl.php
 * Main panel pane template
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */
?>

<?php if($pane->panel == 'header') : ?>
  <div id="container" class="container intro-effect-fadeout ha-waypoint" data-animate-down="ha-header-hide" data-animate-up="ha-header-hide">
    <header class="header">

      <?php if (!empty($content['field_header_image'][0]['#markup'])) : ?>
        <div class="bg-img">
          <?php print $content['field_header_image'][0]['#markup']; ?>
        </div>
      <?php endif; ?>

      <div class="title">
        <?php if (!empty($content['field_header_title'][0]['#markup'])) : ?>
          <h1>
            <?php print $content['field_header_title'][0]['#markup']; ?>
          </h1>
        <?php endif; ?>
        <?php if (!empty($content['field_header_subline'][0]['#markup'])) : ?>
          <p class="subline">
            <?php print $content['field_header_subline'][0]['#markup']; ?>
          </p>
        <?php endif; ?>
      </div>

    </header>
  </div>

  <?php if (!path_is_admin(current_path())) : ?>
    <?php drupal_add_js( drupal_get_path('theme', 'plutado') . '/js/jquery.backstretch.min.js', array('type' => 'file', 'scope' => 'footer')); ?>
    <?php drupal_add_js( drupal_get_path('theme', 'plutado') . '/js/waypoints.min.js', array('type' => 'file', 'scope' => 'footer')); ?>

    <script>
      jQuery(document).ready(function($) {
        image = ($('.header .bg-img img').attr('src'));
        $(".container").backstretch(image);
      })
    </script>

  <?php endif; ?>

<?php else : ?>

<?php print render($content); ?>

<?php endif; ?>
