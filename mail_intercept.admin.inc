<?php
/**
 * @file
 * Mail Intercept module administrative page
 */


/**
 * Return the admin settings form.
 */
function mail_intercept_settings_form($form, &$form_state) {
  $config = config('mail_intercept.settings');

  $form['#config'] = 'mail_intercept.settings';
  $form['mail_intercept_disable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable mail processing'),
    '#description' => t('Check this box to disable sending of emails.'),
    '#default_value' => $config->get('mail_intercept_disable'),
  );

  $form['mail_intercept_handler'] = array(
    '#type' => 'select',
    '#title' => t('Handler for disabled email'),
    '#description' => t('Select how disabled email should be handled.'),
    '#options' => array(
      0 => t('No action'),
      1 => t('Echo to screen'),
      2 => t('Write to /tmp file'),
    ),
    '#default_value' => $config->get('mail_intercept_handler'),
  );

  return system_settings_form($form);
}
