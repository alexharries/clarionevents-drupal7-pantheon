<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="row">

  <?php $counter = 0; ?>

  <?php foreach ($rows as $id => $row): ?>

  <div<?php print !empty($classes_array[$id]) ? ' class="' . $classes_array[$id] . '"' : ''; ?>>

    <?php print $row; ?>
  </div>

  <?php $counter++; ?>

  <?php
  // If this row counter is a multiple of two, add a break.
  if ($counter % 2 == 0): ?>

</div>
<div class="row">

  <?php endif; ?>

  <?php endforeach; ?>
</div>
