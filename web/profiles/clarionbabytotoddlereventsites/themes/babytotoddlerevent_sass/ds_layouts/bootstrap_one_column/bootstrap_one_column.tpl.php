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
  
  <?php if (!empty($central)): ?>
  <div class="row">
    <<?php print $central_wrapper; ?> class="<?php print $central_classes; ?>">
      <?php print $central; ?>
    </<?php print $central_wrapper; ?>>
  </div>
  <?php endif; ?>
  
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
