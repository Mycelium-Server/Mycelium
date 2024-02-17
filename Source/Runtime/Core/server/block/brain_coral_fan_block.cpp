

#include "brain_coral_fan_block.h"

BrainCoralFanBlock::BrainCoralFanBlock() = default;
BrainCoralFanBlock::~BrainCoralFanBlock() = default;

short BrainCoralFanBlock::getId() const {
  return 10433 + waterlogged * 1;
}

std::shared_ptr<Block> BrainCoralFanBlock::clone() const {
  std::shared_ptr<BrainCoralFanBlock> copy = std::make_shared<BrainCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
