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

  // Exported permission: 'access iform'.
  $permissions['access iform'] = array(
    'name' => 'access iform',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'iform',
  );

  // Exported permission: 'collate regional records'.
  $permissions['collate regional records'] = array(
    'name' => 'collate regional records',
    'roles' => array(
      'regional collator' => 'regional collator',
    ),
    'module' => 'easy_login',
  );

  return $permissions;
}
