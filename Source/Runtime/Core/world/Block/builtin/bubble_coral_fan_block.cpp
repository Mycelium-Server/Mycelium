

#include "bubble_coral_fan_block.h"

BubbleCoralFanBlock::BubbleCoralFanBlock() = default;
BubbleCoralFanBlock::~BubbleCoralFanBlock() = default;

short BubbleCoralFanBlock::getId() const {
  return 10435 + waterlogged * 1;
}

std::shared_ptr<Block> BubbleCoralFanBlock::clone() const {
  std::shared_ptr<BubbleCoralFanBlock> copy = std::make_shared<BubbleCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
