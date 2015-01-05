<?php

/**
 * @file
 * DPF post layout template.
 */
?>

<?php if (!empty($content['placement'])) : ?>
  <?php
    $title_placement = trim($content['placement']);
  ?>
<?php endif; ?>

<div id="container" class="post-header">
  <header class="header">
    <?php if (!empty($content['title'])) : ?>

      <?php if (!empty($content['header'])) : ?>
        <div class="bg-img">
          <?php print $content['header']; ?>
        </div>
      <?php endif; ?>

      <?php if ($title_placement != 'underneath') : ?>
        <div class="title <?php print $title_placement; ?>">
          <h1>
            <?php print $content['title']; ?>
          </h1>
          <?php if (!empty($content['subline'])) : ?>
            <p class="subline">
              <?php print $content['subline']; ?>
            </p>
          <?php endif; ?>
        </div>
      <?php endif; ?>
    <?php endif; ?>
  </header>
</div>

<?php if ($title_placement == 'underneath') : ?>
<div class="title underneath">
  <?php if (!empty($content['subline'])) : ?>
    <p class="subline">
      <?php print $content['subline']; ?>
    </p>
  <?php endif; ?>

  <h1>
    <?php print $content['title']; ?>
  </h1>
</div>
<?php endif; ?>

<?php if (!empty($content['main'])) : ?>
  <section class="post main">
    <?php print $content['main']; ?>
  </section>
<?php endif; ?>

<footer class="site-footer <?php print $content['placement']; ?>">
  This is the site footer.
</footer>

<?php if (!path_is_admin(current_path())) : ?>
  <?php drupal_add_js( drupal_get_path('theme', 'plutado') . '/js/jquery.anystretch.min.js', array('type' => 'file', 'scope' => 'footer')); ?>

  <script>
    $(document).ready(function($) {
      image = ($('.post-header img').attr('src'));
      $('.post-header').anystretch(image, {speed: 150});
    })
  </script>

<?php endif; ?>
