<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */

// Set the list of sites which should have a full-width header.
$full_width_header_sites = [
  'sites/antiques_summer',
  'sites/antiques_winter',
  //  'sites/antiquesforeveryone',
  //  'sites/antiquesforeveryone_london',
];
?>

<div id="page-container">

  <?php if (!empty($page['account'])): ?>
    <div id="account">
      <div class="container">
        <div class="row">
          <div class="col-xs-12">
            <?php print render($page['account']); ?>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <div id="header">
    <div class="navbar-wrapper">
      <div class="container">
        <div class="row">
          <div class="col-xs-6 col-sm-3">
            <div class="logo">
              <?php if ($logo): ?>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                  <img class="img-responsive" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
                </a>
              <?php else: ?>
                <h1 class="home-link-no-logo">
                  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                    <?php print $site_name; ?>
                  </a></h1>
              <?php endif; ?>
            </div>
          </div>

          <div class="col-xs-6 col-sm-9">
            <div class="row">
              <?php
              // On AFE, only show one full-width dates block in the header.
              // They like their wide dates.
              if (conf_path() == 'sites/antiquesforeveryone'): ?>
                <div class="col-xs-12 col-sm-9">
                  <div class="event-date"><?php print render($page['event_date']); ?></div>
                </div>
              <?php else: ?>
                <div class="col-xs-12 col-sm-5">
                  <div class="event-date"><?php print render($page['event_date']); ?></div>

                </div>
                <div class="hidden-xs col-sm-4">
                  <?php print render($page['newsletter']); ?>
                </div>
              <?php endif; ?>

              <div class="col-xs-12 col-sm-3">
                <?php print render($page['social_media']); ?>
              </div>
            </div>

          </div>

          <div class="col-xs-12 col-sm-9">
            <!--// MENU //-->
            <div class="row">
              <nav class="navbar navbar-default">
                <div class="container-fluid">
                  <div class="navbar-header">
                    <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar" aria-expanded="false" aria-controls="navbar">
                      <span class="sr-only">Toggle navigation</span>
                      <span class="icon-bar"></span>
                      <span class="icon-bar"></span>
                      <span class="icon-bar"></span>
                    </button>
                  </div>

                  <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
                    <div id="navbar" class="navbar-collapse collapse">

                      <?php if (!empty($primary_nav)): ?>
                        <?php print render($primary_nav); ?>
                      <?php endif; ?>
                      <?php if (!empty($secondary_nav)): ?>
                        <?php print render($secondary_nav); ?>
                      <?php endif; ?>
                      <?php if (!empty($page['navigation'])): ?>
                        <?php print render($page['navigation']); ?>
                      <?php endif; ?>

                    </div>
                  <?php endif; ?>
                </div>
              </nav>
            </div>
            <!--// END: MENU //-->
          </div>

          <!--// END: COLUMN //-->
        </div>
        <!--// END: ROW //-->
      </div>
      <!--// END: CONTAINER //-->
    </div>
    <!--// END: NAVBAR-WRAPPER //-->
  </div>
  <!--// END: HEADER //-->

  <?php if (!empty($page['highlighted'])): ?>
    <div class="highlighted">
      <div class="container<?php if (in_array(conf_path(), $full_width_header_sites)): ?>-fluid<?php endif; ?>">
        <?php print render($page['highlighted']); ?>
      </div>
    </div>
  <?php endif; ?>

  <div class="container">
    <?php print $messages; ?>
    <?php if (!empty($tabs)): ?>
      <?php print render($tabs); ?>
    <?php endif; ?>

    <?php if (!empty($page['help'])): ?>
      <?php print render($page['help']); ?>
    <?php endif; ?>

    <?php if (!empty($title)): ?>
      <div class="page-header">
        <h1><?php print $title; ?></h1>
      </div>
    <?php endif; ?>

    <?php print render($page['content']); ?>

  </div>

  <?php if (!empty($page['content_below_top'])): ?>
    <div class="content-below-top">
      <div class="container">
        <?php print render($page['content_below_top']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($page['content_below_middle'])): ?>
    <div class="content-below-middle">
      <div class="container">
        <?php print render($page['content_below_middle']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($page['content_below_bottom'])): ?>
    <div class="content-below-bottom">
      <div class="container">
        <?php print render($page['content_below_bottom']); ?>
      </div>
    </div>
  <?php endif; ?>
  <!-- //.container -->


  <!-- FOOTER -->
  <footer>
    <div class="container">
      <div id="quick-links" class="row">
        <div class="col-xs-12 col-sm-4 col-md-3">
          <?php print render($page['footer_column_one']); ?>
        </div>

        <div class="col-xs-6 col-sm-4 col-md-3">
          <?php print render($page['footer_column_two']); ?>
        </div>

        <div class="col-xs-6 col-sm-4 col-md-3">
          <?php print render($page['footer_column_three']); ?>
        </div>

        <div class="hidden-xs col-sm-4 col-md-3">
          <?php print render($page['footer_column_four']); ?>
        </div>
      </div>

      <div id="copyright">
        <div class="row">
          <div class="col-xs-12 col-md-10">
            <?php print render($page['footer_copyright']); ?>
          </div>
          <div class="col-xs-12 col-md-2">
            <p class="text-right"><a href="#">Back to top</a></p>
          </div>
        </div>

      </div>
    </div>
  </footer>

  <?php if (!empty($page['footer_extra_column_one'])): ?>
    <div class="footer-extra">
      <div class="container">
        <div class="row">
          <div class="col-xs-12 col-sm-4">
            <?php print render($page['footer_extra_column_one']); ?>
          </div>

          <div class="col-xs-12 col-sm-4">
            <?php print render($page['footer_extra_column_two']); ?>
          </div>

          <div class="col-xs-12 col-sm-4">
            <?php print render($page['footer_extra_column_three']); ?>
          </div>
        </div>

      </div>
    </div>
  <?php endif; ?>

</div>
<!--//#page-container //-->
