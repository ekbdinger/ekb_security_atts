<?php
/**
 * @file
 * security_atts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function security_atts_taxonomy_default_vocabularies() {
  return array(
    'client_specific' => array(
      'name' => 'Client Specific',
      'machine_name' => 'client_specific',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'security_roles' => array(
      'name' => 'Security Roles (new)',
      'machine_name' => 'security_roles',
      'description' => 'Recommended security roles for security attributes',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
