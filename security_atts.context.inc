<?php
/**
 * @file
 * security_atts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function security_atts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'security_attribute';
  $context->description = '';
  $context->tag = 'security attribute';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'security_attribute' => 'security_attribute',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'General Role' => 'General Role',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-security-attribute-links' => array(
          'module' => 'menu',
          'delta' => 'menu-security-attribute-links',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('security attribute');
  $export['security_attribute'] = $context;

  return $export;
}
