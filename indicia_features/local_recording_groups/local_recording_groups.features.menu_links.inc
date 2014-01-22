<?php
/**
 * @file
 * local_recording_groups.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function local_recording_groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_browse-local-recording-groups:node/1
  $menu_links['main-menu_browse-local-recording-groups:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Browse local recording groups',
    'options' => array(
      'attributes' => array(
        'title' => 'A list of the local recording groups known to us.',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_browse-local-recording-groups:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_local-groups:<nolink>',
  );
  // Exported menu link: main-menu_local-groups:<nolink>
  $menu_links['main-menu_local-groups:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Local groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Local recording groups',
      ),
      'identifier' => 'main-menu_local-groups:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: main-menu_my-local-recording-groups:node/5
  $menu_links['main-menu_my-local-recording-groups:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'My local recording groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Lists the local recording groups you are a member of.',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_my-local-recording-groups:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_local-groups:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse local recording groups');
  t('Local groups');
  t('My local recording groups');


  return $menu_links;
}
