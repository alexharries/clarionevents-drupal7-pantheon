/**
 * @file: clarion_babytotoddlerevent_customisations.js
 *
 * Little JS nips and tucks go in here.
 */

var Drupal = Drupal || {};

(function($, Drupal) {
  "use strict";

  /**
   * Add a switcher bar to the top of the page so people can quickly jump
   * between the different BTT shows.
   */
  Drupal.behaviors.clarionBabyToToddlerEventAddSwitcherBarToPage = {
    attach: function(context, settings) {
      // Set up our link classes.
      var excel_link_classes = 'venue-switcher-link';
      var birmingham_link_classes = excel_link_classes;

      // Work out if we're on the Birmingham or Excel sites.
      // Caution: horrible hacks ahead. Avast, ye...
      var domain = document.domain;

      if (domain.indexOf("excel") > -1) {
        excel_link_classes += ' current-site';
      }
      else if (domain.indexOf("birmingham") > -1) {
        excel_link_classes += ' current-site';
      }

      // @todo: uncomment this code when the Birmingham site is live.
      // $('body').addClass('babytotoddlerevent-switcher-active').prepend('<div id="babytotoddlerevent-switcher"><h3>' + Drupal.t('Venue:') + '</h3><ul><li><a class="' + excel_link_classes + '" href="http://excel.babytotoddlerevents.co.uk">' + Drupal.t('ExCeL London') + '</a></li><li><a class="' + birmingham_link_classes + '" href="http://birmingham.babytotoddlerevents.co.uk">' + Drupal.t('Birmingham') + '</a></li></ul></div>');
      // console.log('clarion-babytotoddlerevent-customisations.js added switcher menu to top of page.');
    }
  };
})(jQuery, Drupal);
