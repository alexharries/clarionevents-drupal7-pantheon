<?php

/**
 * @file
 * _footer.tpl.php
 */

?>

<!-- FOOTER -->
<footer>
  <div class="container">
    <div id="quick-links" class="row">
      <div class="col-xs-12 col-sm-4 col-md-3">
        <?php print render($page['footer_column_one']); ?>
      </div>

      <div class="col-xs-6 col-sm-4 col-md-3">
        <?php print render($page['footer_column_two']); ?>
      </div>

      <div class="col-xs-6 col-sm-4 col-md-3">
        <?php print render($page['footer_column_three']); ?>
      </div>

      <div class="hidden-xs col-sm-4 col-md-3">
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


