<?php

/**
 * @file
 * DPF post layout template.
 */
?>

<div id="container" class="container post intro-effect-fadeout">
  <header class="header">

    <?php if (!empty($content['header'])) : ?>
      <div class="bg-img">
        <?php print $content['header']; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['title'])) : ?>
      <div class="title">
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

  </header>
  <button class="trigger" data-info=""><span>Trigger</span></button>
</div>

<?php if (!path_is_admin(current_path())) : ?>
  <?php drupal_add_js( drupal_get_path('theme', 'plutado') . '/js/classie.js', array('type' => 'file', 'scope' => 'footer')); ?>
  <?php drupal_add_js( drupal_get_path('theme', 'plutado') . '/js/article-effects.js', array('type' => 'file', 'scope' => 'footer')); ?>
<?php endif; ?>

<section class="post main">
  <?php print $content['main']; ?>
</section>

<footer class="site-footer">
  This is the site footer.
</footer>
