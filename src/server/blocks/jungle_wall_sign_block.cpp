#include "jungle_wall_sign_block.h"

JungleWallSignBlock::JungleWallSignBlock() = default;
JungleWallSignBlock::~JungleWallSignBlock() = default;

short JungleWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4064;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4065;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4066;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4067;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4068;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4069;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4070;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4071;
  return 4065;
}
