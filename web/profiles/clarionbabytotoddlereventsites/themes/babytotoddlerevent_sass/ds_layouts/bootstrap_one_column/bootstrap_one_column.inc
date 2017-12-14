<?php
function ds_bootstrap_one_column() {
  return array(
    'label' => t('Bootstrap One Column'),
    'regions' => array(
      'top' => t('Top'),
      'central' => t('Central'),
      'bottom' => t('Bottom'),
    ),
    // Add this line if there is a default css file.
    'css' => FALSE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}