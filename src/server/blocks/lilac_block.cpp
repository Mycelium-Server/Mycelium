#include "lilac_block.h"

LilacBlock::LilacBlock() = default;
LilacBlock::~LilacBlock() = default;

short LilacBlock::getId() const {
  if (half == HALF_UPPER) return 8628;
  if (half == HALF_LOWER) return 8629;
  return 8629;
}
