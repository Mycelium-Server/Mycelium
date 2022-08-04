#include "red_wall_banner_block.h"

RedWallBannerBlock::RedWallBannerBlock() = default;
RedWallBannerBlock::~RedWallBannerBlock() = default;

short RedWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8950;
  if (facing == FACING_SOUTH) return 8951;
  if (facing == FACING_WEST) return 8952;
  if (facing == FACING_EAST) return 8953;
  return 8950;
}
