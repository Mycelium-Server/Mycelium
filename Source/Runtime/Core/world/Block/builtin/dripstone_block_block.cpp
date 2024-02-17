

#include "dripstone_block_block.h"

DripstoneBlockBlock::DripstoneBlockBlock() = default;
DripstoneBlockBlock::~DripstoneBlockBlock() = default;

short DripstoneBlockBlock::getId() const {
  return 19658;
}

std::shared_ptr<Block> DripstoneBlockBlock::clone() const {
  std::shared_ptr<DripstoneBlockBlock> copy = std::make_shared<DripstoneBlockBlock>();
  return copy;
}
