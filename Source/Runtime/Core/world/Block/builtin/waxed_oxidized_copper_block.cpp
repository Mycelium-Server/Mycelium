

#include "waxed_oxidized_copper_block.h"

WaxedOxidizedCopperBlock::WaxedOxidizedCopperBlock() = default;
WaxedOxidizedCopperBlock::~WaxedOxidizedCopperBlock() = default;

short WaxedOxidizedCopperBlock::getId() const {
  return 19265;
}

std::shared_ptr<Block> WaxedOxidizedCopperBlock::clone() const {
  std::shared_ptr<WaxedOxidizedCopperBlock> copy = std::make_shared<WaxedOxidizedCopperBlock>();
  return copy;
}
