

#include "green_concrete_powder_block.h"

GreenConcretePowderBlock::GreenConcretePowderBlock() = default;
GreenConcretePowderBlock::~GreenConcretePowderBlock() = default;

short GreenConcretePowderBlock::getId() const {
  return 10348;
}

std::shared_ptr<Block> GreenConcretePowderBlock::clone() const {
  std::shared_ptr<GreenConcretePowderBlock> copy = std::make_shared<GreenConcretePowderBlock>();
  return copy;
}
