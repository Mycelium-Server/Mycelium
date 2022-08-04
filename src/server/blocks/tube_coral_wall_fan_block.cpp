#include "tube_coral_wall_fan_block.h"

TubeCoralWallFanBlock::TubeCoralWallFanBlock() = default;
TubeCoralWallFanBlock::~TubeCoralWallFanBlock() = default;

short TubeCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10481;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10482;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10483;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10484;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10485;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10486;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10487;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10488;
  return 10481;
}
