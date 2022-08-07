#include "dead_tube_coral_wall_fan_block.h"

DeadTubeCoralWallFanBlock::DeadTubeCoralWallFanBlock() = default;
DeadTubeCoralWallFanBlock::~DeadTubeCoralWallFanBlock() = default;

short DeadTubeCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10441;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10442;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10443;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10444;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10445;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10446;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10447;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10448;
  return 10441;
}
