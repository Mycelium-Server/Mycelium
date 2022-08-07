#include "oak_wall_sign_block.h"

OakWallSignBlock::OakWallSignBlock() = default;
OakWallSignBlock::~OakWallSignBlock() = default;

short OakWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4032;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4033;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4034;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4035;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4036;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4037;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4038;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4039;
  return 4033;
}
