

#include "oak_sapling_block.h"

OakSaplingBlock::OakSaplingBlock() = default;
OakSaplingBlock::~OakSaplingBlock() = default;

short OakSaplingBlock::getId() const {
  return 22 + stage * 1;
}

std::shared_ptr<Block> OakSaplingBlock::clone() const {
  std::shared_ptr<OakSaplingBlock> copy = std::make_shared<OakSaplingBlock>();
  copy->stage = stage;
  return copy;
}
