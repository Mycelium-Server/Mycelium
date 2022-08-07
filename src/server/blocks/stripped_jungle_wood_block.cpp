#include "stripped_jungle_wood_block.h"

StrippedJungleWoodBlock::StrippedJungleWoodBlock() = default;
StrippedJungleWoodBlock::~StrippedJungleWoodBlock() = default;

short StrippedJungleWoodBlock::getId() const {
  if (axis == AXIS_X) return 194;
  if (axis == AXIS_Y) return 195;
  if (axis == AXIS_Z) return 196;
  return 195;
}
