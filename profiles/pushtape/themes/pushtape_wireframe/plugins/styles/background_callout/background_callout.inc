<?php
$plugin = array(
  'title' => t('Grey Background Callout Pane Style'),
  'description' => t('Provides a background callout style for a panel region or pane.'),
  'render region' => 'pushtape_wireframe_background_callout_render_region',
  'render pane' => 'pushtape_wireframe_background_callout_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pushtape_wireframe_background_callout_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-background-callout';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
 
/**
 * Theme function for the region style.
 */
function theme_pushtape_wireframe_background_callout_render_region($vars) {
  $display = $vars['display'];
  $region_id = $vars['region_id'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $output = '';
  $output .= '<div class="region region-' . $vars['region_id'] . ' region-background-callout">';
  $output .= implode('<div class="panel-separator"></div>', $panes);
  $output .= '</div>';
  return $output;
}
