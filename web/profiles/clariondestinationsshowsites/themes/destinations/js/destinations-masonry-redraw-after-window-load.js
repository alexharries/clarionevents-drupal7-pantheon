/**
 * @file
 * Reload Masonry after window loads.
 */

(function($) {
  $(window).load(function() {
    if ($(".masonry").length) {
      $(".masonry").masonry("reload");
    }
  });
})(jQuery);
