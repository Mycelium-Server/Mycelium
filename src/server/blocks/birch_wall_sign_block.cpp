#include "birch_wall_sign_block.h"

BirchWallSignBlock::BirchWallSignBlock() = default;
BirchWallSignBlock::~BirchWallSignBlock() = default;

short BirchWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4048;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4049;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4050;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4051;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4052;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4053;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4054;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4055;
  return 4049;
}
