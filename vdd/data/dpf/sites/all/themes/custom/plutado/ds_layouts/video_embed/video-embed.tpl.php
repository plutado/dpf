<div class="video-embed js-video widescreen">
  <?php print $video; ?>
</div>

<?php if (!path_is_admin(current_path())) : ?>
  <?php drupal_add_js( drupal_get_path('theme', 'plutado') . '/js/jquery.fitvids.js', array('type' => 'file', 'scope' => 'footer')); ?>
<?php endif; ?>
