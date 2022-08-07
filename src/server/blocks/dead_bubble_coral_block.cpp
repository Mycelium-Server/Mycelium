#include "dead_bubble_coral_block.h"

DeadBubbleCoralBlock::DeadBubbleCoralBlock() = default;
DeadBubbleCoralBlock::~DeadBubbleCoralBlock() = default;

short DeadBubbleCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10405;
  if (waterlogged == WATERLOGGED_FALSE) return 10406;
  return 10405;
}
