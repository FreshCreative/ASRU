<?php
/**
* @file
* This template is used to print a single field in a view.
*
* It is not actually used in default Views, as this is registered as a theme
* function which has better performance. For single overrides, the template is
* perfectly okay.
*
* Variables available:
* - $view: The view object
* - $field: The field handler object that can process the input
* - $row: The raw SQL result that can be used
* - $output: The processed output that will normally be used.
*
* When fetching output from the $row, this construct should be used:
* $data = $row->{$field->field_alias}
*
* The above will guarantee that you'll always get the correct data,
* regardless of any changes in the aliasing that might happen if
* the view is modified.
*/
?>
<div id="event-info">
	<div class="event-info-row">
		<h3>Date</h3>
		<div class="event-details">
			<?php print $view->result[0]->field_field_event_date[0]['raw']['value']; ?> 
			<?php print date('Y', strtotime($view->result[0]->field_field_year_date[0]['raw']['value'])); ?>
		</div>
	</div>
	<div class="event-info-row">
		<h3>Match</h3>
		<div class="event-details">
			ASRU v Queanbeyan
		</div>
	</div>
	<div class="event-info-row">
		<h3>Venue</h3>
		<div class="event-details">
			<?php print $view->result[0]->field_field_venue[0]['raw']['value']; ?>
		</div>
	</div>
	<div class="event-info-row">
		<h3>Score</h3>
		<div class="event-details">
			To be provided
		</div>
	</div>
	<div class="event-info-row">
		<h3>Match Report</h3>
		<div class="event-details">
			<a href="#">Download PDF</a>
		</div>
	</div>
	<div class="event-info-row">
		<h3>Gallery</h3>
		<div class="event-details">
			<a href="/<?php print drupal_get_path_alias(); ?>/gallery/<?php print $view->result[0]->nid; ?>" data-fancybox-type="iframe" id="event-gallery" class="various">Click to view</a>
		</div>
	</div>
</div>