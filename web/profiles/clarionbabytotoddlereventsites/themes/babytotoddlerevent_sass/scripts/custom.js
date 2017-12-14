(function ($) {
  
  
  Drupal.behaviors.reloadMasonry = {
    attach: function(context, settings) {
      $( window ).load(function() {
        $(document).ready(function(){
          $('body').bind('views_infinite_scroll_updated',function(){
            $('.masonry').masonry('reload');
          });
        });
      });
    }
  };
  
  Drupal.behaviors.addGridSizerToMasonry = {
    attach: function(context, settings) {
      $('.masonry .grid').prepend('<div class="grid-sizer col-xs-6 col-sm-4 col-md-4 col-lg-4"></div>');
       $(document).ready(function(){
		var $grid = $('.masonry').imagesLoaded( function() {
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
  
  
  Drupal.behaviors.infiniteScrollInvoked = {
		attach: function(context, settings) {
			$( window ).load(function() {
				$(document).ready(function(){
					$('body').bind('views_infinite_scroll_updated',function(){
						flagvalue=0;
						$( ".view-exhibitor-list h3" ).each(function() {
						
						if(flagvalue !==0){
							if ( $(this).text().toUpperCase() == flagvalue) {
					      	$(this).remove();
					   
					  		}
						}
						flagvalue=$(this).text().toUpperCase();
						
				});
					});
				});
			});
		}
	}; 
  
})(jQuery);