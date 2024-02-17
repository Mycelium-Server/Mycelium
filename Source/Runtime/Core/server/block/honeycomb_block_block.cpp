

#include "honeycomb_block_block.h"

HoneycombBlockBlock::HoneycombBlockBlock() = default;
HoneycombBlockBlock::~HoneycombBlockBlock() = default;

short HoneycombBlockBlock::getId() const {
  return 17034;
}

std::shared_ptr<Block> HoneycombBlockBlock::clone() const {
  std::shared_ptr<HoneycombBlockBlock> copy = std::make_shared<HoneycombBlockBlock>();
  return copy;
}
