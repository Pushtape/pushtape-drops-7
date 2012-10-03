<?php
/**
 * @file
 * pushtape_discography.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pushtape_discography_user_default_permissions() {
  $permissions = array();

  // Exported permission: create album content.
  $permissions['create album content'] = array(
    'name' => 'create album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create track content.
  $permissions['create track content'] = array(
    'name' => 'create track content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any album content.
  $permissions['delete any album content'] = array(
    'name' => 'delete any album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any track content.
  $permissions['delete any track content'] = array(
    'name' => 'delete any track content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own album content.
  $permissions['delete own album content'] = array(
    'name' => 'delete own album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own track content.
  $permissions['delete own track content'] = array(
    'name' => 'delete own track content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any album content.
  $permissions['edit any album content'] = array(
    'name' => 'edit any album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any track content.
  $permissions['edit any track content'] = array(
    'name' => 'edit any track content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own album content.
  $permissions['edit own album content'] = array(
    'name' => 'edit own album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own track content.
  $permissions['edit own track content'] = array(
    'name' => 'edit own track content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'site administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
