#include "bubble_column_block.h"

BubbleColumnBlock::BubbleColumnBlock() = default;
BubbleColumnBlock::~BubbleColumnBlock() = default;

short BubbleColumnBlock::getId() const {
  if (drag == DRAG_TRUE) return 10548;
  if (drag == DRAG_FALSE) return 10549;
  return 10548;
}
