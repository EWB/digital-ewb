<?php
/**
 * @file
 * twitter_custom_feeds_ewb.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function twitter_custom_feeds_ewb_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tweets_1';
  $feeds_importer->config = array(
    'name' => 'Tweets-1',
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
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'user_id',
            'target' => 'guid',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'user_screen_name',
            'target' => 'field_tweet_author:label',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'text',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Hashtags',
            'target' => 'field_hashtags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'user_screen_name',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tweet',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['tweets_1'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'twitter_users_1';
  $feeds_importer->config = array(
    'name' => 'Twitter-Users-1',
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
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'user_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'user_id',
            'target' => 'field_user_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'user_screen_name',
            'target' => 'field_user_screen_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'user_screen_name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'user_followers_count',
            'target' => 'field_user_followers_count',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'user_description',
            'target' => 'field_user_description',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'user_url',
            'target' => 'field_user_url:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'user_statuses_count',
            'target' => 'field_user_statuses_count',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'user_location',
            'target' => 'field_user_geolocation',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'twitter_user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['twitter_users_1'] = $feeds_importer;

  return $export;
}
