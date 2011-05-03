<?php

/**
 * Implementation of hook_user_default_roles().
 */
function collaborativeforms_users_user_default_roles() {
  $roles = array();

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: data entry
  $roles['data entry'] = array(
    'name' => 'data entry',
  );

  return $roles;
}
