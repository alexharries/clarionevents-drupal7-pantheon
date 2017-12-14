<?php
/**
 * @file
 * antiquessites_content_types_paragraphs_panes.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function antiquessites_content_types_paragraphs_panes_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'buy_ticket_link_cta';
  $content->admin_title = 'buy ticket link cta';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<div class="row">
            <div class="col-md-12">
              <div id="lnkPanel" data-link="http://fineartandantiquesfair.seetickets.com/event/olympia-international-art-antiques-fair/olympia-exhibition-centre/854367" data-target="_blank" class="panel-brown-dark panel-call-to-action">
                <div class="panel-small-caption">
                  Now on sale
                </div>
                <div class="panel-large-caption">
                  Buy Tickets
                </div>
                <hr class="panel-link-divider">
                <div class="panel-link text-right">
                  <span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
                </div>
              </div>
            </div>
          </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['buy_ticket_link_cta'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'exhibitor_list_link';
  $content->admin_title = 'Link to exhibitor list';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => 'Link to exhibitor list',
    'title' => '<none>',
    'body' => '          <div class="row">
            <div class="col-md-12">
              <div id="lnkPanel" data-link="/exhibitors" data-target="_self" class="panel-teal panel-call-to-action teal">
                <div class="panel-small-caption">
                  View the 2015
                </div>
                <div class="panel-large-caption">
                  Exhibitor List
                </div>
                <hr class="panel-link-divider">
                <div class="panel-link text-right">
                  <span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
                </div>
              </div>
            </div>
          </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['exhibitor_list_link'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'fair_partners_cta';
  $content->admin_title = 'Fair Partners CTA';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<div class="panel-teal-dark panel-call-to-action">
            <div class="panel-small-caption">
              fair
            </div>
            <div class="panel-large-caption">
              partners
            </div>
          </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['fair_partners_cta'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'fair_video';
  $content->admin_title = 'Fair Video';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<div id="fair-video">
                <div class="embed-responsive embed-responsive-16by9">
                 <iframe  class="embed-responsive-item" src="https://www.youtube.com/embed/Re36Mb53cmw" allowfullscreen></iframe>
                  <!---<iframe class="embed-responsive-item" src="https://www.youtube.com/embed/Re36Mb53cmw" allowfullscreen></iframe>-->
                </div>
                <hr class="video-link-divider">
              </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['fair_video'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'follow_us_social_cta';
  $content->admin_title = 'Follow Us Social CTA';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<div class="row">
            <div class="col-md-12">
              <div class="panel-teal-dark panel-call-to-action">
                <div class="panel-small-caption">
                  follow us
                </div>
                <div class="panel-large-caption">
                  social
                </div>
              </div>
            </div>
          </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['follow_us_social_cta'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'guest_exhibition_cta';
  $content->admin_title = 'Guest Exhibition CTA';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="row">
            <div class="col-md-12">
              <div id="lnkPanel" data-link="/visiting/olympia-showcase" data-target="_self" class="panel-brown-dark panel-call-to-action guest-exhibition">
                <div class="panel-small-caption">
                  apply now
                </div>
                <div class="panel-large-caption">
                  olympia showcase
                </div>
                <hr class="panel-link-divider">
                <div class="panel-link text-right">
                  <span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
                </div>
              </div>
            </div>
          </div>
',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['guest_exhibition_cta'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'latest_news_cta';
  $content->admin_title = 'Latest News CTA';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<div class="row">
            <div class="col-md-12">
              <div id="lnkPanel" data-link="/sign-fair-updates" data-target="_self" class="panel-brown-dark panel-call-to-action">
                <div class="panel-small-caption">
                  sign up for
                </div>
                <div class="panel-large-caption">
                  latest news
                </div>
                <hr class="panel-link-divider">
                <div class="panel-link text-right">
                  <span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
                </div>
              </div>
            </div>
          </div>
',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['latest_news_cta'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'panel_line';
  $content->admin_title = 'Panel Line';
  $content->admin_description = 'Panel Line';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => 'Panel Line',
    'title' => '<none>',
    'body' => '<hr class="panel-link-divider">',
    'format' => 'ds_code',
    'substitute' => TRUE,
  );
  $export['panel_line'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'shuttle_service';
  $content->admin_title = 'Shuttle Service';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="row">
            <div class="col-md-12">
              <div id="lnkPanel" data-link="/visiting/shuttleservice" data-target="_self" class="panel-brown-dark panel-call-to-action">
                <div class="panel-small-caption">
                  Courtesy
                </div>
                <div class="panel-large-caption">
                  Shuttle Service
                </div>
                <hr class="panel-link-divider">
                <div class="panel-link text-right">
                  <span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
                </div>
              </div>
            </div>
          </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['shuttle_service'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'talks_programme';
  $content->admin_title = 'Talks Programme';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '          <div class="row">
            <div class="col-md-12">
              <div id="lnkPanel" data-link="/events" data-target="_self" class="panel-brown-dark panel-call-to-action guest-exhibition">
                <div class="panel-small-caption">
                  View the
                </div>
                <div class="panel-large-caption">
                  Talks Programme
                </div>
                <hr class="panel-link-divider">
                <div class="panel-link text-right">
                  <span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
                </div>
              </div>
            </div>
          </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['talks_programme'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'virtual_tour';
  $content->admin_title = 'Virtual Tour';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<p><a href="http://www.markcolliton.com/tours/olympia2013_side/tour_1_1.html" target="_blank"><img alt="" class="img-responsive" src="/sites/antiques_summer/files/virtual_tour.jpg" style="width: 480px; height: 251px;" /></a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['virtual_tour'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'watch_the_fair_cta';
  $content->admin_title = 'Watch the Fair CTA';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<div class="row">
            <div class="col-md-12">
              <div class="fair-video-panel panel-teal panel-call-to-action">
                <div class="panel-small-caption">
                  watch the fair
                </div>
                <div class="panel-large-caption">
                  video
                </div>
              </div>
            </div>
          </div>',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['watch_the_fair_cta'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'winter_olympia';
  $content->admin_title = 'Winter Olympia CTA';
  $content->admin_description = '';
  $content->category = 'Homepage Blocks';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<none>',
    'body' => '<div id="lnkPanel" data-link="http://www.olympia-antiques.com" data-target="_blank" class="winter-olympia-panel panel-teal-light panel-call-to-action">
  <div class="panel-small-caption">
    save the date
  </div>
  <div class="panel-large-caption">
    Winter
  </div>
  <div class="panel-event-caption">
    Olympia Art & Antiques Fair
  </div>
  <div class="panel-date-caption">
    31 Oct – 6 Nov 2016
</div>
  <hr class="panel-link-divider">
  <div class="panel-link text-right">
    <span class="glyphicon glyphicon-menu-right small" aria-hidden="true"></span>
  </div>
</div>
',
    'format' => 'ds_code',
    'substitute' => 1,
  );
  $export['winter_olympia'] = $content;

  return $export;
}
