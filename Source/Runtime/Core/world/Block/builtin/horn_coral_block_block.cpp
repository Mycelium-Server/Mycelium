

#include "horn_coral_block_block.h"

HornCoralBlockBlock::HornCoralBlockBlock() = default;
HornCoralBlockBlock::~HornCoralBlockBlock() = default;

short HornCoralBlockBlock::getId() const {
  return 10400;
}

std::shared_ptr<Block> HornCoralBlockBlock::clone() const {
  std::shared_ptr<HornCoralBlockBlock> copy = std::make_shared<HornCoralBlockBlock>();
  return copy;
}
