

#include "waxed_exposed_copper_block.h"

WaxedExposedCopperBlock::WaxedExposedCopperBlock() = default;
WaxedExposedCopperBlock::~WaxedExposedCopperBlock() = default;

short WaxedExposedCopperBlock::getId() const {
  return 19264;
}

std::shared_ptr<Block> WaxedExposedCopperBlock::clone() const {
  std::shared_ptr<WaxedExposedCopperBlock> copy = std::make_shared<WaxedExposedCopperBlock>();
  return copy;
}
