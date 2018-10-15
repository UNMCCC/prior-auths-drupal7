<?php
/**
 * @file
 * pa_daily_productivity_bundles.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pa_daily_productivity_bundles_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_date'.
  $field_bases['field_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_pa_add_imadrid'.
  $field_bases['field_pa_add_imadrid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_add_imadrid',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_gjcoleman'.
  $field_bases['field_pa_added_gjcoleman'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_gjcoleman',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_ldimas'.
  $field_bases['field_pa_added_ldimas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_ldimas',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_pcascante'.
  $field_bases['field_pa_added_pcascante'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_pcascante',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_phong'.
  $field_bases['field_pa_added_phong'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_phong',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_ravaldez'.
  $field_bases['field_pa_added_ravaldez'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_ravaldez',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_rojaramillo'.
  $field_bases['field_pa_added_rojaramillo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_rojaramillo',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_romgonzales'.
  $field_bases['field_pa_added_romgonzales'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_romgonzales',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_rotafoya'.
  $field_bases['field_pa_added_rotafoya'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_rotafoya',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_sreyes'.
  $field_bases['field_pa_added_sreyes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_sreyes',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_added_wigriego'.
  $field_bases['field_pa_added_wigriego'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_added_wigriego',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_gjcoleman'.
  $field_bases['field_pa_completed_gjcoleman'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_gjcoleman',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_imadrid'.
  $field_bases['field_pa_completed_imadrid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_imadrid',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_ldimas'.
  $field_bases['field_pa_completed_ldimas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_ldimas',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_pcascante'.
  $field_bases['field_pa_completed_pcascante'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_pcascante',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_phong'.
  $field_bases['field_pa_completed_phong'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_phong',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_ravaldez'.
  $field_bases['field_pa_completed_ravaldez'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_ravaldez',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_rojaramillo'.
  $field_bases['field_pa_completed_rojaramillo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_rojaramillo',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_romgonzales'.
  $field_bases['field_pa_completed_romgonzales'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_romgonzales',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_rotafoya'.
  $field_bases['field_pa_completed_rotafoya'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_rotafoya',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_sreyes'.
  $field_bases['field_pa_completed_sreyes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_sreyes',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_completed_wigriego'.
  $field_bases['field_pa_completed_wigriego'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_completed_wigriego',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_gjcoleman'.
  $field_bases['field_pa_progress_gjcoleman'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_gjcoleman',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_imadrid'.
  $field_bases['field_pa_progress_imadrid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_imadrid',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_ldimas'.
  $field_bases['field_pa_progress_ldimas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_ldimas',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_pcascante'.
  $field_bases['field_pa_progress_pcascante'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_pcascante',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_pha'.
  $field_bases['field_pa_progress_pha'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_pha',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_ravaldez'.
  $field_bases['field_pa_progress_ravaldez'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_ravaldez',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_rojaramillo'.
  $field_bases['field_pa_progress_rojaramillo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_rojaramillo',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_romgonzales'.
  $field_bases['field_pa_progress_romgonzales'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_romgonzales',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_rotafoya'.
  $field_bases['field_pa_progress_rotafoya'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_rotafoya',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_pa_progress_sreyes'.
  $field_bases['field_pa_progress_sreyes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pa_progress_sreyes',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'field_encrypt' => array(
        'encrypt' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
