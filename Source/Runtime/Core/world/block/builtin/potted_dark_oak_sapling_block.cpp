

#include "potted_dark_oak_sapling_block.h"

PottedDarkOakSaplingBlock::PottedDarkOakSaplingBlock() = default;
PottedDarkOakSaplingBlock::~PottedDarkOakSaplingBlock() = default;

short PottedDarkOakSaplingBlock::getId() const {
  return 6903;
}

std::shared_ptr<Block> PottedDarkOakSaplingBlock::clone() const {
  std::shared_ptr<PottedDarkOakSaplingBlock> copy = std::make_shared<PottedDarkOakSaplingBlock>();
  return copy;
}
