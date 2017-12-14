(function($) {
  Drupal.behaviors.footerMenus = {
    attach: function(context, settings) {
      $('#quick-links section').find('h1').replaceWith(function() {
        return '<p class="block-title">' + $(this).text() + '</p>';
      });

      $('#quick-links section').find('h2').replaceWith(function() {
        return '<p class="block-title">' + $(this).text() + '</p>';
      });

    }
  };

  /*
  Drupal.behaviors.menuHover = {
    attach: function (context, settings) {

      //alert($(window).width());
      if ($(window).width() > 767) {

        $('.dropdown-toggle').click(function() {
          var location = $(this).attr('href');
          window.location.href = location;
          return false;
        });

      }

      else {
        $('.dropdown-toggle').click(function(e) {
          if ($(e.target).parent().hasClass('open')) {
            var location = $(this).attr('href');
            window.location.href = location;
            return false;
          }
        });
      }

    }
  }
  */
  Drupal.behaviors.configureGalleries = {
    attach: function(context, settings) {
      var query = window.location.search.substring(1);
      var vars = query.split('=');
      num = (vars[1] / 12) >> 0;

      if ($("#featured-slides").length) {
        if (typeof jQuery.flexslider == 'function') {
          $('#featured-slides').flexslider({
            prevText: '',
            nextText: '',
            controlNav: false,
            start: function() {
              $('.flex-control-nav .flex-active').parent('li').addClass('flex-active').siblings().removeClass('flex-active');
            },
            after: function() {
              $('.flex-control-nav .flex-active').parent('li').addClass('flex-active').siblings().removeClass('flex-active');
            },
            startAt: num
          });
        }
      }

      if ($("#featured-gallery").length) {
        if (typeof jQuery.flexslider == 'function') {
          $('#featured-gallery').flexslider({
            controlNav: false,
            prevText: '',
            nextText: '',
            start: function() {
              $('.flex-control-nav .flex-active').parent('li').addClass('flex-active').siblings().removeClass('flex-active');
            },
            after: function() {
              $('.flex-control-nav .flex-active').parent('li').addClass('flex-active').siblings().removeClass('flex-active');
            },
            startAt: num
          });
        }
      }

      $(window).on('load', function() {

        if ($("#exhibitor-items").length) {
          if (typeof jQuery.flexslider == 'function') {
            $('#exhibitor-items').flexslider({
              slideshow: false,
              controlNav: false,
              prevText: '',
              nextText: '',
              startAt: num
            });
          }
        }

        //$("a[itemnum= "+ vars[1] +"]").css({border:'5px #7ea9ae solid',});
        $("a[itemnum= " + vars[1] + "]").addClass('brand-border');
      });


    }
  };

  Drupal.behaviors.clickPanels = {
    attach: function(context, settings) {

      $('body').click(function(e) {
        // console.log($(e.target));
        var target = $(e.target);
        if (target.is("div#lnkPanel")) {
          //console.log ('parent element - I have been clicked');
          //console.log ('body data-link: ' + target.attr('data-link'));
          window.open(target.attr('data-link'), target.attr('data-target'));
        }
        else if (target.is("div#lnkPanel *")) {
          // console.log ('child element - I have been clicked');
          var strDataLink = target.parents('div#lnkPanel').attr('data-link');
          var strDataTarget = target.parents('div#lnkPanel').attr('data-target');
          // console.log ('child data-link: ' + strDataLink);
          // console.log ('child data-link: ' + strDataTarget);
          window.open(strDataLink, strDataTarget);
        }
      });
    }
  };

  Drupal.behaviors.exhibitorMenu = {
    attach: function(context, settings) {

      if ($('span.glyphicon-user').length == 0) {
        $('#block-menu-menu-exhibitor-user ul').prepend(' <span class="glyphicon glyphicon-user" aria-hidden="true"></span>');
      }
    }
  };

  Drupal.behaviors.exhibitorAcountMenu = {
    attach: function(context, settings) {

      $('.exhibitor-menu ul').addClass('navbar-nav');

    }
  };

  Drupal.behaviors.exhibitorGallery = {
    attach: function(context, settings) {
      $('.thumbnail').hover(
        function() {
          $(this).find('.caption').fadeIn(250);
        },
        function() {
          $(this).find('.caption').fadeOut(250);
        }
      );
    }
  };

  Drupal.behaviors.galleryAccordions = {
    attach: function(context, settings) {
      $('.category-children .view-header .chevron').on("click", function(e) {
        if ($(e.currentTarget).hasClass('glyphicon-chevron-right')) {
          /*$(e.currentTarget).parent().next().css("display","block");*/
          $(e.currentTarget).parent().next().show(1000);
          $(e.currentTarget).removeClass('glyphicon-chevron-right');
          $(e.currentTarget).addClass('glyphicon-chevron-down');
        }
        else {
          /*$(e.currentTarget).parent().next().css("display","none");*/
          $(e.currentTarget).parent().next().hide(1000);
          $(e.currentTarget).removeClass('glyphicon-chevron-down');
          $(e.currentTarget).addClass('glyphicon-chevron-right');
        }

      });
    }
  };

})(jQuery);
