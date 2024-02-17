

#include "white_concrete_powder_block.h"

WhiteConcretePowderBlock::WhiteConcretePowderBlock() = default;
WhiteConcretePowderBlock::~WhiteConcretePowderBlock() = default;

short WhiteConcretePowderBlock::getId() const {
  return 10335;
}

std::shared_ptr<Block> WhiteConcretePowderBlock::clone() const {
  std::shared_ptr<WhiteConcretePowderBlock> copy = std::make_shared<WhiteConcretePowderBlock>();
  return copy;
}
