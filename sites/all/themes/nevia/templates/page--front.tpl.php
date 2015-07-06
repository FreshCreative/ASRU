<?php include 'header.inc'; ?>
<div class="visible-xs col-xs-12" id="search" style="margin-top: 9px;">
  <a href="/">
    <i class="fa fa-home home-icon"></i>
  </a>
  <?php
    $search = module_invoke('search', 'block_view', 'form');
    print render($search);
  ?>
</div>
<nav id="navigation" class="<?php print theme_get_setting('main_menu_style', 'nevia'); ?>">
  <div class="container">
    <?php print render($page['main_menu']); ?>
  </div>
</nav>

<div id="content">
  <div class="container">
    <div class="row">
      <div class="col-lg-8">
        <div class="row">
          <?php print render($page['slider']); ?>
          <?php print render($page['content']); ?>
        </div>
      </div>
      <div class="col-lg-4">
        <?php print render($page['sidebar_second']); ?>
      </div>
    </div>
  </div>
</div>

<div id="content-bottom">
  <div class="container">
    <div class="row">
      <?php print render($page['content-bottom']); ?>  
    </div>
  </div>
</div>

<div id="bottom">
  <div class="container">
    <div class="hidden-xs">
      &copy; <?php print date('Y'); ?> Australian Services Rugby Union | Website by <a href="http://www.freshcreative.net.au">Fresh Creative</a>
    </div>
    <div class="visible-xs">
      <a href="facebook.com" style="display: block; float: left; width: 100%;">
      <img style="width:30px; margin: 0 0 10px;" src="/sites/all/themes/nevia/image/facebook-icon.png" alt="Australian Services Rugby Union Facebook"></a>
      <span>Website by <a href="http://www.freshcreative.net.au">Fresh Creative</a></span></div>
  </div>
</footer>