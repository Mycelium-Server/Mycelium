

#include "red_concrete_powder_block.h"

RedConcretePowderBlock::RedConcretePowderBlock() = default;
RedConcretePowderBlock::~RedConcretePowderBlock() = default;

short RedConcretePowderBlock::getId() const {
  return 10349;
}

std::shared_ptr<Block> RedConcretePowderBlock::clone() const {
  std::shared_ptr<RedConcretePowderBlock> copy = std::make_shared<RedConcretePowderBlock>();
  return copy;
}
