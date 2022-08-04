#include "verdant_froglight_block.h"

VerdantFroglightBlock::VerdantFroglightBlock() = default;
VerdantFroglightBlock::~VerdantFroglightBlock() = default;

short VerdantFroglightBlock::getId() const {
  if (axis == AXIS_X) return 21440;
  if (axis == AXIS_Y) return 21441;
  if (axis == AXIS_Z) return 21442;
  return 21441;
}
