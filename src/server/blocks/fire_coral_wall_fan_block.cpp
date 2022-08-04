#include "fire_coral_wall_fan_block.h"

FireCoralWallFanBlock::FireCoralWallFanBlock() = default;
FireCoralWallFanBlock::~FireCoralWallFanBlock() = default;

short FireCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10505;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10506;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10507;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10508;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10509;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10510;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10511;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10512;
  return 10505;
}
