<?php

/**
 * @file
 * DPF post layout template.
 */
?>

<div id="container" class="post-header">
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
</div>

<section class="post main">
  <?php print $content['main']; ?>
</section>

<footer class="site-footer">
  This is the site footer.
</footer>
