<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="report">
	<?php if (!empty($title)): ?>
	  <h3><?php print $title; ?></h3>
	<?php endif; ?>
	<div class="report-header">
		<div class="date">Date</div>
		<div class="event">Event</div>
		<div class="match">Match</div>
		<div class="venue">Venue</div>
		<div class="score">Score</div>
		<div class="match-report">Report</div>
		<div class="gallery">Gallery</div>
	</div>	
	<?php foreach ($rows as $id => $row): ?>
	  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>
	<?php endforeach; ?>
	<div class="clear"></div>
</div>