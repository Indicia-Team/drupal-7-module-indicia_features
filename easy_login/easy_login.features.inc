<?php
/**
 * @file
 * easy_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easy_login_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
