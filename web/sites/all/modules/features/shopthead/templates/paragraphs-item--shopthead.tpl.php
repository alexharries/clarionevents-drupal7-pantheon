<?php
/**
 * @file
 * paragraphs-item--shopthead.tpl.php
 */
?>

<div class="paragraphs-item paragraphs-item--shopthead">
  <div class="row">
    <div class="container">
      <!-- STA page HTML -->
      <div class="shop-the-ad-container" id="<?php print $shop_the_ad_container_id; ?>">
        <img alt="<?php print t('Shop the ad image.'); ?>" class="shop-the-ad-image" id="<?php print $shop_the_ad_image_id; ?>" src="<?php print image_style_url('shopthead_paragraph_image', $field_shopthead_image[0]['uri']); ?>"/>

        <!-- Labels. -->
        <?php foreach ($markers_data as $marker): ?>
          <div class="shop-the-ad-product label-<?php print $marker['labelpos']; ?>" id="<?php print $marker['html_id']; ?>">
            <div class="marker">
              &nbsp;
            </div>

            <div class="label">
              <?php print $marker['title']; ?>
              <?php print $marker['subtitle']; ?>
            </div>
          </div>
        <?php endforeach; ?>
        <!-- End labels. -->

      </div>
    </div>
  </div>
</div>
