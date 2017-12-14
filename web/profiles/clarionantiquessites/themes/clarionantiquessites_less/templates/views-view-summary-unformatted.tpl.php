<?php

/**
 * @file
 * Default simple view template to display a group of summary lines.
 *
 * This wraps items in a span if set to inline, or a div if not.
 *
 * @ingroup views_templates
 */
?>
<nav>
  <ul class="pagination">
    <?php foreach ($rows as $id => $row): ?>

        <?php if (!empty($row->separator)) { print $row->separator; } ?>
        <li><a href="<?php print $row->url; ?>"<?php print !empty($row_classes[$id]) ? ' class="' . $row_classes[$id] . '"' : ''; ?>><?php print $row->link; ?></a></li>
        <?php if (!empty($options['count'])): ?>
          (<?php print $row->count; ?>)
        <?php endif; ?>

    <?php endforeach; ?>
  </ul>
</nav>