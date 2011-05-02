<?php
/**
 * @file
 * feature_mpdbase_sitewide.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function feature_mpdbase_sitewide_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
