

#include "birch_wood_block.h"

BirchWoodBlock::BirchWoodBlock() = default;
BirchWoodBlock::~BirchWoodBlock() = default;

short BirchWoodBlock::getId() const {
  return 170 + axis * 1;
}

std::shared_ptr<Block> BirchWoodBlock::clone() const {
  std::shared_ptr<BirchWoodBlock> copy = std::make_shared<BirchWoodBlock>();
  copy->axis = axis;
  return copy;
}
