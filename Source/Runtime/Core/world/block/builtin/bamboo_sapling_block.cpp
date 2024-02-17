

#include "bamboo_sapling_block.h"

BambooSaplingBlock::BambooSaplingBlock() = default;
BambooSaplingBlock::~BambooSaplingBlock() = default;

short BambooSaplingBlock::getId() const {
  return 10532;
}

std::shared_ptr<Block> BambooSaplingBlock::clone() const {
  std::shared_ptr<BambooSaplingBlock> copy = std::make_shared<BambooSaplingBlock>();
  return copy;
}
