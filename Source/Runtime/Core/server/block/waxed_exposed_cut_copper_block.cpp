

#include "waxed_exposed_cut_copper_block.h"

WaxedExposedCutCopperBlock::WaxedExposedCutCopperBlock() = default;
WaxedExposedCutCopperBlock::~WaxedExposedCutCopperBlock() = default;

short WaxedExposedCutCopperBlock::getId() const {
  return 19268;
}

std::shared_ptr<Block> WaxedExposedCutCopperBlock::clone() const {
  std::shared_ptr<WaxedExposedCutCopperBlock> copy = std::make_shared<WaxedExposedCutCopperBlock>();
  return copy;
}
