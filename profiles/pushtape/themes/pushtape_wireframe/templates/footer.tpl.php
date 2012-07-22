<?php
/**
 * @file footer.tpl.php
 *
 * This is not a "real" template file that interacts with the PHPtemplate 
 * engine, but rather an include file called from page.tpl.php
 *
 * The purpose of this file is to create an easy way for themers to customize
 * their footer without editing the entire page.tpl.php file
**/
?>

<?php if (isset($footer_menu) || $contact_information || $social_links || $seal || $page['footer']): ?>
  <div id="footer" class="clearfix">
    <?php print render($page['footer']); ?>

    <?php if ($seal || $contact_information) : ?>
      <div id="seal-and-contact">

        <?php if ($seal): ?>
          <div id="footer-seal">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="seal">
              <img src="<?php print $seal; ?>" alt="<?php print ($site_name ? $site_name . ' ' . t('Seal') : t('Home')); ?>" />
            </a>
          </div>
        <?php endif; ?>

        <?php if ($contact_information): ?>
          <div id="contact-information">

            <?php if ($contact_information['site_name']): ?>
              <p class="site-name"><?php print $contact_information['site_name']; ?></p>
            <?php endif; ?>

            <?php if ($contact_information['address']): ?>
              <p><?php print $contact_information['address']; ?></p>
            <?php endif; ?>

            <?php if ($contact_information['phone'] || $contact_information['fax']): ?>
              <p>
                <?php if ($contact_information['phone']): ?>
                  <?php print t('Phone:');?> <?php print $contact_information['phone']; ?><br />
                <?php endif; ?>

                <?php if ($contact_information['fax']): ?>
                  <?php print t('Fax:');?> <?php print $contact_information['fax']; ?>
                <?php endif; ?>
             </p>
            <?php endif; ?>
          </div>
        <?php endif; ?>

     </div>
    <?php endif; ?> 

    <?php if (isset($footer_menu) || $social_links) : ?>
      <div id="menu-and-social">

        <?php if ($social_links): ?>
          <div id="social-links">
            <?php print $social_links; ?>
          </div>
        <?php endif; ?> 

        <?php if (isset($footer_menu)): ?>
          <div class="footer menu">
            <?php print theme('links', array('links' => $footer_menu, 'attributes' => array('id' => 'footer-menu', 'class' => array('links', 'clearfix', 'footer-menu')))); ?>
          </div>
        <?php endif; ?>

     </div>
    <?php endif; ?>

  </div> <!-- /footer -->
<?php endif; ?>
