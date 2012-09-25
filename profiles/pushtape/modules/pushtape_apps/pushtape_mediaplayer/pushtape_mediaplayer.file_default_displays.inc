<?php
/**
 * @file
 * pushtape_mediaplayer.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function pushtape_mediaplayer_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_default';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_rendered';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['audio__default__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_soundmanager2_inline_player';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'text' => 'filename',
  );
  $export['audio__default__file_field_soundmanager2_inline_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__media_soundcloud_audio';
  $file_display->weight = -50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '100%',
    'autoplay' => 0,
    'extra_params' => 'color: 2582fa, show_artwork: true, iframe: false',
  );
  $export['audio__default__media_soundcloud_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__media_large__file_field_file_default';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__media_large__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__media_large__file_field_file_rendered';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['audio__media_large__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__media_large__file_field_soundmanager2_inline_player';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'text' => 'filename',
  );
  $export['audio__media_large__file_field_soundmanager2_inline_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__media_large__media_soundcloud_audio';
  $file_display->weight = -50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '100%',
    'autoplay' => 0,
    'extra_params' => 'color: 2582fa, show_artwork: true, iframe: false',
  );
  $export['audio__media_large__media_soundcloud_audio'] = $file_display;


  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__media_small__media_soundcloud_audio';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '10%',
    'autoplay' => 0,
    'extra_params' => 'color: 2582fa, show_artwork: false, iframe: false',
  );
  $export['audio__media_small__media_soundcloud_audio'] = $file_display;

  return $export;
}
