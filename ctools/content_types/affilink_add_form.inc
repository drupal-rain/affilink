<?php

$plugin = array(
  'title' => t('Affilink add form'),
  'category' => 'Affilink',
);

function affilink_affilink_add_form_content_type_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->title = t('Add new affiliate link');
  module_load_include('inc', 'redirect', 'redirect.admin');
  $form = drupal_get_form('redirect_edit_form');
  $block->content['form'] = $form;

  return $block;
}
