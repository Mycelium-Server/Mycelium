#include "dark_oak_wood_block.h"

DarkOakWoodBlock::DarkOakWoodBlock() = default;
DarkOakWoodBlock::~DarkOakWoodBlock() = default;

short DarkOakWoodBlock::getId() const {
  if (axis == AXIS_X) return 179;
  if (axis == AXIS_Y) return 180;
  if (axis == AXIS_Z) return 181;
  return 180;
}
