<?php if ($page['header']): ?>
<header id="header">
  <div class="container">
    <div class="row">
      <div id="logo" class="col-lg-6">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
        <?php endif; ?>
        <div class="clearfix"></div>
      </div>
      <?php print render($page['header']); ?>
    </div>
  </div>
</header>
<?php endif; ?>