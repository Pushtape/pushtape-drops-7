<?php
/**
 * @file
 * pushtape_kickstart_menus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pushtape_kickstart_menus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'administration';
  $context->description = 'admin context for node add menu';
  $context->tag = 'pushtape';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'admin-create' => array(
          'module' => 'admin',
          'delta' => 'create',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'delta_blocks-action-links' => array(
          'module' => 'delta_blocks',
          'delta' => 'action-links',
          'region' => 'menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('admin context for node add menu');
  t('pushtape');
  $export['administration'] = $context;

  return $export;
}
