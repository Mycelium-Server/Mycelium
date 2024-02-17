

#include "dead_brain_coral_block_block.h"

DeadBrainCoralBlockBlock::DeadBrainCoralBlockBlock() = default;
DeadBrainCoralBlockBlock::~DeadBrainCoralBlockBlock() = default;

short DeadBrainCoralBlockBlock::getId() const {
  return 10392;
}

std::shared_ptr<Block> DeadBrainCoralBlockBlock::clone() const {
  std::shared_ptr<DeadBrainCoralBlockBlock> copy = std::make_shared<DeadBrainCoralBlockBlock>();
  return copy;
}
