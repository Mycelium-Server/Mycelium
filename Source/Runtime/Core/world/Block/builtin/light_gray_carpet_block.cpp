

#include "light_gray_carpet_block.h"

LightGrayCarpetBlock::LightGrayCarpetBlock() = default;
LightGrayCarpetBlock::~LightGrayCarpetBlock() = default;

short LightGrayCarpetBlock::getId() const {
  return 8615;
}

std::shared_ptr<Block> LightGrayCarpetBlock::clone() const {
  std::shared_ptr<LightGrayCarpetBlock> copy = std::make_shared<LightGrayCarpetBlock>();
  return copy;
}
