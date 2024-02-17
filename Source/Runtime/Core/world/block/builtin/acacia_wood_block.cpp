

#include "acacia_wood_block.h"

AcaciaWoodBlock::AcaciaWoodBlock() = default;
AcaciaWoodBlock::~AcaciaWoodBlock() = default;

short AcaciaWoodBlock::getId() const {
  return 176 + axis * 1;
}

std::shared_ptr<Block> AcaciaWoodBlock::clone() const {
  std::shared_ptr<AcaciaWoodBlock> copy = std::make_shared<AcaciaWoodBlock>();
  copy->axis = axis;
  return copy;
}
