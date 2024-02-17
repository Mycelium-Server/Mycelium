

#include "weathered_copper_block.h"

WeatheredCopperBlock::WeatheredCopperBlock() = default;
WeatheredCopperBlock::~WeatheredCopperBlock() = default;

short WeatheredCopperBlock::getId() const {
  return 18909;
}

std::shared_ptr<Block> WeatheredCopperBlock::clone() const {
  std::shared_ptr<WeatheredCopperBlock> copy = std::make_shared<WeatheredCopperBlock>();
  return copy;
}
