

#include "cyan_wall_banner_block.h"

CyanWallBannerBlock::CyanWallBannerBlock() = default;
CyanWallBannerBlock::~CyanWallBannerBlock() = default;

short CyanWallBannerBlock::getId() const {
  return 8930 + facing * 1;
}

std::shared_ptr<Block> CyanWallBannerBlock::clone() const {
  std::shared_ptr<CyanWallBannerBlock> copy = std::make_shared<CyanWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
