#include "gray_wall_banner_block.h"

GrayWallBannerBlock::GrayWallBannerBlock() = default;
GrayWallBannerBlock::~GrayWallBannerBlock() = default;

short GrayWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8922;
  if (facing == FACING_SOUTH) return 8923;
  if (facing == FACING_WEST) return 8924;
  if (facing == FACING_EAST) return 8925;
  return 8922;
}
