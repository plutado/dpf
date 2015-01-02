<?php
/**
 * @file
 * feature_scald_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_scald_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
}
