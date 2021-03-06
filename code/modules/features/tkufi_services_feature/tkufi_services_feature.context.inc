<?php
/**
 * @file
 * tkufi_services_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tkufi_services_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service_description';
  $context->description = 'Content type view';
  $context->tag = 'services';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'service' => 'service',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-driveturku_services-place' => array(
          'module' => 'views',
          'delta' => 'driveturku_services-place',
          'region' => 'after_content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content type view');
  t('services');
  $export['service_description'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'services_list';
  $context->description = '';
  $context->tag = 'service';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services/list*' => 'services/list*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-62726f00262b5eba1b09fdf630f556dc' => array(
          'module' => 'views',
          'delta' => '62726f00262b5eba1b09fdf630f556dc',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('service');
  $export['services_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'services_map';
  $context->description = '';
  $context->tag = 'service';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services/map*' => 'services/map*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5465ffb853360ad59bff291260bd4532' => array(
          'module' => 'views',
          'delta' => '5465ffb853360ad59bff291260bd4532',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('service');
  $export['services_map'] = $context;

  return $export;
}
