#include "magenta_wall_banner_block.h"

MagentaWallBannerBlock::MagentaWallBannerBlock() = default;
MagentaWallBannerBlock::~MagentaWallBannerBlock() = default;

short MagentaWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8902;
  if (facing == FACING_SOUTH) return 8903;
  if (facing == FACING_WEST) return 8904;
  if (facing == FACING_EAST) return 8905;
  return 8902;
}
