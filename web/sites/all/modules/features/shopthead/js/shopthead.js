/**
 * @file: shopthead.js
 *
 * Little JS nips and tucks for the shopthead feature.
 */

var Drupal = Drupal || {};

(function($, Drupal) {
  "use strict";

  /**
   * If we have one or more Custom Content Paragraphs on the page, find pager
   * links in the paragraphs and make sure that they have a hashlink appended
   * so the user doesn't have to scroll back down the page when they click to
   * view the next/previous page of results.
   */
  Drupal.behaviors.shopTheAdPage = {
    attach: function(context, settings) {
      // Set the ID of the STA container.
      var shopTheAdContainerClass = '.shop-the-ad-container';

      // When the page loads, hide and position labels.
      $(shopTheAdContainerClass + ' .shop-the-ad-product .label').hide();

      // Position labels on page load or resize.
      $(shopTheAdContainerClass).each(function() {
        shopTheAdProductRepositionElements($(this));
      });

      $(window).resize(function() {
        $(shopTheAdContainerClass).each(function() {
          shopTheAdProductRepositionElements($(this));
        });
      })

      function shopTheAdProductRepositionElements($shopTheAdElement, shopTheAdImageId) {
        // Get the image ID.
        var shopTheAdImageId = $shopTheAdElement.find('.shop-the-ad-image').attr('id');

        // Get the current image width.
        var shopTheAdMainImage = document.getElementById(shopTheAdImageId);
        var shopTheAdMainImageWidth = shopTheAdMainImage.clientWidth;
        var shopTheAdMainImageHeight = shopTheAdMainImage.clientHeight;

        console.log(shopTheAdImageId, 'shopTheAdImageId');
        console.log(shopTheAdMainImage, 'shopTheAdMainImage');
        console.log(shopTheAdMainImageWidth, 'shopTheAdMainImageWidth');
        console.log(shopTheAdMainImageHeight, 'shopTheAdMainImageHeight');

        // Get the original image width.
        var shopTheAdMainImageWidthOriginal = shopTheAdMainImage.naturalWidth;
        var shopTheAdMainImageHeightOriginal = shopTheAdMainImage.naturalHeight;

        console.log(shopTheAdMainImageWidthOriginal, 'shopTheAdMainImageWidthOriginal');
        console.log(shopTheAdMainImageHeightOriginal, 'shopTheAdMainImageHeightOriginal');

        // Work out the scaling.
        var imageScale = shopTheAdMainImageWidth / shopTheAdMainImageWidthOriginal;

        console.log(imageScale, 'imageScale');

        // Go through each label and change its top and left positions to
        // reflect the image scale.
        $('#' + shopTheAdContainerClass + ' .shop-the-ad-product').each(function() {
          console.log($(this), 'This product');
          console.log($(this).attr('id'), 'This product ID');

          // Does the product have an attribute with its original CSS top
          // and left positions?
          var thisProductTopPosition = $(this).attr('top-original');
          console.log(thisProductTopPosition, 'thisProductTopPositionOriginal');

          if (typeof thisProductTopPosition == 'undefined') {
            thisProductTopPosition = parseInt($(this).css('top'), 10);
            $(this).attr('top-original', thisProductTopPosition);
          }

          var thisProductLeftPosition = $(this).attr('left-original');
          console.log(thisProductLeftPosition, 'thisProductLeftPositionOriginal');

          if (typeof thisProductLeftPosition == 'undefined') {
            thisProductLeftPosition = parseInt($(this).css('left'), 10);
            $(this).attr('left-original', thisProductLeftPosition);
          }

          console.log(thisProductTopPosition, 'thisProductTopPosition');
          console.log(thisProductLeftPosition, 'thisProductLeftPosition');

          // Get the markers' width and height.
          var markerWidth = $(this).find('.marker').innerWidth();
          var markerHeight = $(this).find('.marker').innerHeight();

          console.log(markerWidth, 'markerWidth');
          console.log(markerHeight, 'markerHeight');

          // Subtract half the marker div's width and height from the
          // scaled positions.
          var thisProductLeftPositionScaled = (thisProductLeftPosition * imageScale) - (markerWidth / 2);
          var thisProductTopPositionScaled = (thisProductTopPosition * imageScale);
          //var thisProductTopPositionScaled = (thisProductTopPosition * imageScale) - (markerHeight / 2);

          console.log(thisProductTopPositionScaled, 'thisProductTopPositionScaled');
          console.log(thisProductLeftPositionScaled, 'thisProductLeftPositionScaled');

          // Update the position.
          $(this).css('top', thisProductTopPositionScaled + 'px');
          $(this).css('left', thisProductLeftPositionScaled + 'px');
        });
      }

      // When a product marker is clicked, show/hide its label.
      $('#' + shopTheAdContainerClass + ' .shop-the-ad-product .marker').click(function() {
        console.log($(this));

        var $marker = $(this);

        // Get the adjacent label.
        var $label = $(this).siblings('.label');
        console.log($label, '$label');

        var labelWasVisible = false;

        if ($label.length) {
          if ($label.hasClass('visible')) {
            labelWasVisible = true;
          }
        }

        // Hide all labels.
        $('#' + shopTheAdContainerClass + ' .shop-the-ad-product .label').hide(200).removeClass('visible');

        // Remove active class from all markers.
        $('#' + shopTheAdContainerClass + ' .shop-the-ad-product .marker').removeClass('active');

        if ($label.length) {
          if (labelWasVisible) {
            console.log('Label was visible');
//                  $label.removeClass('visible');
//
//                  // Remove the active class from the marker, too.
//                  $marker.removeClass('active');
          }
          else {
            console.log('Label wasn\'t visible');
            $label.addClass('visible').show().css('overflow', 'visible');

            // Add the active class to the marker.
            $marker.addClass('active');
          }
        }
        else {
          console.log('No label found...?', $(this));
        }

        event.preventDefault;
      });
    }
  }
})(jQuery, Drupal);
