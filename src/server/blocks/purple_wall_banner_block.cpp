#include "purple_wall_banner_block.h"

PurpleWallBannerBlock::PurpleWallBannerBlock() = default;
PurpleWallBannerBlock::~PurpleWallBannerBlock() = default;

short PurpleWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8934;
  if (facing == FACING_SOUTH) return 8935;
  if (facing == FACING_WEST) return 8936;
  if (facing == FACING_EAST) return 8937;
  return 8934;
}
