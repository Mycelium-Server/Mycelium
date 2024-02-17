

#include "orange_concrete_powder_block.h"

OrangeConcretePowderBlock::OrangeConcretePowderBlock() = default;
OrangeConcretePowderBlock::~OrangeConcretePowderBlock() = default;

short OrangeConcretePowderBlock::getId() const {
  return 10336;
}

std::shared_ptr<Block> OrangeConcretePowderBlock::clone() const {
  std::shared_ptr<OrangeConcretePowderBlock> copy = std::make_shared<OrangeConcretePowderBlock>();
  return copy;
}
