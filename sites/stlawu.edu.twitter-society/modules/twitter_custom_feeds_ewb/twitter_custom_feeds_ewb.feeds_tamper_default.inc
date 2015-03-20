<?php
/**
 * @file
 * twitter_custom_feeds_ewb.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function twitter_custom_feeds_ewb_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'tweets_1-hashtags-explode';
  $feeds_tamper->importer = 'tweets_1';
  $feeds_tamper->source = 'Hashtags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Explode';
  $export['tweets_1-hashtags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'tweets_1-hashtags-explode_plus';
  $feeds_tamper->importer = 'tweets_1';
  $feeds_tamper->source = 'Hashtags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '+',
    'limit' => '',
    'real_separator' => '+',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode on +';
  $export['tweets_1-hashtags-explode_plus'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'tweets_1-hashtags-trim';
  $feeds_tamper->importer = 'tweets_1';
  $feeds_tamper->source = 'Hashtags';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '[ ] \'u u\' u " ',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Trim';
  $export['tweets_1-hashtags-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'tweets_1-hashtags-urldecode';
  $feeds_tamper->importer = 'tweets_1';
  $feeds_tamper->source = 'Hashtags';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'URL Decode';
  $export['tweets_1-hashtags-urldecode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'tweets_1-text-urldecode';
  $feeds_tamper->importer = 'tweets_1';
  $feeds_tamper->source = 'text';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL Decode';
  $export['tweets_1-text-urldecode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'tweets_1-user_id-urldecode';
  $feeds_tamper->importer = 'tweets_1';
  $feeds_tamper->source = 'user_id';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL Decode';
  $export['tweets_1-user_id-urldecode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'tweets_1-user_screen_name-urldecode';
  $feeds_tamper->importer = 'tweets_1';
  $feeds_tamper->source = 'user_screen_name';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL Decode';
  $export['tweets_1-user_screen_name-urldecode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'twitter_1-hashtags-trim';
  $feeds_tamper->importer = 'twitter_1';
  $feeds_tamper->source = 'Hashtags';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '[]\'',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['twitter_1-hashtags-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'twitter_users_1-user_description-urldecode';
  $feeds_tamper->importer = 'twitter_users_1';
  $feeds_tamper->source = 'user_description';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL Decode';
  $export['twitter_users_1-user_description-urldecode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'twitter_users_1-user_location-urldecode';
  $feeds_tamper->importer = 'twitter_users_1';
  $feeds_tamper->source = 'user_location';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL Decode';
  $export['twitter_users_1-user_location-urldecode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'twitter_users_1-user_screen_name-urldecode';
  $feeds_tamper->importer = 'twitter_users_1';
  $feeds_tamper->source = 'user_screen_name';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL Decode';
  $export['twitter_users_1-user_screen_name-urldecode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'twitter_users_1-user_url-urldecode';
  $feeds_tamper->importer = 'twitter_users_1';
  $feeds_tamper->source = 'user_url';
  $feeds_tamper->plugin_id = 'urldecode';
  $feeds_tamper->settings = array(
    'method' => 'legacy',
    'function' => 'urldecode',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'URL Decode';
  $export['twitter_users_1-user_url-urldecode'] = $feeds_tamper;

  return $export;
}
