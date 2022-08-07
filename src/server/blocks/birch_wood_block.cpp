#include "birch_wood_block.h"

BirchWoodBlock::BirchWoodBlock() = default;
BirchWoodBlock::~BirchWoodBlock() = default;

short BirchWoodBlock::getId() const {
  if (axis == AXIS_X) return 170;
  if (axis == AXIS_Y) return 171;
  if (axis == AXIS_Z) return 172;
  return 171;
}
