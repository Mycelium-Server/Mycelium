#include "oak_wood_block.h"

OakWoodBlock::OakWoodBlock() = default;
OakWoodBlock::~OakWoodBlock() = default;

short OakWoodBlock::getId() const {
  if (axis == AXIS_X) return 164;
  if (axis == AXIS_Y) return 165;
  if (axis == AXIS_Z) return 166;
  return 165;
}
