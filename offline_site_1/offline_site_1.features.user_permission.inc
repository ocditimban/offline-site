<?php
/**
 * @file
 * offline_site_1.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function offline_site_1_user_default_permissions() {
  $permissions = array();

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'Full Members',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
