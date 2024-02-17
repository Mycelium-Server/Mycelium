

#include "gray_concrete_powder_block.h"

GrayConcretePowderBlock::GrayConcretePowderBlock() = default;
GrayConcretePowderBlock::~GrayConcretePowderBlock() = default;

short GrayConcretePowderBlock::getId() const {
  return 10342;
}

std::shared_ptr<Block> GrayConcretePowderBlock::clone() const {
  std::shared_ptr<GrayConcretePowderBlock> copy = std::make_shared<GrayConcretePowderBlock>();
  return copy;
}
