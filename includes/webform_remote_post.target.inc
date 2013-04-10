<?php

/**
 * @file
 * Webform Remote Post URL single target edit page.
 */

/**
 * Form for configuring an individual remote post target settings.
 * @param array $form
 * @param array $form_state
 * @param array $webform_node An array representing a webform node.
 * @param integer $target_id The ID of the post target.
 */
function webform_remote_post_target_edit_form($form, &$form_state, $webform_node, $target_id){
  $form['#tree'] = TRUE;
  $form['#node'] = $webform_node;

  // Internal to the form and never displayed to the screen.
  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $webform_node->nid,
  );

  // Form elements for a remote post target settings. Actually rendered by
  // the theme_webform_remote_post_target_edit_form function below.
  $form['edit']['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#description' => t('The name of the remote system as displayed in the table above. E.g. "My CRM system"'),
    '#size' => 20,
    '#maxlength' => 60,
    '#required' => FALSE,
  );

  $form['edit']['url'] = array(
    '#type' => 'textfield',
    '#title' => t('Target URL'),
    '#description' => t('The full URL to POST to. E.g. http://www.mycrm.com/form_handler.php'),
    '#size' => 100,
    '#maxlength' => 500,
    '#required' => TRUE,
  );

  // Add the submit button.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save remote post settings'),
    '#weight' => 20,
  );
  return $form;
}

/**
 * Theme the remote post settings section of the node form.
 * @param array $variables
 *   An array representing the form, with these keys:
 *   - form: the form array.
 *
 * @return array
 *   Formatted HTML form, ready for display.
 */
function theme_webform_remote_post_target_edit_form($variables) {
  $form = $variables['form'];
  $children = element_children($form, TRUE);
  return drupal_render_children($form, $children);
}
