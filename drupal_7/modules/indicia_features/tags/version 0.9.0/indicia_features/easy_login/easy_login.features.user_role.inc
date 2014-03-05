<?php
/**
 * @file
 * easy_login.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function easy_login_user_default_roles() {
  $roles = array();

  // Exported role: regional collator.
  $roles['regional collator'] = array(
    'name' => 'regional collator',
    'weight' => 3,
  );

  return $roles;
}
