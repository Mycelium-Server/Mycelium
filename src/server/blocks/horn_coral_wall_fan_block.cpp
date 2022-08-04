#include "horn_coral_wall_fan_block.h"

HornCoralWallFanBlock::HornCoralWallFanBlock() = default;
HornCoralWallFanBlock::~HornCoralWallFanBlock() = default;

short HornCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10513;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10514;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10515;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10516;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10517;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10518;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10519;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10520;
  return 10513;
}
