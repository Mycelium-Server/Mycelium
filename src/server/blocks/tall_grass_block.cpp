#include "tall_grass_block.h"

TallGrassBlock::TallGrassBlock() = default;
TallGrassBlock::~TallGrassBlock() = default;

short TallGrassBlock::getId() const {
  if (half == HALF_UPPER) return 8634;
  if (half == HALF_LOWER) return 8635;
  return 8635;
}
