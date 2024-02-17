

#include "stripped_acacia_wood_block.h"

StrippedAcaciaWoodBlock::StrippedAcaciaWoodBlock() = default;
StrippedAcaciaWoodBlock::~StrippedAcaciaWoodBlock() = default;

short StrippedAcaciaWoodBlock::getId() const {
  return 197 + axis * 1;
}

std::shared_ptr<Block> StrippedAcaciaWoodBlock::clone() const {
  std::shared_ptr<StrippedAcaciaWoodBlock> copy = std::make_shared<StrippedAcaciaWoodBlock>();
  copy->axis = axis;
  return copy;
}
