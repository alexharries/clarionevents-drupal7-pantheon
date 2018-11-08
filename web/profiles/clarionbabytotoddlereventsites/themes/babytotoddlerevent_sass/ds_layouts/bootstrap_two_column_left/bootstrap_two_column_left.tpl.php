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
    <?php if (!empty($top)): print $top; endif; ?>
    <<?php print $top_right_wrapper; ?> class="<?php print $top_right_classes; ?> col-sm-9 col-sm-push-3">
      <?php print $top_right;?>
    </<?php print $top_right_wrapper; ?>>
    <<?php print $top_left_wrapper; ?> class="<?php print $top_left_classes; ?> col-sm-3 col-sm-pull-9">
      <?php print $top_left;?>
    </<?php print $top_left_wrapper; ?>>
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
