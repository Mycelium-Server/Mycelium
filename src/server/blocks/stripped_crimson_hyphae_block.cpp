#include "stripped_crimson_hyphae_block.h"

StrippedCrimsonHyphaeBlock::StrippedCrimsonHyphaeBlock() = default;
StrippedCrimsonHyphaeBlock::~StrippedCrimsonHyphaeBlock() = default;

short StrippedCrimsonHyphaeBlock::getId() const {
  if (axis == AXIS_X) return 16193;
  if (axis == AXIS_Y) return 16194;
  if (axis == AXIS_Z) return 16195;
  return 16194;
}
