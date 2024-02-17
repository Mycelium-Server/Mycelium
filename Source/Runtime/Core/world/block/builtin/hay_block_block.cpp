

#include "hay_block_block.h"

HayBlockBlock::HayBlockBlock() = default;
HayBlockBlock::~HayBlockBlock() = default;

short HayBlockBlock::getId() const {
  return 8604 + axis * 1;
}

std::shared_ptr<Block> HayBlockBlock::clone() const {
  std::shared_ptr<HayBlockBlock> copy = std::make_shared<HayBlockBlock>();
  copy->axis = axis;
  return copy;
}
