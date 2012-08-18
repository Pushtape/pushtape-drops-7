<?php
/**
 * @file
 * pushtape_kickstart_menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_kickstart_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_toolbar';
  $strongarm->value = array(
    'layout' => 'horizontal',
    'position' => 'sw',
    'behavior' => 'df',
    'blocks' => array(
      'admin-create' => -1,
      'admin-theme' => 1,
      'admin-account' => -1,
      'admin-menu' => 1,
    ),
  );
  $export['admin_toolbar'] = $strongarm;

  return $export;
}
