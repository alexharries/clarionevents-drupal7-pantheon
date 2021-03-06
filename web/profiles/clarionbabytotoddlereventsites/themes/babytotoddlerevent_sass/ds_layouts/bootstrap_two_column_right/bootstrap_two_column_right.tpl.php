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
  
  
  <?php if (!empty($top)): ?>
	  <div class="row">
	    <<?php print $top_wrapper; ?> class="<?php print $top_classes; ?>">
	      <?php print $top; ?>
	    </<?php print $top_wrapper; ?>>
	  </div>
  <?php endif; ?>
  
  <div class="row">
    <<?php print $left_wrapper; ?> class="<?php print $left_classes; ?> col-sm-9">
      <?php print $left;?>
    </<?php print $left_wrapper; ?>>
    <<?php print $right_wrapper; ?> class="<?php print $right_classes; ?> col-sm-3">
      <?php print $right;?>
    </<?php print $right_wrapper; ?>>
  </div>
  
  <?php if (!empty($bottom)): ?>
  <div class="row">
    <<?php print $bottom_wrapper; ?> class="<?php print $bottom_classes; ?>">
      <?php print $bottom; ?>
    </<?php print $bottom_wrapper; ?>>
  </div>
  <?php endif; ?>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
