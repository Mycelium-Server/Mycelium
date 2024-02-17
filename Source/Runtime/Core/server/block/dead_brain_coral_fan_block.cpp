

#include "dead_brain_coral_fan_block.h"

DeadBrainCoralFanBlock::DeadBrainCoralFanBlock() = default;
DeadBrainCoralFanBlock::~DeadBrainCoralFanBlock() = default;

short DeadBrainCoralFanBlock::getId() const {
  return 10423 + waterlogged * 1;
}

std::shared_ptr<Block> DeadBrainCoralFanBlock::clone() const {
  std::shared_ptr<DeadBrainCoralFanBlock> copy = std::make_shared<DeadBrainCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
