<?php

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function plutado_preprocess_maintenance_page(&$vars) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // plutado_preprocess_html($vars);
  // plutado_preprocess_page($vars);

  // This preprocessor will also be used if the db is inactive. To ensure your
  // theme is used, add the following line to your settings.php file:
  // $conf['maintenance_theme'] = 'plutado';
  // Also, check $vars['db_is_active'] before doing any db queries.
}

/**
 * Implements hook_modernizr_load_alter().
 *
 * @return
 *   An array to be output as yepnope testObjects.
 */
/* -- Delete this line if you want to use this function
function plutado_modernizr_load_alter(&$load) {

}

/**
 * Implements hook_preprocess_html()
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_html(&$vars) {

}

/**
 * Override or insert variables into the page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_page(&$vars) {

}

/**
 * Override or insert variables into the region templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_region(&$vars) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_block(&$vars) {

}
// */

/**
 * Override or insert variables into the entity template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_entity(&$vars) {

}
// */

/**
 * Override or insert variables into the node template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_node(&$vars) {
  $node = $vars['node'];
}
// */

/**
 * Override or insert variables into the field template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("field" in this case.)
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_field(&$vars, $hook) {

}
// */

/**
 * Override or insert variables into the comment template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_comment(&$vars) {
  $comment = $vars['comment'];
}
// */

/**
 * Override or insert variables into the views template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function plutado_preprocess_views_view(&$vars) {
  $view = $vars['view'];
}
// */


/**
 * Override or insert css on the site.
 *
 * @param $css
 *   An array of all CSS items being requested on the page.
 */
/* -- Delete this line if you want to use this function
function plutado_css_alter(&$css) {

}
// */

/**
 * Override or insert javascript on the site.
 *
 * @param $js
 *   An array of all JavaScript being presented on the page.
 */
/* -- Delete this line if you want to use this function
function plutado_js_alter(&$js) {

}
// */

function plutado_preprocess_page (&$variables, $hook) {
  unset($variables['page']['main']['block_id']);
}

function plutado_preprocess_node(&$variables) {
}

function plutado_preprocess_entity(&$variables) {

}

function plutado_preprocess_field(&$variables) {

}

function plutado_preprocess_panels_pane(&$variables) {
}

function plutado_preprocess_paragraphs_items(&$variables, $hook) {
  $element = $variables['element']['#items'][0]['value'];
  $field_name = $variables['element']['#field_name'];
  if (isset($variables['element'][0]['entity']['paragraphs_item'][$element]['field_body_copy']['#bundle'])) {
    $view_mode = $variables['element'][0]['entity']['paragraphs_item'][$element]['field_body_copy']['#bundle'];
    $variables['theme_hook_suggestions'][] = 'paragraphs_items__' . $field_name . '-' . $view_mode;
  }
}