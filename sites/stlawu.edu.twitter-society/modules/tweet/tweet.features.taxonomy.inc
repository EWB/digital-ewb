<?php
/**
 * @file
 * tweet.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tweet_taxonomy_default_vocabularies() {
  return array(
    'hashtags' => array(
      'name' => 'Hashtags',
      'machine_name' => 'hashtags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
