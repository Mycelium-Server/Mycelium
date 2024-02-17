

#include "dead_bubble_coral_block_block.h"

DeadBubbleCoralBlockBlock::DeadBubbleCoralBlockBlock() = default;
DeadBubbleCoralBlockBlock::~DeadBubbleCoralBlockBlock() = default;

short DeadBubbleCoralBlockBlock::getId() const {
  return 10393;
}

std::shared_ptr<Block> DeadBubbleCoralBlockBlock::clone() const {
  std::shared_ptr<DeadBubbleCoralBlockBlock> copy = std::make_shared<DeadBubbleCoralBlockBlock>();
  return copy;
}
