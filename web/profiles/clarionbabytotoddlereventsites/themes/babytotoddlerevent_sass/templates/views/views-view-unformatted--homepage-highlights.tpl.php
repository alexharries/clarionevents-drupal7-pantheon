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

<!--  Developer warning: this template contains a hard-coded
      Owl Carousel implementation. Arg :-( -->
<div class="owl-carousel-highlights carousel-left">
  <?php $count = 0 ?>
  <?php foreach ($rows as $id => $row): ?>

    <?php //Create div container ?>
    <?php if ($count == 0): ?>
      <div class="col-xs-12 col-sm-12" <?php if ($classes_array[$id]) {
        print ' class="' . $classes_array[$id] . '"';
      } ?>>
    <?php endif; ?>

    <?php //Increase the counter ?>
    <?php $count++; ?>

    <?php //Print Row ?>
    <?php print $row; ?>

    <?php //Close the div after two element get printed ?>
    <?php if ($count == 2): ?>
      </div>
      <?php $count = 0; ?>
    <?php endif; ?>
  <?php endforeach; ?>
</div>

<script type="text/javascript">
  <?php //Call OWL carousel ?>
  jQuery(document).ready(function() {
    jQuery(".owl-carousel-highlights").owlCarousel({

      // Most important owl features
      items: 3,
      itemsCustom: false,
      itemsDesktop: [1199, 3],
      itemsDesktopSmall: [980, 2],
      itemsTablet: [768, 2],
      itemsTabletSmall: false,
      itemsMobile: [479, 1],
      singleItem: false,
      itemsScaleUp: false,
      autoplayTimeout: 2000,
      navigation: true,
      navigationText: ["&laquo; previous", "next &raquo;"],
    });
  });
</script>
