#include "stripped_dark_oak_wood_block.h"

StrippedDarkOakWoodBlock::StrippedDarkOakWoodBlock() = default;
StrippedDarkOakWoodBlock::~StrippedDarkOakWoodBlock() = default;

short StrippedDarkOakWoodBlock::getId() const {
  if (axis == AXIS_X) return 200;
  if (axis == AXIS_Y) return 201;
  if (axis == AXIS_Z) return 202;
  return 201;
}
