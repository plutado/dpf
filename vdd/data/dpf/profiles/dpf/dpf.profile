<?php

/**
 * @file
 * Enables modules and site configuration for the ti_lsg_al site installation.
 *
 * \defgroup ti_lsg_ay AllYou.com Install Profile
 * \ingroup Profiles
 * \brief Provides installation profile for Allyou.com
 *
 * @{
 */

/**
 * Implements hook_install_tasks().
 *
 * Returns an array of tasks to be performed.
 * @see: http://api.drupal.org/api/drupal/modules--system--system.api.php/function/hook_install_tasks/7
 *
 * Each task should follow this structure:
 * 'machine_name' => array(
 *    'display_name' => st('Human-readable task name'),
 *    'display' => TRUE,
 *    'type' => 'normal',
 *    'run' => INSTALL_TASK_RUN_IF_REACHED,
 *    'function' => 'function_to_execute',
 *  ),
 */
function dpf_install_tasks($install_state) {
  $tasks = array(
    'dpf_create_roles' => array(
      'display_name' => st('Create Roles'),
      'display' => TRUE,
      'type' => 'normal',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'dpf_task_create_roles',
    ),
    'dpf_enable_modules' => array(
      'display_name' => st('Enable Modules'),
      'display' => TRUE,
      'type' => 'batch',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'dpf_task_enable_modules',
    ),
  );

  return $tasks;
}

/**
 * Installation task.
 * Creates roles for the Allyou.com site.
 */
function dpf_task_create_roles() {
  // Create a default role for site administrators, with all available permissions assigned.
  $admin_role = new stdClass();
  $admin_role->name = 'administrator';
  $admin_role->weight = 2;
  user_role_save($admin_role);

  // Set this as the administrator role.
  variable_set('user_admin_role', $admin_role->rid);

  // Assign user 1 the "administrator" role.
  db_insert('users_roles')
    ->fields(array('uid' => 1, 'rid' => $admin_role->rid))
    ->execute();

  // Create a role for editors.
  $editor_role = new stdClass();
  $editor_role->name = 'editor';
  $editor_role->weight = 3;
  user_role_save($editor_role);

  // Create a role for editors.
  $editor_role = new stdClass();
  $editor_role->name = 'member';
  $editor_role->weight = 4;
  user_role_save($editor_role);
}

/**
 * Return the Modules array.
 */
function dpf_modules_array() {

  // Modules to enable.
  $module_list = array(
    // Contrib.
    'advanced_help',
    'bean',
    'blockify',
    'borealis',
    'ctools',
    'devel',
    'ds',
    'entity',
    'entity_view_mode',
    'entityreference',
    'features',
    'globalredirect',
    'html5_tools',
    'job_scheduler',
    'jquery_update',
    'libraries',
    'magic',
    'modernizer',
    'panels',
    'panels_everywhere',
    'plupload',
    'prev_next',
    'restws',
    'scald',
    'search_krumo',
    'seckit',
    'views',
    'wysiwyg',
  );

  return $module_list;
}

/**
 * Installation task.
 * Enables all the modules that we need for the TI LSG Allyou.com site.
 */
function dpf_task_enable_modules(&$install_state, $finished = '_ti_lsg_ay_module_batch_finished') {
  $batch = array();
  $operations = array();

  // Modules to enable.
  $module_list = dpf_modules_array();

  foreach ($module_list as $module) {
    $operations[] = array('dpf_task_enable_module', array($module));
  }

  $batch['title'] = st('Enabling dpf modules.');
  $batch['init_message'] = st('Preparing list of modules to be enabled.');
  $batch['error_message'] = st('Ooops, there was an error installing some of the modules.');
  $batch['operations'] = $operations;

  if (isset($finished)) {
    $batch['finished'] = $finished;
  }

  return $batch;
}

/**
 * Installation task helper.
 *
 * Enables specific modules with detailed feedback if dependencies aren't met.
 */
function dpf_task_enable_module($modules, &$context) {
  if (!is_array($modules)) {
    $modules = array($modules);
  }

  foreach ($modules as $module) {
    $success = module_enable(array($module), TRUE);

    // Provide feedback if dependencies are missing.
    if (!$success) {
      $context['message'] = st('Dependencies missing while installing @module module', array('@module' => $module));
    }
    else {
      $context['message'] = st('installed @module module', array('@module' => $module));
    }

    $context['results'][] = ($success ? 'successfully enabled' : 'failed enabling') . ' ' . $module;
  }
}

/**
 * Finished callback of the module install task.
 * Inform the user of modules enabled.
 */
function _dpf_module_batch_finished($success, $results) {
  if ($success) {
    drupal_set_message(format_plural(count($results), 'One module was enabled.', '@count modules were enabled.'));
  }
}

/**
 * Installation task.
 * Revert some Features components that are not properly set with a module install.
 */
function dpf_task_revert_features() {
  features_revert(array('ti_lsg_ay_search' => array('apachesolr_environment')));
}

/**@}*/
