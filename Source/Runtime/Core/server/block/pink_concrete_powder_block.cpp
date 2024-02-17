

#include "pink_concrete_powder_block.h"

PinkConcretePowderBlock::PinkConcretePowderBlock() = default;
PinkConcretePowderBlock::~PinkConcretePowderBlock() = default;

short PinkConcretePowderBlock::getId() const {
  return 10341;
}

std::shared_ptr<Block> PinkConcretePowderBlock::clone() const {
  std::shared_ptr<PinkConcretePowderBlock> copy = std::make_shared<PinkConcretePowderBlock>();
  return copy;
}
