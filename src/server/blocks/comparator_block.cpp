#include "comparator_block.h"

ComparatorBlock::ComparatorBlock() = default;
ComparatorBlock::~ComparatorBlock() = default;

short ComparatorBlock::getId() const {
  if (facing == FACING_NORTH && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7295;
  if (facing == FACING_NORTH && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7296;
  if (facing == FACING_NORTH && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7297;
  if (facing == FACING_NORTH && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7298;
  if (facing == FACING_SOUTH && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7299;
  if (facing == FACING_SOUTH && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7300;
  if (facing == FACING_SOUTH && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7301;
  if (facing == FACING_SOUTH && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7302;
  if (facing == FACING_WEST && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7303;
  if (facing == FACING_WEST && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7304;
  if (facing == FACING_WEST && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7305;
  if (facing == FACING_WEST && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7306;
  if (facing == FACING_EAST && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7307;
  if (facing == FACING_EAST && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7308;
  if (facing == FACING_EAST && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7309;
  if (facing == FACING_EAST && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7310;
  return 7296;
}
