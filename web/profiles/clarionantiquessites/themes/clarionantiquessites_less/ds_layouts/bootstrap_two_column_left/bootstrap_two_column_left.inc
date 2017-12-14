<?php
function ds_bootstrap_two_column_left() {
  return array(
    'label' => t('Bootstrap Generic page two column Left'),
    'regions' => array(
      'top_left' => t('Top Left'),
      'top_right' => t('Top Right'),
      'bottom' => t('Bottom'),
    ),
    // Add this line if there is a default css file.
    'css' => FALSE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}