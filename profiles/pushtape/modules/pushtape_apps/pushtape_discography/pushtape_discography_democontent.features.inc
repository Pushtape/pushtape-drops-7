<?php
/**
 * @file
 * pushtape_discography_democontent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_discography_democontent_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
