(function($) {

  Drupal.behaviors.menuButton = {
    attach: function(context, settings) {

      $(document).ready(function() {

        if ($(window).width() > 600) {
          if (typeof(Storage) !== "undefined") {
            if (sessionStorage.togglestatus) {
              $('#page-wrapper').attr('class', sessionStorage.togglestatus);
            }
            else {
              sessionStorage.togglestatus = $('#page-wrapper').attr('class');
            }
          }

        }

        $('.toggle-nav').click(function() {

          $('#page-canvas').css({
            '-moz-transition': '300ms ease all',
            '-ms-transition': '300ms ease all',
            '-o-transition': '300ms ease all',
            '-webkit-transition': '300ms ease all',
            'transition': '300ms ease all'
          });
          // Calling a function in case you want to expand upon this.
          if ($('#page-wrapper').hasClass('show-nav')) {
            // Do things on Nav Close
            if ($(window).width() > 600) {
              if (typeof(Storage) !== "undefined") {
                sessionStorage.togglestatus = '';
              }
            }

            $('#page-wrapper').removeClass('show-nav');
          }
          else {
            // Do things on Nav Open
            $('#page-wrapper').addClass('show-nav');
            if ($(window).width() > 600) {
              if (typeof(Storage) !== "undefined") {
                sessionStorage.togglestatus = 'show-nav';
              }
            }

          }

          $(this).delay(1000).queue(function() {

            // your Code | Function here
            reloadMasonryVariable();
            $(this).dequeue();

          });

        });

      });
    }
  };


  function reloadMasonryVariable() {
    var grid = jQuery('.masonry-gallery').imagesLoaded(function() {
      // init Masonry after all images have loaded
      grid.masonry({
        // set itemSelector so .grid-sizer is not used in layout
        itemSelector: '.masonry-item',
        columnWidth: '.masonry-item',
        // percentPosition: true
        gutter: 0,
      });
    });
  };

  Drupal.behaviors.reloadMasonry = {
    attach: function(context, settings) {
      $(window).load(function() {
        $(document).ready(function() {
          $('body').bind('views_infinite_scroll_updated', function() {
            $('.masonry').masonry('reload');
          });
        });
      });
    }
  };

  Drupal.behaviors.mobileCollapsePrevent = {
    attach: function(context, settings) {
      $(window).load(function() {
        $(document).ready(function() {
          $('.toggle-title').click(function(e) {
            if ($(e.currentTarget).next().hasClass("mobile-toggle")) {
              $(e.currentTarget).next().removeClass("mobile-toggle");
            }
            else {
              $(e.currentTarget).next().addClass("mobile-toggle");
            }
            var grid = jQuery('.masonry-gallery').imagesLoaded(function() {
              // init Masonry after all images have loaded
              grid.masonry({
                // set itemSelector so .grid-sizer is not used in layout
                itemSelector: '.masonry-item',
                columnWidth: '.masonry-item',
                percentPosition: true
              });
            });
          });
        });
      });
    }
  };


  Drupal.behaviors.addGridSizerToMasonry = {
    attach: function(context, settings) {
      $('.masonry .grid').prepend('<div class="grid-sizer col-xs-12 col-sm-4 col-md-3"></div>');
      $(document).ready(function() {
        var $grid = $('.masonry').imagesLoaded(function() {
          // init Masonry after all images have loaded
          $grid.masonry({
            // set itemSelector so .grid-sizer is not used in layout
            itemSelector: '.grid-item',
            columnWidth: '.grid-sizer',
            percentPosition: true
          });
        });
      });


    }
  };

  Drupal.behaviors.removeMenuClass = {
    attach: function(context, settings) {
      $('.social-media .menu').removeClass('nav');
    }
  };

  Drupal.behaviors.AccordionGrouping = {
    attach: function(context, settings) {
      var count = 0;
      if (document.getElementById("accordion")) {
        $('.view-workshops > .view-content > h3').each(function() {
          count++;
          //$(this).addClass('panel-title accordion-toggle');
          //$(this).wrap('<div class="panel-heading collapsed" data-toggle="collapse" data-parent="#accordion" data-target="#collapse'+ count +'" aria-controls="collapse'+ count +'">');
          $('span', this).wrap('<a data-toggle="collapse" data-parent="#accordion" href="#collapse' + count + '" class="ds-bootstrap_accordion collapsed"></a>');
          $('a', this).append('<i class="indicator fa fa-angle-down fa-lg pull-right" aria-hidden="true"></i>');
        });
        count = 0;
        var numberofcontent = 0;
        $('.view-workshops > .view-content > .views-row.panel').each(function() {
          if ($(this).prev().is('h3')) {
            count++;
          }
          $(this).addClass('panel-body');
          $(this).wrap('<div class="minipanel minipanel' + count + '"></div>');
          numberofcontent++;
        });

        for (i = 0; i <= count; i++) {
          $('.minipanel' + i).wrapAll('<div  id="collapse' + i + '" class="panel-collapse collapse"></div>');
        }
      }

    }
  };

  Drupal.behaviors.infiniteScrollInvoked = {
    attach: function(context, settings) {
      $(window).load(function() {
        $(document).ready(function() {
          $('body').bind('views_infinite_scroll_updated', function() {
            flagvalue = 0;
            $(".view-exhibitor-list h3").each(function() {

              if (flagvalue !== 0) {
                if ($(this).text().toUpperCase() == flagvalue) {
                  $(this).remove();

                }
              }
              flagvalue = $(this).text().toUpperCase();

            });
          });
        });
      });
    }
  };

  Drupal.behaviors.uppercaseFunction = {
    attach: function(context, settings) {
      $(window).load(function() {
        $(document).ready(function() {
          flagvalue = 0;
          $(".view-exhibitor-list h3").each(function() {

            if (flagvalue !== 0) {
              if ($(this).text().toUpperCase() == flagvalue) {
                $(this).remove();

              }
            }
            flagvalue = $(this).text().toUpperCase();

          });
        });
      });
    }
  };


  Drupal.behaviors.exhibitorsPlaceholders = {
    attach: function(context, settings) {
      $(window).load(function() {
        $(document).ready(function() {
          $(document).ready(function() {
            $('div.view-exhibitor-list div.views-exposed-form div.views-widget-filter-title input.form-control').attr("placeholder", "Search");
            $('div.view-exhibitor-list div.views-exposed-form div.views-widget-filter-field_categories_tid select.form-select option:first-child').text("Categories");
          });

        });
      });
    }
  };

  Drupal.behaviors.addButtonClass = {
    attach: function(context, settings) {
      $('.ticket-packages .wrapper .field-name-node-link a').addClass('btn btn-primary');
      $('.node-package-offer .button a').addClass('btn btn-secondary btn-lg');
    }
  };

  Drupal.behaviors.TwitterFeedHeight = {
    attach: function(context, settings) {
      $(window).load(function() {
        $(document).ready(function() {
          $('#block-views-tweets-block').css({
            'height': $('.view-homepage-ctas').height() + 'px',
            'overflow': 'hidden'
          });

          $('.view-tweets .view-content').css({
            'height': ($('#block-views-tweets-block').height() - 90) + 'px',
            'overflow-y': 'scroll'
          });

          $(window).resize(function() {
            $('#block-views-tweets-block').css({
              'height': $('.view-homepage-ctas').height() + 'px'
            });
          });

          $('.view-tweets .view-content').css({
            'height': ($('#block-views-tweets-block').height() - 90) + 'px',
            'overflow-y': 'scroll'
          });
        });
      });
    }
  };

})(jQuery);
