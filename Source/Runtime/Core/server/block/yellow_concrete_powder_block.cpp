

#include "yellow_concrete_powder_block.h"

YellowConcretePowderBlock::YellowConcretePowderBlock() = default;
YellowConcretePowderBlock::~YellowConcretePowderBlock() = default;

short YellowConcretePowderBlock::getId() const {
  return 10339;
}

std::shared_ptr<Block> YellowConcretePowderBlock::clone() const {
  std::shared_ptr<YellowConcretePowderBlock> copy = std::make_shared<YellowConcretePowderBlock>();
  return copy;
}
