

#include "waxed_oxidized_cut_copper_block.h"

WaxedOxidizedCutCopperBlock::WaxedOxidizedCutCopperBlock() = default;
WaxedOxidizedCutCopperBlock::~WaxedOxidizedCutCopperBlock() = default;

short WaxedOxidizedCutCopperBlock::getId() const {
  return 19266;
}

std::shared_ptr<Block> WaxedOxidizedCutCopperBlock::clone() const {
  std::shared_ptr<WaxedOxidizedCutCopperBlock> copy = std::make_shared<WaxedOxidizedCutCopperBlock>();
  return copy;
}
