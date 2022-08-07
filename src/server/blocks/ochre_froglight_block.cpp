#include "ochre_froglight_block.h"

OchreFroglightBlock::OchreFroglightBlock() = default;
OchreFroglightBlock::~OchreFroglightBlock() = default;

short OchreFroglightBlock::getId() const {
  if (axis == AXIS_X) return 21437;
  if (axis == AXIS_Y) return 21438;
  if (axis == AXIS_Z) return 21439;
  return 21438;
}
