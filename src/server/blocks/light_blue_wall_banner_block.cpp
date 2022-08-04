#include "light_blue_wall_banner_block.h"

LightBlueWallBannerBlock::LightBlueWallBannerBlock() = default;
LightBlueWallBannerBlock::~LightBlueWallBannerBlock() = default;

short LightBlueWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8906;
  if (facing == FACING_SOUTH) return 8907;
  if (facing == FACING_WEST) return 8908;
  if (facing == FACING_EAST) return 8909;
  return 8906;
}
