

#include "light_gray_concrete_powder_block.h"

LightGrayConcretePowderBlock::LightGrayConcretePowderBlock() = default;
LightGrayConcretePowderBlock::~LightGrayConcretePowderBlock() = default;

short LightGrayConcretePowderBlock::getId() const {
  return 10343;
}

std::shared_ptr<Block> LightGrayConcretePowderBlock::clone() const {
  std::shared_ptr<LightGrayConcretePowderBlock> copy = std::make_shared<LightGrayConcretePowderBlock>();
  return copy;
}
