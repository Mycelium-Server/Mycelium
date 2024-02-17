

#include "exposed_copper_block.h"

ExposedCopperBlock::ExposedCopperBlock() = default;
ExposedCopperBlock::~ExposedCopperBlock() = default;

short ExposedCopperBlock::getId() const {
  return 18910;
}

std::shared_ptr<Block> ExposedCopperBlock::clone() const {
  std::shared_ptr<ExposedCopperBlock> copy = std::make_shared<ExposedCopperBlock>();
  return copy;
}
