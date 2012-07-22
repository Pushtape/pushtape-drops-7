<?php
/**
 * @file header.tpl.php
 *
 * This is not a "real" template file that interacts with the PHPtemplate 
 * engine, but rather an include file called from page.tpl.php
 *
 * The purpose of this file is to create an easy way for themers to customize
 * their header without editing the entire page.tpl.php file
**/
?>

<div id="header" class="clearfix">

  <?php if ($main_menu || $search_box): ?>
    <div id="menu-and-search-mobile">
      <?php if ($main_menu): ?>
        <div id="menu-mobile-controller"><div id="menu-mobile-controller-inner"><?php print t('Menu'); ?></div></div>
      <?php endif; ?>
      <?php if ($search_box): ?>
        <div id="search-mobile-controller"><?php print t('Search'); ?></div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <?php if ($main_menu || $secondary_menu || $search_box) : ?>
    <div id="menu-and-search" class="clearfix">

    <?php if ($search_box): ?>
      <div id="search">
        <?php print $search_box; ?>
      </div>
    <?php endif; ?>

    <?php if ($main_menu): ?>
      <div id="navigation" class="menu">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <div class="secondary menu">
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary', 'class' => array('links', 'clearfix', 'secondary-menu')))); ?>
      </div>
    <?php endif; ?>

    </div>
  <?php endif; ?>

  <?php if ($page['header']): ?>
    <div id="header-region">
      <?php print render($page['header']); ?>
    </div>
  <?php endif; ?>
  
  <?php if ($site_name || $site_slogan || $logo): ?>
    <div id="name-and-slogan" class="clearfix">

      <?php
      /**
       * Recent SEO recommendations suggest "hiding" site names through a
       * negative text-indent is bad practice. Instead, logos should be wrapped
       * with the desired header tags and the alt text should be the site name.
       * Google and screenreaders are both engineered to read the alt text of
       * images, and the headers which wrap those images will give the 
       * alt text the prominence desired.
       * 
       * @see http://luigimontanez.com/2010/stop-using-text-indent-css-trick/
      **/ ?>
      <?php if ($logo && $site_name): ?>
        <?php if ($title): /* if the page title is set */ ?>
          <div id="site-name" class="site-name-image-wrapper">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
              <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
            </a>
          </div>
        <?php else: /* Use h1 when the content title is empty */ ?>
          <h1 id="site-name" class="site-name-image-wrapper">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home');     ?>" rel="home" id="logo">
              <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
            </a>
          </h1>
        <?php endif; ?>
      <?php else: ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
        </a>
      <?php endif; ?>
 
      <?php if ($site_name): ?>
        <?php if ($title): ?>
          <div id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
          </div>
        <?php else: /* Use h1 when the content title is empty */ ?>
          <h1 id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
          </h1>
        <?php endif; ?>
      <?php endif; ?>

    </div>
  <?php endif; ?>

</div> <!-- /header -->
