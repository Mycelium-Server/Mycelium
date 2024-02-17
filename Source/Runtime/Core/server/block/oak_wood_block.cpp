

#include "oak_wood_block.h"

OakWoodBlock::OakWoodBlock() = default;
OakWoodBlock::~OakWoodBlock() = default;

short OakWoodBlock::getId() const {
  return 164 + axis * 1;
}

std::shared_ptr<Block> OakWoodBlock::clone() const {
  std::shared_ptr<OakWoodBlock> copy = std::make_shared<OakWoodBlock>();
  copy->axis = axis;
  return copy;
}
