

#include "mangrove_wood_block.h"

MangroveWoodBlock::MangroveWoodBlock() = default;
MangroveWoodBlock::~MangroveWoodBlock() = default;

short MangroveWoodBlock::getId() const {
  return 182 + axis * 1;
}

std::shared_ptr<Block> MangroveWoodBlock::clone() const {
  std::shared_ptr<MangroveWoodBlock> copy = std::make_shared<MangroveWoodBlock>();
  copy->axis = axis;
  return copy;
}
