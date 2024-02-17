

#include "exposed_cut_copper_block.h"

ExposedCutCopperBlock::ExposedCutCopperBlock() = default;
ExposedCutCopperBlock::~ExposedCutCopperBlock() = default;

short ExposedCutCopperBlock::getId() const {
  return 18916;
}

std::shared_ptr<Block> ExposedCutCopperBlock::clone() const {
  std::shared_ptr<ExposedCutCopperBlock> copy = std::make_shared<ExposedCutCopperBlock>();
  return copy;
}
