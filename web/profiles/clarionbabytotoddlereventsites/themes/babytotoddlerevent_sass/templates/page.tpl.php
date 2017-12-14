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
?>
<div id="page-wrapper">

  <div id="page-canvas">

    <div id="menu">
      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="">
          <nav role="navigation" class="">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
          <img class="img-responsive center-block" src="/sites/babytotoddlerevent/files/menu_background.png" />
        </div>
      <?php endif; ?>
    </div>

    <header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
      <div class="<?php print $container_class; ?>">
        <div class="header">
          <?php if (!empty($page['account'])): ?>
          <div id="account">
            <div class="row">
              <div class="col-xs-12">
                <?php print render($page['account']); ?>
              </div>
            </div>
          </div>
          <?php endif; ?>
          
          <div class="row no-gutter">
            <div class="left col-xs-3 col-sm-4 col-lg-4">
              <a href="#" class="toggle-nav btn btn-lg"><i class="fa fa-bars"></i></a>
            </div>

            <div class="middle col-xs-8 col-sm-4">
              <?php if ($logo): ?>
                <a class="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                  <img class="img-responsive" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                </a>
              <?php endif; ?>
              <?php if (!empty($page['header_middle'])): ?>
                <div>
                  <?php print render($page['header_middle']); ?>
                </div>
              <?php endif; ?>
            </div>
            
          <?php if (!empty($page['header_right'])): ?>
            <div class="right col-xs-9 col-xs-offset-3 col-sm-4 col-sm-offset-0 col-lg-4">
              <?php print render($page['header_right']); ?>
            </div>
          <?php endif; ?>
          </div>
        </div>
      </div>
    </header>

    <?php if (!empty($page['highlighted'])): ?>
      <div class="highlighted"><?php print render($page['highlighted']); ?></div>
    <?php endif; ?>
      
    <div class="main-container">

      <header role="banner" id="page-header">
        <?php print render($page['header']); ?>
      </header> <!-- /#page-header -->

      <div class="row">

        <?php if (!empty($page['sidebar_first'])): ?>
          <aside class="col-sm-3" role="complementary">
            <?php print render($page['sidebar_first']); ?>
          </aside>  <!-- /#sidebar-first -->
        <?php endif; ?>

        <section<?php print $content_column_class; ?>>

          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
            <h1 class="page-header"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php print $messages; ?>
          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
          <?php endif; ?>
          <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
          <?php endif; ?>
          <?php if (!empty($action_links)): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          
          <div class="content">
          <?php print render($page['content']); ?>
          </div>
          
          <div class="content-middle row">
          	<?php if (!empty($page['content_left'])): ?>  
            <div class="content-left col-sm-6 col-lg-8">
              <?php print render($page['content_left']); ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($page['content_right'])): ?>  
            <div class="content-right col-sm-6 col-lg-4">
              <?php print render($page['content_right']); ?>
            </div>
          <?php endif; ?>
          </div>
          
          <?php if (!empty($page['content_bottom'])): ?>  
            <div class="content-bottom">
              <?php print render($page['content_bottom']); ?>
            </div>
          <?php endif; ?>

        </section>

        <?php if (!empty($page['sidebar_second'])): ?>
          <aside class="col-sm-3" role="complementary">
            <?php print render($page['sidebar_second']); ?>
          </aside>  <!-- /#sidebar-second -->
        <?php endif; ?>

      </div>
    </div>

    <footer class="footer container-fluid">
    <?php if (!empty($page['footer_top'])): ?>  
      <div class="top row">
        <?php print render($page['footer_top']); ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($page['footer_middle'])): ?>  
      <div class="middle row">
        <?php print render($page['footer_middle']); ?>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($page['footer_middle_bottom'])): ?>  
      <div class="middle-bottom row no-gutter">
        <?php print render($page['footer_middle_bottom']); ?>
      </div>
    <?php endif; ?>
      
    <?php if (!empty($page['footer_bottom'])): ?>
      <div class="bottom row">
        <?php print render($page['footer_bottom']); ?>
      </div>
    <?php endif; ?>
    </footer>

  </div>
</div>