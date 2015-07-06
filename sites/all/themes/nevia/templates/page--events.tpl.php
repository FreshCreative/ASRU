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

<?php if ($page['main_menu']): ?>
<nav id="navigation" class="<?php print theme_get_setting('main_menu_style', 'nevia'); ?>">
  <div class="container">
    <?php print render($page['main_menu']); ?>
  </div>
</nav>
<?php endif; ?>

<?php if ($page['bottom']): ?>
<div id="banner">
  <div class="container">
    <div class="row">
      <div class="col-lg-12 col-md-12 col-sm-12 hidden-xs" id="breadcrumbs">
        <?php print $breadcrumb; ?>
      </div>
      <?php print render($page['banner']); ?>
    </div>
  </div>
</div>
<?php endif; ?>

<div id="content">
  <div class="container">
    <div class="row">
      <div id="messages"><?php print $messages; ?></div>
      <?php if ($page['sidebar_second']): ?>
      <div class="col-lg-8 col-md-8" id="content-wrapepr">
      <?php else: ?>
      <div class="col-lg-12 col-md-12" id="content-wrapepr">
      <?php endif; ?>
        <div class="<?php print $content_class; ?>">
          <h2 class="page-title"><?php print taxonomy_term_load($node->field_type['und'][0]['tid'])->name; ?> - News & Events <?php print date('Y'); ?></h2>
          <section class="page-content">
            <a id="main-content"></a>
            <?php print render($title_prefix); ?>
            <?php print render($title_suffix); ?> 
            <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
            <?php print render($page['help']); ?>
            <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>
          </section>
        </div>        
      </div>
      <?php if ($page['sidebar_second']): ?>
        <aside class="col-lg-4 col-md-4" id="sidebar-second">
          <?php print render($page['sidebar_second']); ?>
        </aside>
      <?php endif; ?>      
    </div>
  </div>
</div>

<div id="slider">
  <?php print render($page['slider']); ?>
</div>

<div id="content-bottom">
  <div class="container">
    <div class="row">
      <?php print render($page['content-bottom']); ?>  
    </div>
  </div>
</div>

<?php if ($page['bottom']): ?>
<div id="bottom">
  <div class="container">
    <?php print render($page['bottom']); ?>
  </div>
</div>
<?php endif; ?>