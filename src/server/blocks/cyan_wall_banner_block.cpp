#include "cyan_wall_banner_block.h"

CyanWallBannerBlock::CyanWallBannerBlock() = default;
CyanWallBannerBlock::~CyanWallBannerBlock() = default;

short CyanWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8930;
  if (facing == FACING_SOUTH) return 8931;
  if (facing == FACING_WEST) return 8932;
  if (facing == FACING_EAST) return 8933;
  return 8930;
}
