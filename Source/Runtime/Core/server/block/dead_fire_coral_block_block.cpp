

#include "dead_fire_coral_block_block.h"

DeadFireCoralBlockBlock::DeadFireCoralBlockBlock() = default;
DeadFireCoralBlockBlock::~DeadFireCoralBlockBlock() = default;

short DeadFireCoralBlockBlock::getId() const {
  return 10394;
}

std::shared_ptr<Block> DeadFireCoralBlockBlock::clone() const {
  std::shared_ptr<DeadFireCoralBlockBlock> copy = std::make_shared<DeadFireCoralBlockBlock>();
  return copy;
}
