<?php

/**
 * @file
 * DPF home page layout template.
 */
?>

<!-- the header that will be animated by adding the respective state class to it -->
<header id="ha-header" class="ha-header ha-header-small">
  <div class="ha-header-perspective">
    <div class="ha-header-front">
      <!--<span>DAVID FUGATE</span>-->
      <span>
        <img width="215" src="sites/all/themes/custom/plutado/images/dpf-logo.svg" />
      </span>
      <nav>
        <a id="nav-toggle" class="menu-anchor">
          <!-- &#9776; -->
          <span></span>
        </a>

        <a class="menu-close">
          <!-- &#10006; -->
        </a>
      </nav>
    </div>
    <div class="ha-header-bottom">
      <p>
        DIY laborum migas pug. Asymmetrical Intelligentsia veniam brunch, street art selfies literally culpa actually gastropub. Reprehenderit cliche four loko heirloom ea. Nisi eiusmod readymade culpa elit. Cred pork belly roof party bespoke. Flannel small batch lo-fi kale chips, adipisicing 8-bit retro banjo tousled. Readymade salvia quis cillum eiusmod magna.
      </p>
      <p>
        Disrupt incididunt Bushwick 8-bit, tilde lo-fi narwhal tattooed laboris excepteur Blue Bottle Helvetica migas health goth. Lomo Brooklyn farm-to-table ullamco. Dolor craft beer lo-fi banh mi. American Apparel street art tattooed stumptown, whatever banh mi fingerstache sed migas single-origin coffee Banksy mixtape XOXO. Literally shabby chic voluptate.
      </p>
      <p>
        DIY laborum migas pug. Asymmetrical Intelligentsia veniam brunch, street art selfies literally culpa actually gastropub. Reprehenderit cliche four loko heirloom ea. Nisi eiusmod readymade culpa elit. Cred pork belly roof party bespoke. Flannel small batch lo-fi kale chips, adipisicing 8-bit retro banjo tousled. Readymade salvia quis cillum eiusmod magna.
      </p>
      <p>
        Disrupt incididunt Bushwick 8-bit, tilde lo-fi narwhal tattooed laboris excepteur Blue Bottle Helvetica migas health goth. Lomo Brooklyn farm-to-table ullamco. Dolor craft beer lo-fi banh mi. American Apparel street art tattooed stumptown, whatever banh mi fingerstache sed migas single-origin coffee Banksy mixtape XOXO. Literally shabby chic voluptate.
      </p>
      <p>
        DIY laborum migas pug. Asymmetrical Intelligentsia veniam brunch, street art selfies literally culpa actually gastropub. Reprehenderit cliche four loko heirloom ea. Nisi eiusmod readymade culpa elit. Cred pork belly roof party bespoke. Flannel small batch lo-fi kale chips, adipisicing 8-bit retro banjo tousled. Readymade salvia quis cillum eiusmod magna.
      </p>
      <p>
        Disrupt incididunt Bushwick 8-bit, tilde lo-fi narwhal tattooed laboris excepteur Blue Bottle Helvetica migas health goth. Lomo Brooklyn farm-to-table ullamco. Dolor craft beer lo-fi banh mi. American Apparel street art tattooed stumptown, whatever banh mi fingerstache sed migas single-origin coffee Banksy mixtape XOXO. Literally shabby chic voluptate.
      </p>
    </div>
  </div>
</header>
<!-- the sections with triggers -->

<?php print $content['header']; ?>

<section class="posts-grid ha-waypoint" data-animate-down="ha-header-hide" data-animate-up="ha-header-hide">

  <div class="main-posts ip-main">

    <div class="article first">
      <?php print $content['first']; ?>
    </div>

    <div class="article second">
      <?php print $content['second']; ?>
    </div>

    <aside class="right-rail hide-unless-medium">
      <h3>At a Glance</h3>

      <div class="sidebar-post first">
        <div class="sidebar-post-image">
          <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
        </div>
        <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
          <h4>What I'm Currently Reading</h4>
        </div>
      </div>

      <div class="sidebar-post second">
        <div class="sidebar-post-image">
          <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
        </div>
        <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
          <h4>What I'm Currently Reading</h4>
        </div>
      </div>

      <div class="sidebar-post third">
        <div class="sidebar-post-image">
          <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
        </div>
        <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
          <h4>What I'm Currently Reading</h4>
        </div>
      </div>

      <div class="sidebar-post fourth">
        <div class="sidebar-post-image">
          <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
        </div>
        <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
          <h4>What I'm Currently Reading</h4>
        </div>
      </div>

    </aside>

    <div class="article third">
      <?php print $content['third']; ?>
    </div>

    <div class="article fourth">
      <?php print $content['fourth']; ?>
    </div>

  </div>

  <aside class="right-rail show-unless-medium">
    <h3>At a Glance</h3>

    <div class="sidebar-post first">
      <div class="sidebar-post-image">
        <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
      </div>
      <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
        <h4>What I'm Currently Reading</h4>
      </div>
    </div>

    <div class="sidebar-post second">
      <div class="sidebar-post-image">
        <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
      </div>
      <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
        <h4>What I'm Currently Reading</h4>
      </div>
    </div>

    <div class="sidebar-post third">
      <div class="sidebar-post-image">
        <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
      </div>
      <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
        <h4>What I'm Currently Reading</h4>
      </div>
    </div>

    <div class="sidebar-post fourth">
      <div class="sidebar-post-image">
        <img src="sites/all/themes/custom/plutado/images/temp/default-placeholder-square.jpg" />
      </div>
      <div class="sidebar-title-blurb">
          <span class="sidebar-slug">
            This Slug
          </span>
        <h4>What I'm Currently Reading</h4>
      </div>
    </div>
  </aside>

</section>

<section class="home-page-video">
  <?php print $content['video']; ?>
</section>

<section class="posts-grid ha-waypoint" data-animate-down="ha-header-small" data-animate-up="ha-header-hide">

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

<section class="quotation">
  <blockquote>
    <p>
      If we have no peace, it is because we have forgotten that we belong to each other.
    </p>
    <div class="author">Mother Teresa</div>
  </blockquote>
</section>

<section class="photo-masonry">

</section>

<footer class="site-footer">
  Developed with Drupal.
</footer>

