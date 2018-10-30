<?php

/**
 * @file
 * Homepage highgligths grid OWL carousel
 *
 * It creates a grid carousel with columns formed by two element each.
 *
 * @author: Giovanni Capuano
 * @email: giovanni.capuano@clarionevents.com
 *
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="container-fluid">
  <div class="row">
    <?php foreach ($rows as $row_number => $row): ?>
      <div class="col-xs-12 col-sm-6 col-md-4">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>

