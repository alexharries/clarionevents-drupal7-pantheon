<div id="wrapper_outer">
  <div id="wrapper">

    <div id="mobile_slide_wrap">
      <div id="mobile_slide"></div>
      <div id="mobile_content">
        <div id="mobile_inner_wrapper">

          <?php if (!empty($page['account'])): ?>
            <div id="account">
              <div class="container">
                <?php print render($page['account']); ?>
              </div>
            </div>
          <?php endif; ?>

          <?php if ($page['slideshow']): ?>
            <div id="slideshow"><?php print render($page['slideshow']); ?></div><?php endif; ?>

          <div id="header" class="page_width">
            <?php print render($page['header']); ?>
          </div><!--header-->

          <div id="menu" class="page_width">
            <?php print render($page['menu']); ?>
            <div id="mobile_menu_close_button">
              <img src="<?php print url(path_to_theme()); ?>/images/mobile_menu_close_button.png" onclick="jQuery('#menu').removeClass('visible');jQuery('#mobile_menu_button').show();jQuery('#mobile_menu_close_button').hide();"/>
            </div>
          </div><!--menu-->

          <?php if ($page['book']): ?>
            <div id="book_button">
              <?php print render($page['book']); ?>
            </div><!--book_button-->
          <?php endif; ?>

          <?php if ($page['content_header']): ?>
            <div id="content_header" class="page_width"><?php print render($page['content_header']); ?></div><?php endif; ?>
          <?php if ($page['content_top_buttons']): ?>
            <div id="content_top_buttons" class="page_width"><?php print render($page['content_top_buttons']); ?></div><?php endif; ?>

          <div id="content" class="page_width">

            <div id="left">

              <div id="main_content_wrapper">
                <div id="main_content">

                  <?php if ($title): ?>
                    <h1 class="page_title"><?php print $title; ?></h1><?php endif; ?>

                  <?php // print $breadcrumb; ?>
                  <?php if ($show_messages && $messages): print $messages; endif; ?>
                  <?php if ($tabs): ?>
                    <div class="tabs">
                      <?php print render($tabs); ?>
                    </div>
                  <?php endif; ?>

                  <?php if ($action_links): ?>
                    <ul class="action-links">
                      <?php print render($action_links); ?>
                    </ul>
                  <?php endif; ?>

                  <?php print render($page['content']); ?>
                  <div class="clear"></div>

                </div><!--main_content-->
              </div><!--main_content_wrapper-->

              <?php if ($page['mobile_buttons']): ?>
                <div id="mobile_buttons"><?php print render($page['mobile_buttons']); ?></div><?php endif; ?>

              <?php if ($page['content_bottom_left'] || $page['content_bottom_right']): ?>

                <div id="content_bottom_wrapper">

                  <?php if ($page['content_bottom_left']): ?>
                    <div id="content_bottom_left">
                      <div class="box_padding">
                        <?php print render($page['content_bottom_left']); ?>
                        <div class="clear"></div>
                      </div><!--box_padding-->
                    </div><!--content_bottom_left-->
                  <?php endif; ?>

                  <?php if ($page['content_bottom_right']): ?>
                    <div id="content_bottom_right">
                      <div class="box_padding">
                        <?php print render($page['content_bottom_right']); ?>
                        <div class="clear"></div>
                      </div><!--box_padding-->
                    </div><!--content_bottom_right-->
                  <?php endif; ?>

                  <div class="clear"></div>

                </div><!--content_bottom_wrapper-->
                <div class="clear"></div>
              <?php endif; ?>

            </div><!--left-->

            <div id="right">
              <?php print render($page['right']); ?>
              <div class="clear"></div>
            </div><!--right-->

            <div class="clear"></div>

            <?php if ($page['content_bottom_fullwidth']): ?>
              <div id="content_bottom_fullwidth">
                <?php print render($page['content_bottom_fullwidth']); ?>
                <div class="clear"></div>
              </div><!--content_bottom_fullwidth-->
            <?php endif; ?>

          </div><!--content-->

          <div id="footer" class="page_width">
            <div id="footer_padding">
              <div id="footer_left"><?php print render($page['footer_left']); ?>
                <div id="mobile_social"><?php print render($page['mobile_social']); ?></div>
              </div>
              <div id="footer_right"><?php print render($page['footer_right']); ?></div>
              <div class="clear"></div>
            </div><!--footer_padding-->
          </div><!--footer-->

        </div><!--mobile_inner_wrapper-->
      </div><!--mobile_content-->
      <div class="clear"></div>
    </div><!--mobile_slide_wrap-->

  </div><!--wrapper-->
</div><!--wrapper_outer-->
