

#include "dead_bubble_coral_fan_block.h"

DeadBubbleCoralFanBlock::DeadBubbleCoralFanBlock() = default;
DeadBubbleCoralFanBlock::~DeadBubbleCoralFanBlock() = default;

short DeadBubbleCoralFanBlock::getId() const {
  return 10425 + waterlogged * 1;
}

std::shared_ptr<Block> DeadBubbleCoralFanBlock::clone() const {
  std::shared_ptr<DeadBubbleCoralFanBlock> copy = std::make_shared<DeadBubbleCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
