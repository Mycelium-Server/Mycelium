#include "pink_wall_banner_block.h"

PinkWallBannerBlock::PinkWallBannerBlock() = default;
PinkWallBannerBlock::~PinkWallBannerBlock() = default;

short PinkWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8918;
  if (facing == FACING_SOUTH) return 8919;
  if (facing == FACING_WEST) return 8920;
  if (facing == FACING_EAST) return 8921;
  return 8918;
}
