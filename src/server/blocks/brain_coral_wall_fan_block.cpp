#include "brain_coral_wall_fan_block.h"

BrainCoralWallFanBlock::BrainCoralWallFanBlock() = default;
BrainCoralWallFanBlock::~BrainCoralWallFanBlock() = default;

short BrainCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10489;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10490;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10491;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10492;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10493;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10494;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10495;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10496;
  return 10489;
}
