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

<?php

if (count($rows) > 12) { 
  drupal_add_js('/sites/all/libraries/flexslider/jquery.flexslider.js', array(
  'type' => 'file',
  'scope' => 'header',
  'group' => JS_LIBRARY,
  'every_page' => FALSE,
  'weight' => -1,
  ));
  
  
  drupal_add_css('/sites/all/modules/flexslider/assets/css/flexslider_img.css', array(
  'group' => CSS_THEME, 
  'every_page' => FALSE,
  'preprocess'=>FALSE,
  'weight'=> 1,
  'media'=>'all',
  
  ));
  
  drupal_add_css('/sites/all/libraries/flexslider/flexslider.css', array(
  'group' => CSS_THEME, 
  'every_page' => FALSE,
  'preprocess'=>FALSE,
  'weight'=> 1,
  'media'=>'all',
  ));
  
  $counter=0; 
?>
<div id="exhibitor-items" class="flexslider">
  <ul class="slides">
	
    <?php foreach ($rows as $id => $row){
	    	  $counter++; 
	          // First row
	          if ($counter % 12 == 1) {
	          	 echo "<li>"; 
			  }
	          print $row; 
	          // If 12th row close tag
	          if ($counter % 12 == 0) {
	          	 echo '</li>'; 
			  }
    	  } 
	?>
	
  </ul>
</div>
<?php
}
else {

  foreach ($rows as $id => $row) {
	  print $row; 
	} 
}
?>