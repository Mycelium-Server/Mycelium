#include "peony_block.h"

PeonyBlock::PeonyBlock() = default;
PeonyBlock::~PeonyBlock() = default;

short PeonyBlock::getId() const {
  if (half == HALF_UPPER) return 8632;
  if (half == HALF_LOWER) return 8633;
  return 8633;
}
