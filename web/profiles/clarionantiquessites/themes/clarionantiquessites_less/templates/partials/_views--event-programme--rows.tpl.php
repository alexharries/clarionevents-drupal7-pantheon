<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

  <?php if (!empty($title)): ?>
    <div class="col-xs-12 event-group-title">
      <h3><?php print $title; ?></h3>
    </div>
  <?php endif; ?>

  <?php foreach ($rows as $id => $row): ?>
    <div class="col-xs-12 col-sm-6 event-row">
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    </div>
  <?php endforeach; ?>

