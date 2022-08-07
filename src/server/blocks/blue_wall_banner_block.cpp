#include "blue_wall_banner_block.h"

BlueWallBannerBlock::BlueWallBannerBlock() = default;
BlueWallBannerBlock::~BlueWallBannerBlock() = default;

short BlueWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8938;
  if (facing == FACING_SOUTH) return 8939;
  if (facing == FACING_WEST) return 8940;
  if (facing == FACING_EAST) return 8941;
  return 8938;
}
