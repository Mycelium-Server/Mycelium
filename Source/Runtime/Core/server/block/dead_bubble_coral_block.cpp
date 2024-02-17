

#include "dead_bubble_coral_block.h"

DeadBubbleCoralBlock::DeadBubbleCoralBlock() = default;
DeadBubbleCoralBlock::~DeadBubbleCoralBlock() = default;

short DeadBubbleCoralBlock::getId() const {
  return 10405 + waterlogged * 1;
}

std::shared_ptr<Block> DeadBubbleCoralBlock::clone() const {
  std::shared_ptr<DeadBubbleCoralBlock> copy = std::make_shared<DeadBubbleCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
