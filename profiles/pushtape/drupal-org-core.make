;******************************************************************************
; This patches core according to http://drupal.org/node/1476014
;******************************************************************************

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.15
projects[drupal][patch][985814] = http://drupal.org/files/drupal-actions-985814-11-D7.patch
projects[drupal][patch][707484] = http://drupal.org/files/drupal-image_instance_checking-1559696-2.patch
projects[drupal][patch][1468686] = http://drupal.org/files/drupal-1468686-8.patch
projects[drupal][patch][1400256] = http://drupal.org/files/1400256-field_info_collate_fields-7.patch