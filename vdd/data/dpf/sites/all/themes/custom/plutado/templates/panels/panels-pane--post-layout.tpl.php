<?php print render($content); ?>

<?php if (!path_is_admin(current_path())) : ?>
  <?php drupal_add_js( drupal_get_path('theme', 'plutado') . '/js/jquery.anystretch.min.js', array('type' => 'file', 'scope' => 'footer')); ?>

  <script>
    $(document).ready(function($) {
      image = ($('.post-header img').attr('src'));
      $('.post-header').anystretch(image, {speed: 150});
    })
  </script>

<?php endif; ?>
