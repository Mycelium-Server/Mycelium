

#include "purple_wall_banner_block.h"

PurpleWallBannerBlock::PurpleWallBannerBlock() = default;
PurpleWallBannerBlock::~PurpleWallBannerBlock() = default;

short PurpleWallBannerBlock::getId() const {
  return 8934 + facing * 1;
}

std::shared_ptr<Block> PurpleWallBannerBlock::clone() const {
  std::shared_ptr<PurpleWallBannerBlock> copy = std::make_shared<PurpleWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
