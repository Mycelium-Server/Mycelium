

#include "bubble_column_block.h"

BubbleColumnBlock::BubbleColumnBlock() = default;
BubbleColumnBlock::~BubbleColumnBlock() = default;

short BubbleColumnBlock::getId() const {
  return 10548 + drag * 1;
}

std::shared_ptr<Block> BubbleColumnBlock::clone() const {
  std::shared_ptr<BubbleColumnBlock> copy = std::make_shared<BubbleColumnBlock>();
  copy->drag = drag;
  return copy;
}
