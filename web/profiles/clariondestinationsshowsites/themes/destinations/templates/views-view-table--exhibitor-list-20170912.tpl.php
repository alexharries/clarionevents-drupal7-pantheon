<?php

/**
 * @file
 * Template which outputs the London exhibitor lists.
 */

// Set the field names which we want to output.
$field_names = [
  'enhanced' => 'field_enhanced',
  'title' => 'title',
  'logo' => 'field_logo',
  'stand' => 'field_stand',
  'new' => 'field_new',
];

// Build the glossary. This is a horrible kludge which should be in a
// preprocess, but ain't nobody got time for that...

// Track which letter we're using.
$glossary_characters_to_friendly = drupal_map_assoc([
  '0',
  'A',
  'B',
  'C',
  'D',
  'E',
  'F',
  'G',
  'H',
  'I',
  'J',
  'K',
  'L',
  'M',
  'N',
  'O',
  'P',
  'Q',
  'R',
  'S',
  'T',
  'U',
  'V',
  'W',
  'X',
  'Y',
  'Z',
]);

// Map 0-9 to 0.
$glossary_characters_to_friendly['0'] = '0-9';

// Create the glossary.
$glossary_links_array = [];

foreach ($glossary_characters_to_friendly as $character => $friendly) {
  $glossary_links_array[] = l(t($friendly), '', [
    'fragment' => $character,
    'external' => TRUE,
  ]);
}
?>

<table <?php print !empty($classes) ? 'class="' . $classes . '" ' : ''; ?><?php print $attributes; ?>>
  <?php if (!empty($title) || !empty($caption)) : ?>
    <caption><?php print !empty($caption) ? $caption : ''; ?><?php print !empty($title) ? $title : ''; ?></caption>
  <?php endif; ?>

  <tbody>
    <tr class="glossary-links">
      <td colspan="99">
        <?php print implode(' <span class="glossary-separator">-</span> ', $glossary_links_array); ?>
      </td>
    </tr>

    <?php foreach ($rows as $row_count => $row): ?>
      <?php
      // Extract the field values from the $field_names array. Note that $field_names
      // can contain string or array values (arrays are used when more than one
      // field can contain the value we want).
      $field_names_chosen = [];

      foreach ($field_names as $field_name_friendly => $field_name_candidates) {
        $field_name_chosen = '';

        if (is_array($field_name_candidates)) {
          foreach ($field_name_candidates as $field_name_candidate) {
            if (!empty($row[$field_name_candidate])) {
              $field_name_chosen = $field_name_candidate;
              break;
            }
          }
        }
        else {
          $field_name_chosen = (string) $field_name_candidates;
        }

        $field_names_chosen[$field_name_friendly] = $field_name_chosen;
      }

      // Extract field values, too.
      $field_values = [];

      foreach ($field_names_chosen as $field_name_friendly => $field_name_chosen) {
        $field_values[$field_name_friendly] = !empty($row[$field_names_chosen[$field_name_friendly]]) ? $row[$field_names_chosen[$field_name_friendly]] : NULL;
      }
      ?>

      <?php
      // Is the exhibitor enhanced?
      $enhanced = !empty($row[$field_names_chosen['enhanced']]);

      // What's the glossary letter for this row?
      $current_glossary_letter = substr(strip_tags($field_values['title']), 0, 1);

      // If it's a number, change it to a zero.
      $current_glossary_letter = is_numeric($current_glossary_letter) ? '0' : drupal_strtoupper($current_glossary_letter);

      // Is it a valid glossary character, and have we already shown it?
      if (array_key_exists($current_glossary_letter, $glossary_characters_to_friendly)) {
        // Not already shown; show it now and unset the letter from the array.
        ?>

        <tr class="glossary-row glossary-letter-<?php print $current_glossary_letter; ?>">
          <td colspan="99">
            <a name="<?php print $current_glossary_letter; ?>"></a>
            <h3><?php print $glossary_characters_to_friendly[$current_glossary_letter]; ?></h3>
          </td>
        </tr>

        <?php
        unset($glossary_characters_to_friendly[$current_glossary_letter]);
      }
      ?>

      <tr class="exhibitor-row <?php print $enhanced ? 'enhanced' : 'not-enhanced'; ?> <?php print !empty($field_values['new']) ? 'exhibitor-new' : 'exhibitor-not-new'; ?><?php if ($row_classes[$row_count]) {
        print ' ' . implode(' ', $row_classes[$row_count]);
      } ?>">

        <td class="exhibitor-title<?php print !empty($field_classes[$row[$field_names_chosen['title']]][$row_count]) ? ' ' . $field_classes[$row[$field_names_chosen['title']]][$row_count] : ''; ?>"<?php print !empty($field_attributes[$row[$field_names_chosen['title']]][$row_count]) ? drupal_attributes($field_attributes[$row[$field_names_chosen['title']]][$row_count]) : ''; ?>>
          <?php
          // If this is a distributor, don't link their title.
          if (!empty($row['field_exhibitor_isdistributor']) && (strip_tags($row['field_exhibitor_isdistributor']) == 'yes')):  ?>
            <span class="is-distributor"><?php print strip_tags($field_values['title']); ?></span>
          <?php else: ?>
            <?php print $field_values['title']; ?>
          <?php endif; ?>
        </td>

        <?php if ($enhanced): ?>
          <td class="exhibitor-logo<?php print !empty($field_classes[$row[$field_names_chosen['logo']]][$row_count]) ? ' ' . $field_classes[$row[$field_names_chosen['logo']]][$row_count] : ''; ?>"<?php print !empty($field_attributes[$row[$field_names_chosen['logo']]][$row_count]) ? drupal_attributes($field_attributes[$row[$field_names_chosen['logo']]][$row_count]) : ''; ?>>
            <?php
            // If this is a distributor, don't link their logo.
            if (!empty($row['field_exhibitor_isdistributor']) && (strip_tags($row['field_exhibitor_isdistributor']) == 'yes')):  ?>
              <span class="is-distributor"><?php print $row['field_logo_1']; ?></span>
            <?php else: ?>
              <?php print $row['field_logo']; ?>
            <?php endif; ?>
          </td>
        <?php else: ?>
          <td class="no-exhibitor-logo<?php print !empty($field_classes[$row[$field_names_chosen['logo']]][$row_count]) ? ' ' . $field_classes[$row[$field_names_chosen['logo']]][$row_count] : ''; ?>"<?php print !empty($field_attributes[$row[$field_names_chosen['logo']]][$row_count]) ? drupal_attributes($field_attributes[$row[$field_names_chosen['logo']]][$row_count]) : ''; ?>>
            <!-- No logo because the exhibitor isn't enhanced. -->
          </td>
        <?php endif; ?>

        <td class="exhibitor-new-label">
          <?php print $field_values['new']; ?>
        </td>

        <td class="exhibitor-stand<?php print !empty($field_classes[$row[$field_names_chosen['stand']]][$row_count]) ? ' ' . $field_classes[$row[$field_names_chosen['stand']]][$row_count] : ''; ?>"<?php print !empty($field_attributes[$row[$field_names_chosen['stand']]][$row_count]) ? drupal_attributes($field_attributes[$row[$field_names_chosen['stand']]][$row_count]) : ''; ?>>
          <?php print $field_values['stand']; ?>
        </td>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
