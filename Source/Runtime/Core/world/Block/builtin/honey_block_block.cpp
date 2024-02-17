

#include "honey_block_block.h"

HoneyBlockBlock::HoneyBlockBlock() = default;
HoneyBlockBlock::~HoneyBlockBlock() = default;

short HoneyBlockBlock::getId() const {
  return 17033;
}

std::shared_ptr<Block> HoneyBlockBlock::clone() const {
  std::shared_ptr<HoneyBlockBlock> copy = std::make_shared<HoneyBlockBlock>();
  return copy;
}
