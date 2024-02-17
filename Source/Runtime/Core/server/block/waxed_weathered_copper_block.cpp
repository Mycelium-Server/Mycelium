

#include "waxed_weathered_copper_block.h"

WaxedWeatheredCopperBlock::WaxedWeatheredCopperBlock() = default;
WaxedWeatheredCopperBlock::~WaxedWeatheredCopperBlock() = default;

short WaxedWeatheredCopperBlock::getId() const {
  return 19263;
}

std::shared_ptr<Block> WaxedWeatheredCopperBlock::clone() const {
  std::shared_ptr<WaxedWeatheredCopperBlock> copy = std::make_shared<WaxedWeatheredCopperBlock>();
  return copy;
}
