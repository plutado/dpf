<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->langcode contains its textual representation.
 *   $language->dir contains the language direction.
 *   It will either be 'ltr' or 'rtl'.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?><!DOCTYPE html>
<!--[if lt IE <?php print $minie; ?> ]>    <html class="lt-ie<?php print $minie; ?> no-js" <?php print $html_attributes; ?>> <![endif]-->
<!--[if gte IE <?php print $minie; ?>]><!--> <html class="no-js" <?php print $html_attributes; ?> <?php print $rdf_attributes; ?>> <!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <script src="https://davidfugate.com/sites/all/themes/custom/plutado/js/modernizr.custom.js"></script>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.10.2/jquery.min.js"></script>

</head>

<body>

<?php if ($is_front) : ?>
  <div id="ip-container" class="ip-container">
    <header class="ip-header">
      <h1 class="ip-logo">
        <img class="ip-inner" width="50%" src="sites/all/themes/custom/plutado/images/dpf-logo.svg" />
      </h1>
      <div class="ip-loader">
        <svg class="ip-inner" width="60px" height="60px" viewBox="0 0 80 80">
          <path class="ip-loader-circlebg" d="M40,10C57.351,10,71,23.649,71,40.5S57.351,71,40.5,71 S10,57.351,10,40.5S23.649,10,40.5,10z"/>
          <path id="ip-loader-circle" class="ip-loader-circle" d="M40,10C57.351,10,71,23.649,71,40.5S57.351,71,40.5,71 S10,57.351,10,40.5S23.649,10,40.5,10z"/>
        </svg>
      </div>
    </header>
  </div><!-- /container -->
<?php endif; ?>

<script src="https://davidfugate.com/sites/all/themes/custom/plutado/js/classie.js"></script>
<script src="https://davidfugate.com/sites/all/themes/custom/plutado/js/pathLoader.js"></script>
<script src="https://davidfugate.com/sites/all/themes/custom/plutado/js/main.js"></script>

<?php print $page_top; ?>
<?php print $page; ?>
<?php print $page_bottom; ?>

<script>
  var $head = $( '#ha-header' );
  $( '.ha-waypoint' ).each( function(i) {
    var el = $( this ),
      animClassDown = el.data( 'animateDown' ),
      animClassUp = el.data( 'animateUp' );

    el.waypoint( function( direction ) {
      if( direction === 'down' && animClassDown) {
        $head.attr('class', 'ha-header ' + animClassDown);
        $( ".menu-anchor").show();
        $( ".menu-close").hide();
      }
      else if( direction === 'up' && animClassUp ){
        $head.attr('class', 'ha-header ' + animClassUp);
        $( ".menu-anchor").show().removeClass('active');
        $( ".menu-close").hide();
      }
    }, { offset: '100%' } );
    $( ".menu-anchor" ).click(function() {
      $head.attr('class', 'ha-header ha-header-subshow');
      $( ".menu-close").show();
    });
    $( ".menu-close" ).click(function() {
      $head.attr('class', 'ha-header ha-header-small');
      $( ".menu-anchor").show().removeClass('active');
      $( ".menu-close").hide();
    });
  } );
</script>

</body>
</html>
