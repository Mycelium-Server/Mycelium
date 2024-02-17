

#include "waxed_cut_copper_block.h"

WaxedCutCopperBlock::WaxedCutCopperBlock() = default;
WaxedCutCopperBlock::~WaxedCutCopperBlock() = default;

short WaxedCutCopperBlock::getId() const {
  return 19269;
}

std::shared_ptr<Block> WaxedCutCopperBlock::clone() const {
  std::shared_ptr<WaxedCutCopperBlock> copy = std::make_shared<WaxedCutCopperBlock>();
  return copy;
}
