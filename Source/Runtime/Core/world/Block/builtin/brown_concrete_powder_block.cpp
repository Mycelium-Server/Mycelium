

#include "brown_concrete_powder_block.h"

BrownConcretePowderBlock::BrownConcretePowderBlock() = default;
BrownConcretePowderBlock::~BrownConcretePowderBlock() = default;

short BrownConcretePowderBlock::getId() const {
  return 10347;
}

std::shared_ptr<Block> BrownConcretePowderBlock::clone() const {
  std::shared_ptr<BrownConcretePowderBlock> copy = std::make_shared<BrownConcretePowderBlock>();
  return copy;
}
