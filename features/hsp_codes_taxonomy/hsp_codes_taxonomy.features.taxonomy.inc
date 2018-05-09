<?php
/**
 * @file
 * hsp_codes_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hsp_codes_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'hsp_codes' => array(
      'name' => 'HSP Codes',
      'machine_name' => 'hsp_codes',
      'description' => 'Lab codes for orders',
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
