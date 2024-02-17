

#include "stripped_mangrove_wood_block.h"

StrippedMangroveWoodBlock::StrippedMangroveWoodBlock() = default;
StrippedMangroveWoodBlock::~StrippedMangroveWoodBlock() = default;

short StrippedMangroveWoodBlock::getId() const {
  return 203 + axis * 1;
}

std::shared_ptr<Block> StrippedMangroveWoodBlock::clone() const {
  std::shared_ptr<StrippedMangroveWoodBlock> copy = std::make_shared<StrippedMangroveWoodBlock>();
  copy->axis = axis;
  return copy;
}
