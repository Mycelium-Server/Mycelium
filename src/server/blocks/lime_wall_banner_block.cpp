#include "lime_wall_banner_block.h"

LimeWallBannerBlock::LimeWallBannerBlock() = default;
LimeWallBannerBlock::~LimeWallBannerBlock() = default;

short LimeWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8914;
  if (facing == FACING_SOUTH) return 8915;
  if (facing == FACING_WEST) return 8916;
  if (facing == FACING_EAST) return 8917;
  return 8914;
}
