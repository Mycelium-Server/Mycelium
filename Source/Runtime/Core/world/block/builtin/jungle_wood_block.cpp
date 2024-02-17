

#include "jungle_wood_block.h"

JungleWoodBlock::JungleWoodBlock() = default;
JungleWoodBlock::~JungleWoodBlock() = default;

short JungleWoodBlock::getId() const {
  return 173 + axis * 1;
}

std::shared_ptr<Block> JungleWoodBlock::clone() const {
  std::shared_ptr<JungleWoodBlock> copy = std::make_shared<JungleWoodBlock>();
  copy->axis = axis;
  return copy;
}
