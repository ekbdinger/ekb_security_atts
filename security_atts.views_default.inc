<?php
/**
 * @file
 * security_atts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function security_atts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'security_attribute_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Security Attribute Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Security Attributes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '250';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'title' => 'title',
    'field_action' => 'field_action',
    'field_client_specific_attribute' => 'field_client_specific_attribute',
    'field_pp_ent_reference' => 'field_pp_ent_reference',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_action' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_client_specific_attribute' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pp_ent_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="well">
  <p>This page contains all of the security attributes from the <a href="node/11219" target="_blank">V10 Security Attributes and Logs document.</a>  It is updated on regular basis.</p>
  <p>Use the search fields to search either by the security attribute title or the action. You can also filter by client specific security attributes for Correctional Health Services (CHS) and SeaWorld.</p>
</div>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pp_ent_reference_target_id']['id'] = 'field_pp_ent_reference_target_id';
  $handler->display->display_options['relationships']['field_pp_ent_reference_target_id']['table'] = 'field_data_field_pp_ent_reference';
  $handler->display->display_options['relationships']['field_pp_ent_reference_target_id']['field'] = 'field_pp_ent_reference_target_id';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Security Attribute';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_action']['id'] = 'field_action';
  $handler->display->display_options['fields']['field_action']['table'] = 'field_data_field_action';
  $handler->display->display_options['fields']['field_action']['field'] = 'field_action';
  $handler->display->display_options['fields']['field_action']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_action']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Client Specific attribute */
  $handler->display->display_options['fields']['field_client_specific_attribute']['id'] = 'field_client_specific_attribute';
  $handler->display->display_options['fields']['field_client_specific_attribute']['table'] = 'field_data_field_client_specific_attribute';
  $handler->display->display_options['fields']['field_client_specific_attribute']['field'] = 'field_client_specific_attribute';
  $handler->display->display_options['fields']['field_client_specific_attribute']['label'] = 'Client Specific';
  $handler->display->display_options['fields']['field_client_specific_attribute']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Related Primary Pages */
  $handler->display->display_options['fields']['field_pp_ent_reference']['id'] = 'field_pp_ent_reference';
  $handler->display->display_options['fields']['field_pp_ent_reference']['table'] = 'field_data_field_pp_ent_reference';
  $handler->display->display_options['fields']['field_pp_ent_reference']['field'] = 'field_pp_ent_reference';
  $handler->display->display_options['fields']['field_pp_ent_reference']['label'] = 'Primary Page';
  $handler->display->display_options['fields']['field_pp_ent_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pp_ent_reference']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_pp_ent_reference']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'security_attribute' => 'security_attribute',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Security Attribute';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  /* Filter criterion: Content: Action (field_action) */
  $handler->display->display_options['filters']['field_action_value']['id'] = 'field_action_value';
  $handler->display->display_options['filters']['field_action_value']['table'] = 'field_data_field_action';
  $handler->display->display_options['filters']['field_action_value']['field'] = 'field_action_value';
  $handler->display->display_options['filters']['field_action_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_action_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_action_value']['expose']['operator_id'] = 'field_action_value_op';
  $handler->display->display_options['filters']['field_action_value']['expose']['label'] = 'Action';
  $handler->display->display_options['filters']['field_action_value']['expose']['operator'] = 'field_action_value_op';
  $handler->display->display_options['filters']['field_action_value']['expose']['identifier'] = 'field_action_value';
  $handler->display->display_options['filters']['field_action_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  /* Filter criterion: Content: Client Specific attribute (field_client_specific_attribute) */
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['id'] = 'field_client_specific_attribute_tid';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['table'] = 'field_data_field_client_specific_attribute';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['field'] = 'field_client_specific_attribute_tid';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['expose']['operator_id'] = 'field_client_specific_attribute_tid_op';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['expose']['label'] = 'Client Specific';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['expose']['operator'] = 'field_client_specific_attribute_tid_op';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['expose']['identifier'] = 'field_client_specific_attribute_tid';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_client_specific_attribute_tid']['vocabulary'] = 'client_specific';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Security Attribute';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_action']['id'] = 'field_action';
  $handler->display->display_options['fields']['field_action']['table'] = 'field_data_field_action';
  $handler->display->display_options['fields']['field_action']['field'] = 'field_action';
  $handler->display->display_options['fields']['field_action']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_action']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Client Specific attribute */
  $handler->display->display_options['fields']['field_client_specific_attribute']['id'] = 'field_client_specific_attribute';
  $handler->display->display_options['fields']['field_client_specific_attribute']['table'] = 'field_data_field_client_specific_attribute';
  $handler->display->display_options['fields']['field_client_specific_attribute']['field'] = 'field_client_specific_attribute';
  $handler->display->display_options['fields']['field_client_specific_attribute']['label'] = 'Client Specific';
  $handler->display->display_options['fields']['field_client_specific_attribute']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Related Primary Pages */
  $handler->display->display_options['fields']['field_pp_ent_reference']['id'] = 'field_pp_ent_reference';
  $handler->display->display_options['fields']['field_pp_ent_reference']['table'] = 'field_data_field_pp_ent_reference';
  $handler->display->display_options['fields']['field_pp_ent_reference']['field'] = 'field_pp_ent_reference';
  $handler->display->display_options['fields']['field_pp_ent_reference']['label'] = 'Primary Page';
  $handler->display->display_options['fields']['field_pp_ent_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pp_ent_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pp_ent_reference']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_pp_ent_reference']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'content/security-attributes';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'content/security-attributes-admin';
  $export['security_attribute_search'] = $view;

  return $export;
}
