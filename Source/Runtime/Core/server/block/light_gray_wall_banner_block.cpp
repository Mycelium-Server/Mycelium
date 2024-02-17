

#include "light_gray_wall_banner_block.h"

LightGrayWallBannerBlock::LightGrayWallBannerBlock() = default;
LightGrayWallBannerBlock::~LightGrayWallBannerBlock() = default;

short LightGrayWallBannerBlock::getId() const {
  return 8926 + facing * 1;
}

std::shared_ptr<Block> LightGrayWallBannerBlock::clone() const {
  std::shared_ptr<LightGrayWallBannerBlock> copy = std::make_shared<LightGrayWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
