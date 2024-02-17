

#include "raw_gold_block_block.h"

RawGoldBlockBlock::RawGoldBlockBlock() = default;
RawGoldBlockBlock::~RawGoldBlockBlock() = default;

short RawGoldBlockBlock::getId() const {
  return 21434;
}

std::shared_ptr<Block> RawGoldBlockBlock::clone() const {
  std::shared_ptr<RawGoldBlockBlock> copy = std::make_shared<RawGoldBlockBlock>();
  return copy;
}
