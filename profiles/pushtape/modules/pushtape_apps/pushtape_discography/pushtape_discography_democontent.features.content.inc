<?php
/**
 * @file
 * pushtape_discography_democontent.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pushtape_discography_democontent_content_defaults() {
  $content = array();

  $content['pushtape-discography-defaultcontent-1'] = (object) array(
    'exported_path' => 'content/demo-tape',
    'title' => 'The Demo Tape',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'album',
    'language' => 'und',
    'created' => '1341244859',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-1',
    'body' => array(),
    'field_tracklist' => array(
      'und' => array(
        0 => array(
          'target_id' => '1',
        ),
        1 => array(
          'target_id' => '2',
        ),
        2 => array(
          'target_id' => '3',
        ),
      ),
    ),
  );

  $content['pushtape-discography-defaultcontent-2'] = (object) array(
    'exported_path' => 'content/just-another-song',
    'title' => 'just another song',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'track',
    'language' => 'und',
    'created' => '1341244905',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-2',
    'body' => array(),
    'field_album' => array(
      'und' => array(
        0 => array(
          'target_id' => '4',
        ),
      ),
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'cc_asa',
        ),
      ),
    ),
  );

  $content['pushtape-discography-defaultcontent-3'] = (object) array(
    'exported_path' => 'content/lonesome-night',
    'title' => 'A lonesome night',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'track',
    'language' => 'und',
    'created' => '1341244684',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-3',
    'body' => array(),
    'field_album' => array(
      'und' => array(
        0 => array(
          'target_id' => '4',
        ),
      ),
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'cc_ancsa',
        ),
      ),
    ),
  );

  $content['pushtape-discography-defaultcontent-4'] = (object) array(
    'exported_path' => 'content/trying-too-easy',
    'title' => 'trying too easy',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'track',
    'language' => 'und',
    'created' => '1340758680',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-4',
    'body' => array(),
    'field_album' => array(
      'und' => array(
        0 => array(
          'target_id' => '4',
        ),
      ),
    ),
    'field_artist_term' => array(
      'und' => array(
        0 => array(
          'tid' => '2',
        ),
      ),
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'cc_asa',
        ),
      ),
    ),
    'field_release_date' => array(
      'und' => array(
        0 => array(
          'value' => '2012',
          'format' => NULL,
          'safe_value' => '2012',
        ),
      ),
    ),
  );

return $content;
}
