

#include "spruce_wood_block.h"

SpruceWoodBlock::SpruceWoodBlock() = default;
SpruceWoodBlock::~SpruceWoodBlock() = default;

short SpruceWoodBlock::getId() const {
  return 167 + axis * 1;
}

std::shared_ptr<Block> SpruceWoodBlock::clone() const {
  std::shared_ptr<SpruceWoodBlock> copy = std::make_shared<SpruceWoodBlock>();
  copy->axis = axis;
  return copy;
}
