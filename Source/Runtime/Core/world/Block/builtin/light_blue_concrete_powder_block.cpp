

#include "light_blue_concrete_powder_block.h"

LightBlueConcretePowderBlock::LightBlueConcretePowderBlock() = default;
LightBlueConcretePowderBlock::~LightBlueConcretePowderBlock() = default;

short LightBlueConcretePowderBlock::getId() const {
  return 10338;
}

std::shared_ptr<Block> LightBlueConcretePowderBlock::clone() const {
  std::shared_ptr<LightBlueConcretePowderBlock> copy = std::make_shared<LightBlueConcretePowderBlock>();
  return copy;
}
