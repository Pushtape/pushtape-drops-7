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
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'user_first',
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
