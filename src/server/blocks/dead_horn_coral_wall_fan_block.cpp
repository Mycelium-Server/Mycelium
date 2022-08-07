#include "dead_horn_coral_wall_fan_block.h"

DeadHornCoralWallFanBlock::DeadHornCoralWallFanBlock() = default;
DeadHornCoralWallFanBlock::~DeadHornCoralWallFanBlock() = default;

short DeadHornCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10473;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10474;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10475;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10476;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10477;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10478;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10479;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10480;
  return 10473;
}
