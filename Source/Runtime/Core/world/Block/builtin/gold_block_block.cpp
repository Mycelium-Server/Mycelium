

#include "gold_block_block.h"

GoldBlockBlock::GoldBlockBlock() = default;
GoldBlockBlock::~GoldBlockBlock() = default;

short GoldBlockBlock::getId() const {
  return 1681;
}

std::shared_ptr<Block> GoldBlockBlock::clone() const {
  std::shared_ptr<GoldBlockBlock> copy = std::make_shared<GoldBlockBlock>();
  return copy;
}
