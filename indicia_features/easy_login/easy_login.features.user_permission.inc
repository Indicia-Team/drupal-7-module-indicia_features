<?php
/**
 * @file
 * easy_login.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function easy_login_user_default_permissions() {
  $permissions = array();

  // Exported permission: access iform.
  $permissions['access iform'] = array(
    'name' => 'access iform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'iform',
  );

  return $permissions;
}
