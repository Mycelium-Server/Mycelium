

#include "brain_coral_block_block.h"

BrainCoralBlockBlock::BrainCoralBlockBlock() = default;
BrainCoralBlockBlock::~BrainCoralBlockBlock() = default;

short BrainCoralBlockBlock::getId() const {
  return 10397;
}

std::shared_ptr<Block> BrainCoralBlockBlock::clone() const {
  std::shared_ptr<BrainCoralBlockBlock> copy = std::make_shared<BrainCoralBlockBlock>();
  return copy;
}
