

#include "dark_oak_wood_block.h"

DarkOakWoodBlock::DarkOakWoodBlock() = default;
DarkOakWoodBlock::~DarkOakWoodBlock() = default;

short DarkOakWoodBlock::getId() const {
  return 179 + axis * 1;
}

std::shared_ptr<Block> DarkOakWoodBlock::clone() const {
  std::shared_ptr<DarkOakWoodBlock> copy = std::make_shared<DarkOakWoodBlock>();
  copy->axis = axis;
  return copy;
}
