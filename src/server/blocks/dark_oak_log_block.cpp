#include "dark_oak_log_block.h"

DarkOakLogBlock::DarkOakLogBlock() = default;
DarkOakLogBlock::~DarkOakLogBlock() = default;

short DarkOakLogBlock::getId() const {
  if (axis == AXIS_X) return 132;
  if (axis == AXIS_Y) return 133;
  if (axis == AXIS_Z) return 134;
  return 133;
}
