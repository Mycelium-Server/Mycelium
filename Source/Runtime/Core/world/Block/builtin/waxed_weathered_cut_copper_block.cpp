

#include "waxed_weathered_cut_copper_block.h"

WaxedWeatheredCutCopperBlock::WaxedWeatheredCutCopperBlock() = default;
WaxedWeatheredCutCopperBlock::~WaxedWeatheredCutCopperBlock() = default;

short WaxedWeatheredCutCopperBlock::getId() const {
  return 19267;
}

std::shared_ptr<Block> WaxedWeatheredCutCopperBlock::clone() const {
  std::shared_ptr<WaxedWeatheredCutCopperBlock> copy = std::make_shared<WaxedWeatheredCutCopperBlock>();
  return copy;
}
