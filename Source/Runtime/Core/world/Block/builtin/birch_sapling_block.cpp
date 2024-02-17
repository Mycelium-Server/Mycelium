

#include "birch_sapling_block.h"

BirchSaplingBlock::BirchSaplingBlock() = default;
BirchSaplingBlock::~BirchSaplingBlock() = default;

short BirchSaplingBlock::getId() const {
  return 26 + stage * 1;
}

std::shared_ptr<Block> BirchSaplingBlock::clone() const {
  std::shared_ptr<BirchSaplingBlock> copy = std::make_shared<BirchSaplingBlock>();
  copy->stage = stage;
  return copy;
}
