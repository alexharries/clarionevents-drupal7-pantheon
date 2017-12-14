<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT
 *   output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field.
 *   Do not use var_export to dump this object, as it can't handle the
 *   recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to
 *   use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

// Set the list of sites which should use the overridden template.
$overridden_template_sites = [
//  'sites/antiques_summer',
//  'sites/antiques_winter',
  'sites/antiquesforeveryone',
  'sites/antiquesforeveryone_london',
];

?>
<!-- <?php print __FILE__; ?> -->
<?php if (!in_array(conf_path(), $overridden_template_sites)): ?>
  <!-- overridden_template_site -->

  <?php foreach ($fields as $id => $field): ?>
    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>

    <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
  <?php endforeach; ?>

<?php else: ?>
  <!-- !overridden_template_site -->
  <?php foreach ($fields as $id => $field): ?>
    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>

    <!-- wrapper_prefix -->
    <div class="row">

    <!-- label_html -->
    <?php print $field->label_html; ?>

    <div class="container">
      <div class="slider">

        <?php $has_url = FALSE; ?>
        <?php if (!empty($row->field_field_link[0]['raw']['url'])): ?>
          <?php $has_url = TRUE; ?>
        <?php endif; ?>

        <?php if ($has_url): ?>
        <a class="slider-link" href="<?php print url($row->field_field_link[0]['raw']['url']); ?>">
          <?php endif; ?>

          <div class="wrapper">

            <?php $slider_image = render($row->field_field_slider_image[0]['rendered']); ?>
            <?php if (!empty($slider_image)): ?>
              <div class="slider-image"><?php print $slider_image; ?></div>
            <?php endif; ?>

            <?php $slider_heading = render($row->field_field_caption[0]['rendered']); ?>
            <?php $slider_body = render($row->field_field_caption_2[0]['rendered']); ?>

            <?php if (!empty($slider_heading) || !empty($slider_body)): ?>
              <div class="text-wrapper">
                <?php if (!empty($slider_heading)): ?>
                  <div class="heading"><?php print $slider_heading; ?></div>
                <?php endif; ?>

                <?php if (!empty($slider_body)): ?>
                  <div class="body"><?php print $slider_body; ?></div>
                <?php endif; ?>
              </div>
            <?php endif; ?>

          </div>

          <?php if ($has_url): ?>
        </a>
      <?php endif; ?>
      </div>
    </div>

    <?php //print $field->content; ?>
    </div>
  <?php endforeach; ?>

<?php endif; ?>
