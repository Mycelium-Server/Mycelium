#include "basalt_block.h"

BasaltBlock::BasaltBlock() = default;
BasaltBlock::~BasaltBlock() = default;

short BasaltBlock::getId() const {
  if (axis == AXIS_X) return 4311;
  if (axis == AXIS_Y) return 4312;
  if (axis == AXIS_Z) return 4313;
  return 4312;
}
