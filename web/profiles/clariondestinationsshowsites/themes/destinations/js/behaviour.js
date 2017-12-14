(function($) {
  Drupal.behaviors.behavior = {
    attach: function(context, settings) {
      // redirect to homepage
      $('.region-header .destination-logo').on('click', function() {
        window.location.href = Drupal.settings.clarionDestinationsShowCustomisations.homepageUrl;
      });

      //Quicktabs animation
      if ($('div.destination-quicktabs').hasClass('click-off')) {
        $('div.destination-quicktabs').children('h3.faq-styles-quicktabs-headers').css({
          'cursor': 'auto'
        });
        $('h3.faq-styles-quicktabs-headers').off('click');
      }
      else {
        $('h3.faq-styles-quicktabs-headers').on('click', function() {

          $(this).next('.body-hide-quicktabs').slideToggle(500);
          $(this).toggleClass('close');

        });
      }

      //Mobile Menu events
      //Main menu
      $('div.mobile-menu').on('click', function() {
        $('#menu').addClass('visible');
      });
      $('.region.region-menu h2').on('click', function() {
        $('#menu').removeClass('visible');
      });

      $('#menu ul.nice-menu li.menuparent').on('click', function(e) {
        if (typeof e.currentTarget == 'function') {
          if ($(e.currentTarget).hasClass('open')) {
            $(e.currentTarget).removeClass('open');
          }
          else {
            e.preventDefault();
            $(e.currentTarget).addClass('open');
          }
        }
      });


      $('#menu ul.nice-menu  li.menuparent > a').on('click', function(e) {
        if (typeof e.currentTarget == 'function') {
          if ($(e.currentTarget).hasClass("open")) {
            $(e.currentTarget).removeClass("open");
          }
          else {
            e.preventDefault();
            $(e.currentTarget).addClass("open");
          }
        }
      });
    }
  };

  Drupal.behaviors.googlefont = {
    attach: function(context, settings) {

      WebFontConfig = {
        google: {families: ['Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800:latin']}
      };
      (function() {
        var wf = document.createElement('script');
        wf.src = ('https:' == document.location.protocol ? 'https' : 'http') + '://ajax.googleapis.com/ajax/libs/webfont/1/webfont.js';
        wf.type = 'text/javascript';
        wf.async = 'true';
        var s = document.getElementsByTagName('script')[0];
        s.parentNode.insertBefore(wf, s);
      })();
    }
  };


  Drupal.behaviors.galleryEvents = {
    attach: function(context, settings) {

      $('.masonry-item').on('mouseenter', function(e) {
        $(e.currentTarget).children('.masonry-text').animate({'opacity': 1}, 1000);
      });
      $('.masonry-item').on('mouseleave', function(e) {
        $(e.currentTarget).children('.masonry-text').animate({'opacity': 0}, 1000);
      });

      //disable colorbox on mobile devices
      if (window.matchMedia) {
        // Establishing media check
        width700Check = window.matchMedia("(max-width: 700px)");
        if (width700Check.matches) {
          $.colorbox.remove();
          $(".main-gallery .masonry-item a").on("click", function(e) {
            e.preventDefault();
            window.location = $(e.currentTarget).next().children().children().attr('src');
          });

        }


      }
    }
  };
}(jQuery));
