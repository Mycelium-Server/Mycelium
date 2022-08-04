#include "yellow_wall_banner_block.h"

YellowWallBannerBlock::YellowWallBannerBlock() = default;
YellowWallBannerBlock::~YellowWallBannerBlock() = default;

short YellowWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8910;
  if (facing == FACING_SOUTH) return 8911;
  if (facing == FACING_WEST) return 8912;
  if (facing == FACING_EAST) return 8913;
  return 8910;
}
