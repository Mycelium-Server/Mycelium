

#include "magenta_concrete_powder_block.h"

MagentaConcretePowderBlock::MagentaConcretePowderBlock() = default;
MagentaConcretePowderBlock::~MagentaConcretePowderBlock() = default;

short MagentaConcretePowderBlock::getId() const {
  return 10337;
}

std::shared_ptr<Block> MagentaConcretePowderBlock::clone() const {
  std::shared_ptr<MagentaConcretePowderBlock> copy = std::make_shared<MagentaConcretePowderBlock>();
  return copy;
}
