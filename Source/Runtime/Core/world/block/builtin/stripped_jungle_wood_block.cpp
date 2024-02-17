

#include "stripped_jungle_wood_block.h"

StrippedJungleWoodBlock::StrippedJungleWoodBlock() = default;
StrippedJungleWoodBlock::~StrippedJungleWoodBlock() = default;

short StrippedJungleWoodBlock::getId() const {
  return 194 + axis * 1;
}

std::shared_ptr<Block> StrippedJungleWoodBlock::clone() const {
  std::shared_ptr<StrippedJungleWoodBlock> copy = std::make_shared<StrippedJungleWoodBlock>();
  copy->axis = axis;
  return copy;
}
