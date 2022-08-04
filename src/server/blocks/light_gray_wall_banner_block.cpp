#include "light_gray_wall_banner_block.h"

LightGrayWallBannerBlock::LightGrayWallBannerBlock() = default;
LightGrayWallBannerBlock::~LightGrayWallBannerBlock() = default;

short LightGrayWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8926;
  if (facing == FACING_SOUTH) return 8927;
  if (facing == FACING_WEST) return 8928;
  if (facing == FACING_EAST) return 8929;
  return 8926;
}
