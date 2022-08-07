#include "stripped_spruce_wood_block.h"

StrippedSpruceWoodBlock::StrippedSpruceWoodBlock() = default;
StrippedSpruceWoodBlock::~StrippedSpruceWoodBlock() = default;

short StrippedSpruceWoodBlock::getId() const {
  if (axis == AXIS_X) return 188;
  if (axis == AXIS_Y) return 189;
  if (axis == AXIS_Z) return 190;
  return 189;
}
