<?php

/**
 * @file
 * _footer--clarion-olympia-art-antiques-summer.tpl.php
 */

?>

<!-- FOOTER -->
<footer>
  <div class="container">
    <div id="quick-links" class="row">
      <div class="col-xs-6 col-md-6 footer-column-one">
        <p>
          <a href="<?php print url('<front>'); ?>" class="olympia-art-antiques-footer-logo"><?php print t('Olympia Art Antiques'); ?></a>

          <a href="http://www.houseandgardenfestival.com" target="_blank" class="hgf-logo-container"><?php print t('Part of <span class="hgf-logo-link">House And Garden Festival</span>'); ?></a>
        </p>


        <?php print render($page['footer_column_one']); ?>
      </div>

      <div class="col-xs-6 col-sm-4 col-md-2 footer-column-two">
        <?php print render($page['footer_column_two']); ?>
      </div>

      <div class="col-xs-6 col-sm-4 col-md-2 footer-column-three">
        <?php print render($page['footer_column_three']); ?>
      </div>

      <div class="hidden-xs col-sm-4 col-md-2 footer-column-four">
        <?php print render($page['footer_column_four']); ?>
      </div>
    </div>

    <div id="copyright">
      <div class="row">
        <div class="col-xs-12 col-md-10">
          <?php print render($page['footer_copyright']); ?>
        </div>
        <div class="col-xs-12 col-md-2">
          <p class="text-right"><a href="#">Back to top</a></p>
        </div>
      </div>

    </div>
  </div>
</footer>


