#include "black_wall_banner_block.h"

BlackWallBannerBlock::BlackWallBannerBlock() = default;
BlackWallBannerBlock::~BlackWallBannerBlock() = default;

short BlackWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8954;
  if (facing == FACING_SOUTH) return 8955;
  if (facing == FACING_WEST) return 8956;
  if (facing == FACING_EAST) return 8957;
  return 8954;
}
