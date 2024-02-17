

#include "stripped_spruce_wood_block.h"

StrippedSpruceWoodBlock::StrippedSpruceWoodBlock() = default;
StrippedSpruceWoodBlock::~StrippedSpruceWoodBlock() = default;

short StrippedSpruceWoodBlock::getId() const {
  return 188 + axis * 1;
}

std::shared_ptr<Block> StrippedSpruceWoodBlock::clone() const {
  std::shared_ptr<StrippedSpruceWoodBlock> copy = std::make_shared<StrippedSpruceWoodBlock>();
  copy->axis = axis;
  return copy;
}
