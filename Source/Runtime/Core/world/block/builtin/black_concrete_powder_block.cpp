

#include "black_concrete_powder_block.h"

BlackConcretePowderBlock::BlackConcretePowderBlock() = default;
BlackConcretePowderBlock::~BlackConcretePowderBlock() = default;

short BlackConcretePowderBlock::getId() const {
  return 10350;
}

std::shared_ptr<Block> BlackConcretePowderBlock::clone() const {
  std::shared_ptr<BlackConcretePowderBlock> copy = std::make_shared<BlackConcretePowderBlock>();
  return copy;
}
