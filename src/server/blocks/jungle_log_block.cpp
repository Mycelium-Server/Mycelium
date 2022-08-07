#include "jungle_log_block.h"

JungleLogBlock::JungleLogBlock() = default;
JungleLogBlock::~JungleLogBlock() = default;

short JungleLogBlock::getId() const {
  if (axis == AXIS_X) return 126;
  if (axis == AXIS_Y) return 127;
  if (axis == AXIS_Z) return 128;
  return 127;
}
