<?php

/**
 * @file
 * Contains the theme settings form elements for the development extension.
 */

/**
 * Implements hook_extension_EXTENSION_theme_settings_form_alter().
 */
function omega_extension_layouts_settings_form($element, &$form, $form_state) {
  if ($layouts = omega_layouts_info()) {
    $element['omega_layout'] = array(
      '#type' => 'radios',
      '#options' => array(),
      '#title' => t('Choose a layout'),
      '#default_value' => theme_get_setting('omega_layout'),
    );

    foreach ($layouts as $layout => $info) {
      $element['omega_layout']['#options'][$layout] = $info['label'];
      $element['omega_layout'][$layout]['#description'] = $info['description'];
      $element['omega_layout'][$layout]['#prefix'] = '<div class="omega-layout-selection-wrapper">';
      $element['omega_layout'][$layout]['#suffix'] = '<img class="omega-layout-icon" src="' . file_create_url($info['icon']) . '" /></div>';
    }

    foreach ($layouts as $layout => $info) {
      if (!$info['supported']) {
        $element['omega_layout']['#options'][$layout] .= ' (<span class="admin-disabled">' . t('unsupported') . '</span>)';
        $element['omega_layout']['#disabled'] = TRUE;
      }
    }
  }

  $form['#submit'][] = 'omega_extension_layouts_theme_settings_form_submit';

  return $element;
}

/**
 * Theme settings form submit handler for the layouts extension.
 */
function omega_extension_layouts_theme_settings_form_submit($form, &$form_state) {

}
