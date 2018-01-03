<?php

/**
 * @file
 * _header--clarion-olympia-art-antiques-summer.tpl.php
 *
 * OAA header.
 */

?>

<div id="header">
  <div class="navbar-wrapper">
    <div class="container">
      <div class="row">
        <div class="col-xs-6 col-sm-3">
          <div class="logo">
            <?php if ($logo): ?>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                <img class="img-responsive" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
              </a>
            <?php else: ?>
              <h1 class="home-link-no-logo">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                  <?php print $site_name; ?>
                </a></h1>
            <?php endif; ?>
          </div>

          <div class="event-date"><?php print render($page['event_date']); ?></div>
        </div>

        <div class="col-xs-12 col-sm-6">
          <!--// MENU //-->
          <div class="row">
            <nav class="navbar navbar-default">
              <div class="container-fluid">
                <div class="navbar-header">
                  <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar" aria-expanded="false" aria-controls="navbar">
                    <span class="sr-only">Toggle navigation</span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                  </button>
                </div>

                <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
                  <div id="navbar" class="navbar-collapse collapse">

                    <?php if (!empty($primary_nav)): ?>
                      <?php print render($primary_nav); ?>
                    <?php endif; ?>
                    <?php if (!empty($secondary_nav)): ?>
                      <?php print render($secondary_nav); ?>
                    <?php endif; ?>
                    <?php if (!empty($page['navigation'])): ?>
                      <?php print render($page['navigation']); ?>
                    <?php endif; ?>

                  </div>
                <?php endif; ?>
              </div>
            </nav>
          </div>
          <!--// END: MENU //-->

          <div class="row">
            <div class="col-xs-12 col-sm-6">
              <?php print render($page['social_media']); ?>
            </div>

            <div class="hidden-xs col-sm-6">
              <?php print render($page['newsletter']); ?>
            </div>
          </div>
        </div>

        <!-- H&GF logo. -->
        <div class="col-xs-12 col-sm-2 hgf-logo-container">
          <?php print t('Part of <a class="hgf-logo-link" href="http://www.houseandgardenfestival.com" target="_blank">House And Garden Festival</a>'); ?>
        </div>
        <!-- /H&GF logo. -->

        <!--// END: COLUMN //-->
      </div>
      <!--// END: ROW //-->
    </div>
    <!--// END: CONTAINER //-->
  </div>
  <!--// END: NAVBAR-WRAPPER //-->
</div>
<!--// END: HEADER //-->

