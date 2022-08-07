#include "birch_log_block.h"

BirchLogBlock::BirchLogBlock() = default;
BirchLogBlock::~BirchLogBlock() = default;

short BirchLogBlock::getId() const {
  if (axis == AXIS_X) return 123;
  if (axis == AXIS_Y) return 124;
  if (axis == AXIS_Z) return 125;
  return 124;
}
