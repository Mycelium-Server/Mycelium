

#include "weathered_cut_copper_block.h"

WeatheredCutCopperBlock::WeatheredCutCopperBlock() = default;
WeatheredCutCopperBlock::~WeatheredCutCopperBlock() = default;

short WeatheredCutCopperBlock::getId() const {
  return 18915;
}

std::shared_ptr<Block> WeatheredCutCopperBlock::clone() const {
  std::shared_ptr<WeatheredCutCopperBlock> copy = std::make_shared<WeatheredCutCopperBlock>();
  return copy;
}
