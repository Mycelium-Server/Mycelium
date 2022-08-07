#include "oak_log_block.h"

OakLogBlock::OakLogBlock() = default;
OakLogBlock::~OakLogBlock() = default;

short OakLogBlock::getId() const {
  if (axis == AXIS_X) return 117;
  if (axis == AXIS_Y) return 118;
  if (axis == AXIS_Z) return 119;
  return 118;
}
