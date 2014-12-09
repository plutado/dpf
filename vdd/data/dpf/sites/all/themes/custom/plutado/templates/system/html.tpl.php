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
  <style>@import url("http://dpf.local/sites/all/themes/custom/plutado/css/component.css");</style>
  <?php print $scripts; ?>
  <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.10.2/jquery.min.js"></script>

</head>
<body>

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
