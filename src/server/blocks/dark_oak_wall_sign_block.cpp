#include "dark_oak_wall_sign_block.h"

DarkOakWallSignBlock::DarkOakWallSignBlock() = default;
DarkOakWallSignBlock::~DarkOakWallSignBlock() = default;

short DarkOakWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4072;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4073;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4074;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4075;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4076;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4077;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4078;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4079;
  return 4073;
}
