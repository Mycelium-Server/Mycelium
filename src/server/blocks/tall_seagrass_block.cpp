#include "tall_seagrass_block.h"

TallSeagrassBlock::TallSeagrassBlock() = default;
TallSeagrassBlock::~TallSeagrassBlock() = default;

short TallSeagrassBlock::getId() const {
  if (half == HALF_UPPER) return 1600;
  if (half == HALF_LOWER) return 1601;
  return 1601;
}
