

#include "lime_concrete_powder_block.h"

LimeConcretePowderBlock::LimeConcretePowderBlock() = default;
LimeConcretePowderBlock::~LimeConcretePowderBlock() = default;

short LimeConcretePowderBlock::getId() const {
  return 10340;
}

std::shared_ptr<Block> LimeConcretePowderBlock::clone() const {
  std::shared_ptr<LimeConcretePowderBlock> copy = std::make_shared<LimeConcretePowderBlock>();
  return copy;
}
