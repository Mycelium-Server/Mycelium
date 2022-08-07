#include "dead_fire_coral_wall_fan_block.h"

DeadFireCoralWallFanBlock::DeadFireCoralWallFanBlock() = default;
DeadFireCoralWallFanBlock::~DeadFireCoralWallFanBlock() = default;

short DeadFireCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10465;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10466;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10467;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10468;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10469;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10470;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10471;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10472;
  return 10465;
}
