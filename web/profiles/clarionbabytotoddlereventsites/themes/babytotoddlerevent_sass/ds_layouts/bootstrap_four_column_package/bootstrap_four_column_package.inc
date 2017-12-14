<?php
function ds_bootstrap_four_column_package() {
  return array(
    'label' => t('Bootstrap Four Columns: 2-4-4-2'),
    'regions' => array(
      'first_left' => t('First Left'),
      'second_left' => t('Second Left'),
      'first_right' => t('First Right'),
      'second_right' => t('Second Right'),
    ),
    // Add this line if there is a default css file.
    'css' => FALSE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}