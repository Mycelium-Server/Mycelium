#include "warped_hyphae_block.h"

WarpedHyphaeBlock::WarpedHyphaeBlock() = default;
WarpedHyphaeBlock::~WarpedHyphaeBlock() = default;

short WarpedHyphaeBlock::getId() const {
  if (axis == AXIS_X) return 16173;
  if (axis == AXIS_Y) return 16174;
  if (axis == AXIS_Z) return 16175;
  return 16174;
}
