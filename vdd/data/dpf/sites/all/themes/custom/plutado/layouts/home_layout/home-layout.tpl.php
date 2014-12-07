<?php

/**
 * @file
 * DPF home page layout template.
 */
?>

<?php print $content['header']; ?>

  <section class="posts-grid">

    <div class="main-posts">

      <div class="article first">
        <?php print $content['first']; ?>
      </div>

      <div class="article second">
        <?php print $content['second']; ?>
      </div>

      <aside class="right-rail hide-unless-medium">
        Right Rail<br>
        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed ac turpis justo. Pellentesque id metus ex. In hac habitasse platea dictumst. Aenean varius tincidunt euismod. Curabitur vestibulum, erat quis laoreet porta, tortor elit ullamcorper lacus, eget maximus est dui vitae lectus. Nunc tortor sem, egestas vel vehicula sed, facilisis sed lorem. Nam hendrerit lacus mollis dui convallis, euismod posuere nulla sollicitudin. Suspendisse nec dolor quam.

        Suspendisse fermentum erat ut euismod consectetur. Nulla facilisi. In id nisi ex. Ut quis tortor mi. Morbi iaculis augue justo. Donec a magna mattis, maximus odio at, facilisis risus. Nullam sagittis arcu ut mauris ultrices, ac sollicitudin sem elementum. Fusce ut erat ullamcorper, commodo neque ac, consectetur purus. Praesent et imperdiet mi, ut facilisis sapien. Nunc dignissim sem purus, a sollicitudin neque sollicitudin eget.
      </aside>

      <div class="article third">
        <?php print $content['third']; ?>
      </div>

      <div class="article fourth">
        <?php print $content['fourth']; ?>
      </div>

    </div>

    <aside class="right-rail show-unless-medium">
      Right Rail<br>
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed ac turpis justo. Pellentesque id metus ex. In hac habitasse platea dictumst. Aenean varius tincidunt euismod. Curabitur vestibulum, erat quis laoreet porta, tortor elit ullamcorper lacus, eget maximus est dui vitae lectus. Nunc tortor sem, egestas vel vehicula sed, facilisis sed lorem. Nam hendrerit lacus mollis dui convallis, euismod posuere nulla sollicitudin. Suspendisse nec dolor quam.

      Suspendisse fermentum erat ut euismod consectetur. Nulla facilisi. In id nisi ex. Ut quis tortor mi. Morbi iaculis augue justo. Donec a magna mattis, maximus odio at, facilisis risus. Nullam sagittis arcu ut mauris ultrices, ac sollicitudin sem elementum. Fusce ut erat ullamcorper, commodo neque ac, consectetur purus. Praesent et imperdiet mi, ut facilisis sapien. Nunc dignissim sem purus, a sollicitudin neque sollicitudin eget.
    </aside>

  </section>

  <section class="home-page-video">
    <?php print $content['video']; ?>
  </section>

  <section class="posts-grid">

    <div class="secondary-posts">

      <div class="article first">
        <?php print $content['fifth']; ?>
      </div>

      <div class="article second">
        <?php print $content['sixth']; ?>
      </div>

      <div class="article third">
        <?php print $content['seventh']; ?>
      </div>

      <div class="article fourth">
        <?php print $content['eighth']; ?>
      </div>

      <div class="article fifth">
        <?php print $content['ninth']; ?>
      </div>

      <div class="article sixth">
        <?php print $content['tenth']; ?>
      </div>

    </div>

  </section>

  <footer class="site-footer home footer FixedBottom">
    This is the site footer.
  </footer>
