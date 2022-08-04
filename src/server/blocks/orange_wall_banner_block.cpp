#include "orange_wall_banner_block.h"

OrangeWallBannerBlock::OrangeWallBannerBlock() = default;
OrangeWallBannerBlock::~OrangeWallBannerBlock() = default;

short OrangeWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8898;
  if (facing == FACING_SOUTH) return 8899;
  if (facing == FACING_WEST) return 8900;
  if (facing == FACING_EAST) return 8901;
  return 8898;
}
