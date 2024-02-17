

#include "purple_concrete_powder_block.h"

PurpleConcretePowderBlock::PurpleConcretePowderBlock() = default;
PurpleConcretePowderBlock::~PurpleConcretePowderBlock() = default;

short PurpleConcretePowderBlock::getId() const {
  return 10345;
}

std::shared_ptr<Block> PurpleConcretePowderBlock::clone() const {
  std::shared_ptr<PurpleConcretePowderBlock> copy = std::make_shared<PurpleConcretePowderBlock>();
  return copy;
}
