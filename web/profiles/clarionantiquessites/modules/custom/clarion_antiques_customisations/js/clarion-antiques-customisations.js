/**
 * @file: clarion-antiques-customisations.js
 *
 * Little JS nips and tucks go in here.
 */

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";

  /**
   * If we're viewing an exhibitor page and they have no social links, hide
   * the whole row.
   */
  Drupal.behaviors.clarionAntiquesHideEmptySocialLinksContainer = {
    attach: function(context, settings) {
      // We can tell we're viewing an exhibitor page because the body will
      // have the class "node-type-exhibitor-profile-page", and there will
      // be a div.view-exhibitor-social-media-links.
      var socialLinksContainerSelector = 'body.node-type-exhibitor-profile-page .view-exhibitor-social-media-links';
      var socialLinksViewSelector = '.view-content .views-row';

      if ($(socialLinksContainerSelector).length) {
        var socialLinksContents = $(socialLinksContainerSelector + ' ' + socialLinksViewSelector).html().trim();

        if (!socialLinksContents.length) {
          $(socialLinksContainerSelector).hide();
          console.log('clarionAntiquesHideEmptySocialLinksContainer: social media links View field hidden because it\'s empty - clarion-antiques-customisations.js');
        }
      }
    }
  };
})(jQuery, Drupal);
