

#include "stripped_oak_wood_block.h"

StrippedOakWoodBlock::StrippedOakWoodBlock() = default;
StrippedOakWoodBlock::~StrippedOakWoodBlock() = default;

short StrippedOakWoodBlock::getId() const {
  return 185 + axis * 1;
}

std::shared_ptr<Block> StrippedOakWoodBlock::clone() const {
  std::shared_ptr<StrippedOakWoodBlock> copy = std::make_shared<StrippedOakWoodBlock>();
  copy->axis = axis;
  return copy;
}
