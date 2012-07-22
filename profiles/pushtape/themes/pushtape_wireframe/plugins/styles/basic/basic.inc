<?php
$plugin = array(
  'title' => t('Basic Pane Style'),
  'description' => t('Provides an basic pane style.'),
  'render pane' => 'pushtape_wireframe_basic_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pushtape_wireframe_basic_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-basic';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
