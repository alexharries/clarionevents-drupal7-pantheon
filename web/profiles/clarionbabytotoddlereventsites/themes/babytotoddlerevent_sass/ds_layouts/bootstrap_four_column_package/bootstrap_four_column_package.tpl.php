<?php
/**
 * @file
 * Bootstrap 5-7 template for Display Suite.
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  
  
  <div class="row">
	<?php // LEFT ELEMENTS ?>
    <div class="col-sm-2">
      <?php print $first_left; ?>
    </div>
    
    <div class="col-sm-4">
      <?php print $second_left; ?>
    </div>
    
    <?php // RIGHT ELEMENTS ?>
    <div class="col-sm-4">
      <?php print $first_right; ?>
    </div>
    
     <div class="col-sm-2">
      <?php print $second_right; ?>
    </div>
  </div>
 </div>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
