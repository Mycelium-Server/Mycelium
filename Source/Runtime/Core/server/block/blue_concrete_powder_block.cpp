

#include "blue_concrete_powder_block.h"

BlueConcretePowderBlock::BlueConcretePowderBlock() = default;
BlueConcretePowderBlock::~BlueConcretePowderBlock() = default;

short BlueConcretePowderBlock::getId() const {
  return 10346;
}

std::shared_ptr<Block> BlueConcretePowderBlock::clone() const {
  std::shared_ptr<BlueConcretePowderBlock> copy = std::make_shared<BlueConcretePowderBlock>();
  return copy;
}
