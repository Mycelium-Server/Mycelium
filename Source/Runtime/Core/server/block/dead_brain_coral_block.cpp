

#include "dead_brain_coral_block.h"

DeadBrainCoralBlock::DeadBrainCoralBlock() = default;
DeadBrainCoralBlock::~DeadBrainCoralBlock() = default;

short DeadBrainCoralBlock::getId() const {
  return 10403 + waterlogged * 1;
}

std::shared_ptr<Block> DeadBrainCoralBlock::clone() const {
  std::shared_ptr<DeadBrainCoralBlock> copy = std::make_shared<DeadBrainCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
