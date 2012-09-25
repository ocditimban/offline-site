<?php
/**
 * @file
 * offline_site_1.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function offline_site_1_user_default_roles() {
  $roles = array();

  // Exported role: Full Members.
  $roles['Full Members'] = array(
    'name' => 'Full Members',
    'weight' => '5',
  );

  return $roles;
}
