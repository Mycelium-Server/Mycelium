#include "brown_wall_banner_block.h"

BrownWallBannerBlock::BrownWallBannerBlock() = default;
BrownWallBannerBlock::~BrownWallBannerBlock() = default;

short BrownWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8942;
  if (facing == FACING_SOUTH) return 8943;
  if (facing == FACING_WEST) return 8944;
  if (facing == FACING_EAST) return 8945;
  return 8942;
}
