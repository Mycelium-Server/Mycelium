#include "green_wall_banner_block.h"

GreenWallBannerBlock::GreenWallBannerBlock() = default;
GreenWallBannerBlock::~GreenWallBannerBlock() = default;

short GreenWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8946;
  if (facing == FACING_SOUTH) return 8947;
  if (facing == FACING_WEST) return 8948;
  if (facing == FACING_EAST) return 8949;
  return 8946;
}
