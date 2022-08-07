#include "pearlescent_froglight_block.h"

PearlescentFroglightBlock::PearlescentFroglightBlock() = default;
PearlescentFroglightBlock::~PearlescentFroglightBlock() = default;

short PearlescentFroglightBlock::getId() const {
  if (axis == AXIS_X) return 21443;
  if (axis == AXIS_Y) return 21444;
  if (axis == AXIS_Z) return 21445;
  return 21444;
}
