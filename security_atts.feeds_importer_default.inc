<?php
/**
 * @file
 * security_atts.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function security_atts_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = '_security_attribute_node_importer';
  $feeds_importer->config = array(
    'name' => ' security_attribute_node_importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Security Item',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Action',
            'target' => 'field_action',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => '2',
        'skip_hash_check' => 0,
        'bundle' => 'security_attribute',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['_security_attribute_node_importer'] = $feeds_importer;

  return $export;
}
