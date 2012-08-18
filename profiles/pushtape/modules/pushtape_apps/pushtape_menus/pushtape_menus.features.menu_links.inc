<?php
/**
 * @file
 * menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pushtape_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:node/add
  $menu_links['management:node/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'toolbar_expanded' => 1,
      'toolbar_break' => 0,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:node/add/album
  $menu_links['management:node/add/album'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/album',
    'router_path' => 'node/add/album',
    'link_title' => 'Album',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: management:node/add/page
  $menu_links['management:node/add/page'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: management:node/add/pushtape-event
  $menu_links['management:node/add/pushtape-event'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/pushtape-event',
    'router_path' => 'node/add/pushtape-event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'An important event to post to your site. ',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: management:node/add/pushtape-news
  $menu_links['management:node/add/pushtape-news'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/pushtape-news',
    'router_path' => 'node/add/pushtape-news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => 'An important piece of news to post to your site. ',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: management:node/add/track
  $menu_links['management:node/add/track'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/track',
    'router_path' => 'node/add/track',
    'link_title' => 'Track',
    'options' => array(
      'attributes' => array(
        'title' => 'A single audio track or song.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Album');
  t('Basic page');
  t('Event');
  t('News');
  t('Track');


  return $menu_links;
}