#include "bubble_coral_wall_fan_block.h"

BubbleCoralWallFanBlock::BubbleCoralWallFanBlock() = default;
BubbleCoralWallFanBlock::~BubbleCoralWallFanBlock() = default;

short BubbleCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10497;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10498;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10499;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10500;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10501;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10502;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10503;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10504;
  return 10497;
}
