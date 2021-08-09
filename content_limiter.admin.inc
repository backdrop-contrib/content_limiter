<?php
/**
 * @file
 * Admin page callbacks for the Content Limiter module.
 */

function content_limiter_settings($form, &$form_state) {
  $config = config('content_limiter.settings');
  $attributes = 'style="margin-bottom: 30px;"';

  $form['#config'] = 'content_limiter.settings';
  $form['disable_limiting'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable Limiting'),
    '#description' => t('Override content type settings and disable all limiting.'),
    '#default_value' => $config->get('disable_limiting'),
  );
  $form['cl_max_deletion'] = array(
    '#type' => 'number',
    '#title' => t('Node deletion limit'),
    '#description' => t('Limit how many nodes can be deleted while saving new content.<br><small>Determines how aggressively content limiter reduces the amount of nodes.</small>'),
    '#default_value' => $config->get('cl_max_deletion'),
  );
  $form['cl_message'] = array(
    '#type' => 'checkbox',
    '#title' => t('Node saved message'),
    '#description' => t('Enable a site message after saving and limiting was activated.'),
    '#default_value' => $config->get('cl_message'),
  );
  $form['cl_warning'] = array(
    '#type' => 'checkbox',
    '#title' => t('Node creation warning'),
    '#description' => t('Enable a warning message when limiting is detected.'),
    '#default_value' => $config->get('cl_warning'),
  );
  $form['cl_logging'] = array(
    '#type' => 'checkbox',
    '#title' => t('Database logging'),
    '#description' => t('Enable watchdog entries for node deletion events.'),
    '#default_value' => $config->get('cl_logging'),
  );

  return system_settings_form($form);
}

