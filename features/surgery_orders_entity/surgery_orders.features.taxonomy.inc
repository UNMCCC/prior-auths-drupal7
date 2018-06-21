<?php
/**
 * @file
 * surgery_orders.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function surgery_orders_taxonomy_default_vocabularies() {
  return array(
    'surgery_proc_names' => array(
      'name' => 'Surgery Proc Names',
      'machine_name' => 'surgery_proc_names',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
