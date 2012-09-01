<?php    
/**
 * Implements hook_install_tasks()
 */
function pushtape_install_tasks(&$install_state) {

  // Require specific code required for the install profile process
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  require_once(drupal_get_path('module', 'panopoly_theme') . '/panopoly_theme.profile.inc');

  // Assemble and return the install tasks
  $tasks = array();
  $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'pushtape', 'default apps' => array('pushtape_discography')));
  $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'panopoly', 'default apps' => array('panopoly_demo')));
  $tasks = $tasks + panopoly_theme_profile_theme_selection_install_task($install_state);
  return $tasks;
}

/**
 * Implements hook_install_tasks_alter()
 */
function pushtape_install_tasks_alter(&$tasks, $install_state) {

  // Magically go one level deeper in solving years of dependency problems with install profiles
  $tasks['install_load_profile']['function'] = 'pushtape_install_load_profile';

  // Since we only offer one language, define a callback to set this
  $tasks['install_select_locale']['function'] = 'pushtape_install_locale_selection';
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function pushtape_form_install_configure_form_alter(&$form, $form_state) {

  // Hide some messages from various modules that are just too chatty!
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'pushtape Pushtape';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'AT';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europa/Austria'; // The old world

   // Define a default email address if we can guess a valid one
  if (valid_email_address('admin@' . $_SERVER['HTTP_HOST'])) {
 $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
 $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
 }

}


/**
 * Implements hook_form_FORM_ID_alter()
 */
function pushtape_form_apps_profile_apps_select_form_alter(&$form, $form_state) {

  // For some things there are no need
  $form['apps_message']['#access'] = FALSE;
  $form['apps_fieldset']['apps']['#title'] = NULL;

  // Improve style of apps selection form
  if (isset($form['apps_fieldset'])) {
    $manifest = apps_manifest(apps_servers('pushtape'));
    foreach ($manifest['apps'] as $name => $app) {
      if ($name != '#theme') {
        $form['apps_fieldset']['apps']['#options'][$name] = '<strong>' . $app['name'] . '</strong><p><div class="admin-options"><div class="form-item">' . theme('image', array('path' => $app['logo']['path'], 'height' => '32', 'width' => '32')) . '</div>' . $app['description'] . '</div></p>';
      }
    }
  }

  // Remove the demo content selection option since this is handled through the pushtape demo module.
  $form['default_content_fieldset']['#access'] = FALSE;
}


/**
 * Task handler to set the language to English since that is the only one
 * we have at the moment.
 */
function pushtape_locale_selection(&$install_state) {
  $install_state['parameters']['locale'] = 'en';
}

 /**
 * Implements hook_appstore_stores_info()
 */
function pushtape_apps_servers_info() {
  $profile = variable_get('install_profile', 'pushtape');
  $info =  drupal_parse_info_file(drupal_get_path('profile', $profile) . '/' . $profile . '.info');
  return array(
    'pushtape' => array(
      'title' => 'Pushtape',
      'description' => "Apps for Pushtape",
      'manifest' => 'http://www.apps.rosenstrauch.com/app/query/pushtape',
      'profile' => $profile,
      'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x-panels',
      'server_name' => $_SERVER['SERVER_NAME'],
      'server_ip' => $_SERVER['SERVER_ADDR'],
    ),
  );
}

/**
 * Task handler to load our install profile and enhance the dependency information
 */
function pushtape_install_load_profile(&$install_state) {

  // Loading the install profile normally
  install_load_profile($install_state);

  // Include any dependencies that we might have missed...
  foreach($install_state['profile_info']['dependencies'] as $module) {
    $module_info = drupal_parse_info_file(drupal_get_path('module', $module) . '/' . $module . '.info');
    if (!empty($module_info['dependencies'])) {
      $install_state['profile_info']['dependencies'] = array_unique(array_merge($install_state['profile_info']['dependencies'], $module_info['dependencies']));
    }
  }
}
