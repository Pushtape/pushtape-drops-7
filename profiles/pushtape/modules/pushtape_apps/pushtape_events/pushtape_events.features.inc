<?php
/**
 * @file
 * pushtape_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pushtape_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pushtape_events_node_info() {
  $items = array(
    'pushtape_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An important event to post to your site. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
