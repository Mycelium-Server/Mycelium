#include "bubble_coral_fan_block.h"

BubbleCoralFanBlock::BubbleCoralFanBlock() = default;
BubbleCoralFanBlock::~BubbleCoralFanBlock() = default;

short BubbleCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10435;
  if (waterlogged == WATERLOGGED_FALSE) return 10436;
  return 10435;
}
