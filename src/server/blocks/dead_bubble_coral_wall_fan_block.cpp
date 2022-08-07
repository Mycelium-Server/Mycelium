#include "dead_bubble_coral_wall_fan_block.h"

DeadBubbleCoralWallFanBlock::DeadBubbleCoralWallFanBlock() = default;
DeadBubbleCoralWallFanBlock::~DeadBubbleCoralWallFanBlock() = default;

short DeadBubbleCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10457;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10458;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10459;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10460;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10461;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10462;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10463;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10464;
  return 10457;
}
