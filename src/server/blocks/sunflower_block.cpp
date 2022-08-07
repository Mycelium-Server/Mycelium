#include "sunflower_block.h"

SunflowerBlock::SunflowerBlock() = default;
SunflowerBlock::~SunflowerBlock() = default;

short SunflowerBlock::getId() const {
  if (half == HALF_UPPER) return 8626;
  if (half == HALF_LOWER) return 8627;
  return 8627;
}
