#include "dead_brain_coral_wall_fan_block.h"

DeadBrainCoralWallFanBlock::DeadBrainCoralWallFanBlock() = default;
DeadBrainCoralWallFanBlock::~DeadBrainCoralWallFanBlock() = default;

short DeadBrainCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10449;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10450;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10451;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10452;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10453;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10454;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10455;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10456;
  return 10449;
}
