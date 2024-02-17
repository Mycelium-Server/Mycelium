

#include "dead_horn_coral_block_block.h"

DeadHornCoralBlockBlock::DeadHornCoralBlockBlock() = default;
DeadHornCoralBlockBlock::~DeadHornCoralBlockBlock() = default;

short DeadHornCoralBlockBlock::getId() const {
  return 10395;
}

std::shared_ptr<Block> DeadHornCoralBlockBlock::clone() const {
  std::shared_ptr<DeadHornCoralBlockBlock> copy = std::make_shared<DeadHornCoralBlockBlock>();
  return copy;
}
