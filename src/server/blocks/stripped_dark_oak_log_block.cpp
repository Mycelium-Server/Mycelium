#include "stripped_dark_oak_log_block.h"

StrippedDarkOakLogBlock::StrippedDarkOakLogBlock() = default;
StrippedDarkOakLogBlock::~StrippedDarkOakLogBlock() = default;

short StrippedDarkOakLogBlock::getId() const {
  if (axis == AXIS_X) return 155;
  if (axis == AXIS_Y) return 156;
  if (axis == AXIS_Z) return 157;
  return 156;
}
