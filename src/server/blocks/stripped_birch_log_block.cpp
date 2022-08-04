#include "stripped_birch_log_block.h"

StrippedBirchLogBlock::StrippedBirchLogBlock() = default;
StrippedBirchLogBlock::~StrippedBirchLogBlock() = default;

short StrippedBirchLogBlock::getId() const {
  if (axis == AXIS_X) return 146;
  if (axis == AXIS_Y) return 147;
  if (axis == AXIS_Z) return 148;
  return 147;
}
