#include "jungle_wood_block.h"

JungleWoodBlock::JungleWoodBlock() = default;
JungleWoodBlock::~JungleWoodBlock() = default;

short JungleWoodBlock::getId() const {
  if (axis == AXIS_X) return 173;
  if (axis == AXIS_Y) return 174;
  if (axis == AXIS_Z) return 175;
  return 174;
}
