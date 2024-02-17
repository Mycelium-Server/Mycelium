

#include "sunflower_block.h"

SunflowerBlock::SunflowerBlock() = default;
SunflowerBlock::~SunflowerBlock() = default;

short SunflowerBlock::getId() const {
  return 8626 + half * 1;
}

std::shared_ptr<Block> SunflowerBlock::clone() const {
  std::shared_ptr<SunflowerBlock> copy = std::make_shared<SunflowerBlock>();
  copy->half = half;
  return copy;
}
