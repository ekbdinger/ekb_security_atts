<?php
/**
 * @file
 * security_atts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function security_atts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-security_attribute-field_action'
  $field_instances['node-security_attribute-field_action'] = array(
    'bundle' => 'security_attribute',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_action',
    'label' => 'Action',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          'test_format' => 'test_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -9,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -8,
            ),
            4 => array(
              'weight' => -6,
            ),
            'test_format' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-security_attribute-field_client_specific_attribute'
  $field_instances['node-security_attribute-field_client_specific_attribute'] = array(
    'bundle' => 'security_attribute',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Security attributes related to a custom build of the eCW software.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_client_specific_attribute',
    'label' => 'Client Specific attribute',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-security_attribute-field_pp_ent_reference'
  $field_instances['node-security_attribute-field_pp_ent_reference'] = array(
    'bundle' => 'security_attribute',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pp_ent_reference',
    'label' => 'Primary Page',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-security_attribute-field_security_roles'
  $field_instances['node-security_attribute-field_security_roles'] = array(
    'bundle' => 'security_attribute',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_security_roles',
    'label' => 'Security Roles',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Action');
  t('Client Specific attribute');
  t('Primary Page');
  t('Security Roles');
  t('Security attributes related to a custom build of the eCW software.');

  return $field_instances;
}
