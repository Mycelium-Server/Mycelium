

#include "diamond_ore_block.h"

DiamondOreBlock::DiamondOreBlock() = default;
DiamondOreBlock::~DiamondOreBlock() = default;

short DiamondOreBlock::getId() const {
  return 3608;
}

std::shared_ptr<Block> DiamondOreBlock::clone() const {
  std::shared_ptr<DiamondOreBlock> copy = std::make_shared<DiamondOreBlock>();
  return copy;
}
