

#include "bubble_coral_block.h"

BubbleCoralBlock::BubbleCoralBlock() = default;
BubbleCoralBlock::~BubbleCoralBlock() = default;

short BubbleCoralBlock::getId() const {
  return 10415 + waterlogged * 1;
}

std::shared_ptr<Block> BubbleCoralBlock::clone() const {
  std::shared_ptr<BubbleCoralBlock> copy = std::make_shared<BubbleCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
