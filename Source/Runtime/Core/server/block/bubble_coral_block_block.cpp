

#include "bubble_coral_block_block.h"

BubbleCoralBlockBlock::BubbleCoralBlockBlock() = default;
BubbleCoralBlockBlock::~BubbleCoralBlockBlock() = default;

short BubbleCoralBlockBlock::getId() const {
  return 10398;
}

std::shared_ptr<Block> BubbleCoralBlockBlock::clone() const {
  std::shared_ptr<BubbleCoralBlockBlock> copy = std::make_shared<BubbleCoralBlockBlock>();
  return copy;
}
