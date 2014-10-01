<?php

/**
 * @file
 * The permissions for this feature.
 * 
 * Assumes there are roles of 'admin user' and 'site editor'
 */

/**
 * Implements hook_user_default_permissions().
 */
function discussion_forum_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer advanced forum.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array('admin user'),
  );

  // Exported permission: administer forums.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      '0' => 'admin user',
    ),
  );

  // Exported permission: create forum topics.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      '0' => 'admin user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any forum topic.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      '0' => 'admin user',
      '1' => 'site editor',
    ),
  );

  // Exported permission: delete own forum topics.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      '0' => 'admin user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit any forum topic.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      '0' => 'admin user',
      '1' => 'site editor',
    ),
  );

  // Exported permission: edit own forum topics.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      '0' => 'admin user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view forum statistics.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array('admin user'),
  );

  return $permissions;
}
