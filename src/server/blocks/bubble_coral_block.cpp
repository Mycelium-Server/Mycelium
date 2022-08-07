#include "bubble_coral_block.h"

BubbleCoralBlock::BubbleCoralBlock() = default;
BubbleCoralBlock::~BubbleCoralBlock() = default;

short BubbleCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10415;
  if (waterlogged == WATERLOGGED_FALSE) return 10416;
  return 10415;
}
