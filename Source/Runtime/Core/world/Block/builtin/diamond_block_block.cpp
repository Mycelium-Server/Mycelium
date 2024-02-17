

#include "diamond_block_block.h"

DiamondBlockBlock::DiamondBlockBlock() = default;
DiamondBlockBlock::~DiamondBlockBlock() = default;

short DiamondBlockBlock::getId() const {
  return 3610;
}

std::shared_ptr<Block> DiamondBlockBlock::clone() const {
  std::shared_ptr<DiamondBlockBlock> copy = std::make_shared<DiamondBlockBlock>();
  return copy;
}
