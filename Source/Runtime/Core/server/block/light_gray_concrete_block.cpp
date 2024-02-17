

#include "light_gray_concrete_block.h"

LightGrayConcreteBlock::LightGrayConcreteBlock() = default;
LightGrayConcreteBlock::~LightGrayConcreteBlock() = default;

short LightGrayConcreteBlock::getId() const {
  return 10327;
}

std::shared_ptr<Block> LightGrayConcreteBlock::clone() const {
  std::shared_ptr<LightGrayConcreteBlock> copy = std::make_shared<LightGrayConcreteBlock>();
  return copy;
}
