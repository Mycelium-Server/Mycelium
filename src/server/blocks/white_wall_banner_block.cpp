#include "white_wall_banner_block.h"

WhiteWallBannerBlock::WhiteWallBannerBlock() = default;
WhiteWallBannerBlock::~WhiteWallBannerBlock() = default;

short WhiteWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8894;
  if (facing == FACING_SOUTH) return 8895;
  if (facing == FACING_WEST) return 8896;
  if (facing == FACING_EAST) return 8897;
  return 8894;
}
