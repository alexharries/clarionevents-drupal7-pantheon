<?php

/**
 * @file
 * Contains TetherStatsChartsComboSchema.
 */

require_once __DIR__ . '/TetherStatsChartsSteppedChartSchema.php';
require_once __DIR__ . '/TetherStatsChartsComboChartSchemaInterface.php';

/**
 * Schema class for a Combo Chart.
 *
 * Builds a description of the chart to be generated by the
 * TetherStatsChartsComboChart class.
 *
 * @see TetherStatsChartsComboChart
 */
class TetherStatsChartsComboChartSchema extends TetherStatsChartsSteppedChartSchema implements TetherStatsChartsComboChartSchemaInterface {

  /**
   * The line series specification.
   *
   * Line series to be added to the chart which aggregate over column values
   * added to the chart.
   *
   * @var array
   */
  protected $series = array();

  /**
   * Gets the array specification for a line series.
   *
   * This is generally only useful for the Chart object which uses this
   * schema.
   *
   * @param int|null $index
   *   (Optional) The index of the line series spec to return.
   *
   * @return array
   *   The line series spec. If $index is NULL, the entire array of
   *   line series will be returned.
   */
  public function getSeriesSpec($index = NULL) {

    if (isset($index)) {

      return $this->series[$index];
    }
    return $this->series;
  }

  /**
   * Adds a summation line of the columns.
   *
   * @param string $title
   *   The title of the line series.
   *
   * @return $this
   */
  public function addSummationLineSeries($title = 'Total') {

    $this->series[] = array(
      'series_type' => TetherStatsChartsComboChartSchemaInterface::SERIES_SUMMATION,
      'title' => $title,
    );
    return $this;
  }

  /**
   * Adds a mean line of the columns.
   *
   * @param string $title
   *   The title of the line series.
   *
   * @return $this
   */
  public function addMeanLineSeries($title = 'Mean') {

    $this->series[] = array(
      'series_type' => TetherStatsChartsComboChartSchemaInterface::SERIES_MEAN,
      'title' => $title,
    );
    return $this;
  }

}
