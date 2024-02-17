

#include "light_gray_wool_block.h"

LightGrayWoolBlock::LightGrayWoolBlock() = default;
LightGrayWoolBlock::~LightGrayWoolBlock() = default;

short LightGrayWoolBlock::getId() const {
  return 1646;
}

std::shared_ptr<Block> LightGrayWoolBlock::clone() const {
  std::shared_ptr<LightGrayWoolBlock> copy = std::make_shared<LightGrayWoolBlock>();
  return copy;
}
