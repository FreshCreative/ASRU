<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<marquee scrollamount="3" direction="left">
<?php for ($i=0; $i < 10; $i++): ?>
	<?php foreach ($rows as $id => $row): ?>
	    <?php print $row; ?>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#BBBBBB">|</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
	<?php endforeach; ?>
<?php endfor; ?>
</marquee>