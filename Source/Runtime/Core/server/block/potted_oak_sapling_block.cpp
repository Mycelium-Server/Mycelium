

#include "potted_oak_sapling_block.h"

PottedOakSaplingBlock::PottedOakSaplingBlock() = default;
PottedOakSaplingBlock::~PottedOakSaplingBlock() = default;

short PottedOakSaplingBlock::getId() const {
  return 6898;
}

std::shared_ptr<Block> PottedOakSaplingBlock::clone() const {
  std::shared_ptr<PottedOakSaplingBlock> copy = std::make_shared<PottedOakSaplingBlock>();
  return copy;
}
