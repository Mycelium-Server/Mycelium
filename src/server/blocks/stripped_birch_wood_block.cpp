#include "stripped_birch_wood_block.h"

StrippedBirchWoodBlock::StrippedBirchWoodBlock() = default;
StrippedBirchWoodBlock::~StrippedBirchWoodBlock() = default;

short StrippedBirchWoodBlock::getId() const {
  if (axis == AXIS_X) return 191;
  if (axis == AXIS_Y) return 192;
  if (axis == AXIS_Z) return 193;
  return 192;
}
