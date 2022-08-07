#include "crimson_hyphae_block.h"

CrimsonHyphaeBlock::CrimsonHyphaeBlock() = default;
CrimsonHyphaeBlock::~CrimsonHyphaeBlock() = default;

short CrimsonHyphaeBlock::getId() const {
  if (axis == AXIS_X) return 16190;
  if (axis == AXIS_Y) return 16191;
  if (axis == AXIS_Z) return 16192;
  return 16191;
}
