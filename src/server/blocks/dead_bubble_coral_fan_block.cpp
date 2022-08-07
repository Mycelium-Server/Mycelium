#include "dead_bubble_coral_fan_block.h"

DeadBubbleCoralFanBlock::DeadBubbleCoralFanBlock() = default;
DeadBubbleCoralFanBlock::~DeadBubbleCoralFanBlock() = default;

short DeadBubbleCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10425;
  if (waterlogged == WATERLOGGED_FALSE) return 10426;
  return 10425;
}
