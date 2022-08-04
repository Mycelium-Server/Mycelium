#include "stripped_warped_hyphae_block.h"

StrippedWarpedHyphaeBlock::StrippedWarpedHyphaeBlock() = default;
StrippedWarpedHyphaeBlock::~StrippedWarpedHyphaeBlock() = default;

short StrippedWarpedHyphaeBlock::getId() const {
  if (axis == AXIS_X) return 16176;
  if (axis == AXIS_Y) return 16177;
  if (axis == AXIS_Z) return 16178;
  return 16177;
}
