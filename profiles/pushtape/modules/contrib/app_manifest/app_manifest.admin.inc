<?php

/**
 * Form callback for Open Apps manifest generation.
 */
function app_manifest_manifest_form($form, $form_state, $feature = NULL) {
  $manifest = app_manifest_get_manifest($feature);
  $form['manifest'] = array(
    '#type' => 'textarea',
    '#title' => t('Open Apps manifest'),
    '#description' => t("The generated code here is a starting place for writing an Open Apps manifest for this release version of !name. In some cases the code will need manual review or editing. If the text !fix_me appears, replace it with appropriate author and author_url information. Links marked !needs_review should be checked manually (and then the !needs_review text deleted). If the text !add_version appears, it should be replaced with the relevant version of a library. When you're done editing, copy the manifest and paste it into an App Server app release node manifest field.", array('!fix_me' => 'FIX_ME', '!needs_review' => 'NEEDS_REVIEW', '!add_version' => 'ADD_VERSION', '!name' => $feature->info['name'])),
    '#default_value' => $manifest,
    '#rows' => 35,
  );
  return $form;
}

