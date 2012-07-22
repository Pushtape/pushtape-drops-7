(function ($) {
 /**
   * Mobile magic for Pushtape Wireframe
   */
 Drupal.behaviors.pushtapeWireframeMobile = {
   attach: function (context, settings) {
     $('#search-mobile-controller').click(function() {
         $(this).toggleClass('active');
         $('#search').toggleClass('mobile-show-search');
         $('#menu-mobile-controller').toggleClass('mobile-show-border');
     });

     $('#menu-mobile-controller').click(function() {
         $(this).toggleClass('active');
         $('#navigation').toggleClass('mobile-show-menu');
     });
   }
 }

})(jQuery);
