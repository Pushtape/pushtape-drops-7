<?php
/**
 * Implementation of hook_css_alter().
 *
function pushtape_wireframe_css_alter(&$css) {
  if (module_exists('panopoly_admin')) {
    // Installs the jquery.ui themeroller theme to the theme.
    if (isset($css['misc/ui/jquery.ui.theme.css'])) {
      $css['misc/ui/jquery.ui.theme.css']['data'] = drupal_get_path('module', 'panopoly_admin') . '/jqueryui/panopoly-theme/panopoly-jquery-ui-theme.css';
    }
    
    if (isset($css['misc/ui/jquery.ui.dialog.css'])) {
      unset($css['misc/ui/jquery.ui.dialog.css']);
    }
    
    if (isset($css['misc/ui/jquery.ui.tabs.css'])) {
      unset($css['misc/ui/jquery.ui.tabs.css']);
    }
  }
}/**/

/**
 * Implementation of hook_preprocess_page()
 */
function pushtape_wireframe_preprocess_page(&$vars, $hook) {

  // Setup the search box functionality
  $search_box_form = drupal_get_form('search_form');
  $search_box_form['basic']['keys']['#title'] = '';
  $search_box_form['basic']['keys']['#attributes'] = array('placeholder' => 'Search');
  $search_box_form['basic']['submit']['#value'] = t('Go');
  $search_box = drupal_render($search_box_form);
  $vars['search_box'] = (user_access('search content')) ? $search_box : NULL;

  // Setup the contact information
  $vars['contact_information']['site_name'] = variable_get('site_name');
  $vars['contact_information']['address'] = _filter_autop(theme_get_setting('address'));
  $vars['contact_information']['phone'] = theme_get_setting('phone');
  $vars['contact_information']['fax'] = theme_get_setting('fax');

  // Setup the social links
  $social_links = array();
  if (module_exists('pushtape_news')) {
    $social_links[] = l('RSS', 'rss.xml');
  }
  if ($twitter_link = theme_get_setting('twitter_link')) {
    $social_links[] = l('Twitter', $twitter_link);
  }
  if ($facebook_link = theme_get_setting('facebook_link')) {
    $social_links[] = l('Facebook', $facebook_link);
  }
  if ($youtube_link = theme_get_setting('youtube_link')) {
    $social_links[] = l('YouTube', $youtube_link);
  }
  $vars['social_links'] = theme('item_list', array('items' => $social_links));

  // Define the university seal 
  if (theme_get_setting('seal_path') && !theme_get_setting('default_seal')) {
    $seal_path = theme_get_setting('seal_path');
    $vars['seal'] = file_create_url($seal_path);
  }
  else {
    $vars['seal'] = '/' . path_to_theme() . '/images/seal.png';
  }
}

/**
 * Implementation of hook_preprocess_node()
 */
function pushtape_wireframe_preprocess_node(&$vars, $hook) {

  // Customize the submitted by text
  $vars['date'] = format_date($vars['created'], 'panopoly_day');
  $vars['submitted'] = t('By !username / !datetime', array('!username' => $vars['name'], '!datetime' => $vars['date']));
}
