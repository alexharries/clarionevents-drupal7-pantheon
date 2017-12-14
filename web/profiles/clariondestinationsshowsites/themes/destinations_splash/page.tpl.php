<div id="splash">
  <div class="splash_contents">
    <div class="splash_image">
      <img src="<?php print url(path_to_theme()); ?>/images/20170927-destinationsshow-zoho-205-london-manchester-white.png" border="0" id="destinations_splash" alt=""/>
    </div>
    <div class="splash_buttons">
      <a href="<?php print url('london'); ?>"><img src="<?php print url(path_to_theme()); ?>/images/splash_button_london.png" border="0" id="splash_button_london" alt=""/></a>
      <a href="<?php print url('manchester'); ?>"><img src="<?php print url(path_to_theme()); ?>/images/splash_button_manchester.png" border="0" id="splash_button_manchester" alt=""/></a>
    </div>
    <div class="splash_text"><?php print render($page['content']); ?></div>
    <div class="splash_copyright"><?php print render($page['copyright']); ?></div>
  </div><!--splash_contents-->
</div><!--splash-->
