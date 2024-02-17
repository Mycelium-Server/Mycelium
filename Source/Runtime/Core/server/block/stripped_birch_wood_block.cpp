

#include "stripped_birch_wood_block.h"

StrippedBirchWoodBlock::StrippedBirchWoodBlock() = default;
StrippedBirchWoodBlock::~StrippedBirchWoodBlock() = default;

short StrippedBirchWoodBlock::getId() const {
  return 191 + axis * 1;
}

std::shared_ptr<Block> StrippedBirchWoodBlock::clone() const {
  std::shared_ptr<StrippedBirchWoodBlock> copy = std::make_shared<StrippedBirchWoodBlock>();
  copy->axis = axis;
  return copy;
}
