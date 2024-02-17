

#include "fire_coral_block_block.h"

FireCoralBlockBlock::FireCoralBlockBlock() = default;
FireCoralBlockBlock::~FireCoralBlockBlock() = default;

short FireCoralBlockBlock::getId() const {
  return 10399;
}

std::shared_ptr<Block> FireCoralBlockBlock::clone() const {
  std::shared_ptr<FireCoralBlockBlock> copy = std::make_shared<FireCoralBlockBlock>();
  return copy;
}
