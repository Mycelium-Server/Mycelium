#include "stripped_oak_wood_block.h"

StrippedOakWoodBlock::StrippedOakWoodBlock() = default;
StrippedOakWoodBlock::~StrippedOakWoodBlock() = default;

short StrippedOakWoodBlock::getId() const {
  if (axis == AXIS_X) return 185;
  if (axis == AXIS_Y) return 186;
  if (axis == AXIS_Z) return 187;
  return 186;
}
