#include "mangrove_log_block.h"

MangroveLogBlock::MangroveLogBlock() = default;
MangroveLogBlock::~MangroveLogBlock() = default;

short MangroveLogBlock::getId() const {
  if (axis == AXIS_X) return 135;
  if (axis == AXIS_Y) return 136;
  if (axis == AXIS_Z) return 137;
  return 136;
}
