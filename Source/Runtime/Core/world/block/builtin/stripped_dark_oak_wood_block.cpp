

#include "stripped_dark_oak_wood_block.h"

StrippedDarkOakWoodBlock::StrippedDarkOakWoodBlock() = default;
StrippedDarkOakWoodBlock::~StrippedDarkOakWoodBlock() = default;

short StrippedDarkOakWoodBlock::getId() const {
  return 200 + axis * 1;
}

std::shared_ptr<Block> StrippedDarkOakWoodBlock::clone() const {
  std::shared_ptr<StrippedDarkOakWoodBlock> copy = std::make_shared<StrippedDarkOakWoodBlock>();
  copy->axis = axis;
  return copy;
}
