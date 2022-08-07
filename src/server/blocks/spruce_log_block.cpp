#include "spruce_log_block.h"

SpruceLogBlock::SpruceLogBlock() = default;
SpruceLogBlock::~SpruceLogBlock() = default;

short SpruceLogBlock::getId() const {
  if (axis == AXIS_X) return 120;
  if (axis == AXIS_Y) return 121;
  if (axis == AXIS_Z) return 122;
  return 121;
}
