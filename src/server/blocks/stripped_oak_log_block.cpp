#include "stripped_oak_log_block.h"

StrippedOakLogBlock::StrippedOakLogBlock() = default;
StrippedOakLogBlock::~StrippedOakLogBlock() = default;

short StrippedOakLogBlock::getId() const {
  if (axis == AXIS_X) return 158;
  if (axis == AXIS_Y) return 159;
  if (axis == AXIS_Z) return 160;
  return 159;
}
