<section class="post-image <?php if ($float) { print trim($float); } else { print 'full'; } ?>">

  <?php if (!$float) : ?>
    <div class="full-wrapper">
  <?php endif; ?>

  <?php print $image; ?>

  <?php if (!$float) : ?>
    </div>
  <?php endif; ?>

  <?php print $adjacent_content; ?>
</section>

