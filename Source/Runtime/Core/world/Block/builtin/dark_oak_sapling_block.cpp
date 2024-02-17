

#include "dark_oak_sapling_block.h"

DarkOakSaplingBlock::DarkOakSaplingBlock() = default;
DarkOakSaplingBlock::~DarkOakSaplingBlock() = default;

short DarkOakSaplingBlock::getId() const {
  return 32 + stage * 1;
}

std::shared_ptr<Block> DarkOakSaplingBlock::clone() const {
  std::shared_ptr<DarkOakSaplingBlock> copy = std::make_shared<DarkOakSaplingBlock>();
  copy->stage = stage;
  return copy;
}
