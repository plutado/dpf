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
      <h1><span>DAVID FUGATE</span></h1>
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
      <nav>
        <a>Dalliance</a>
        <a>Inglenook</a>
        <a>Lagniappe</a>
        <a>Mellifluous</a>
        <a>Erstwhile</a>
        <a>Wafture</a>
      </nav>
    </div>
  </div>
</header>
<!-- the sections with triggers -->

<?php print $content['header']; ?>

<section class="posts-grid ha-waypoint" data-animate-down="ha-header-hide" data-animate-up="ha-header-hide">

  <div class="main-posts">

    <div class="article first">
      <?php print $content['first']; ?>
    </div>

    <div class="article second">
      <?php print $content['second']; ?>
    </div>

    <aside class="right-rail hide-unless-medium">
      <h3>Right Rail</h3>

      <div class="sidebar-post first">
        <div class="sidebar-post-image">
          <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/tree.png" />
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
          <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/IMG_0695.png" />
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
          <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/building.png" />
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
          <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/building-01.png" />
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
    <h3>Right Rail</h3>

    <div class="sidebar-post first">
      <div class="sidebar-post-image">
        <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/tree.png" />
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
        <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/IMG_0695.png" />
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
        <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/building.png" />
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
        <img src="http://dpf.local/sites/all/themes/custom/plutado/images/temp/building-01.png" />
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

