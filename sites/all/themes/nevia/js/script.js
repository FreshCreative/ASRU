jQuery(document).ready(function($) {
    $('.view_project').click(function(){
    	$('#block-views-page-banner-block li.first img').click();
    });

    // bjqs
	$('.featured-slider').bjqs({
		height : 620,
		width : 850,
		responsive : true,
		showmarkers : false,
		nexttext : '❯',
		prevtext : '❮',
	});

	$('.view-event.view-display-id-page_1 .image').click(function(e){
        e.preventDefault();
        
        var index = $('.view-event.view-display-id-page_1 .image').index(this) + 1;
        $('.gallery-main').bjqs.goto( index );
	});
});