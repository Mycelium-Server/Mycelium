

#include "light_blue_wall_banner_block.h"

LightBlueWallBannerBlock::LightBlueWallBannerBlock() = default;
LightBlueWallBannerBlock::~LightBlueWallBannerBlock() = default;

short LightBlueWallBannerBlock::getId() const {
  return 8906 + facing * 1;
}

std::shared_ptr<Block> LightBlueWallBannerBlock::clone() const {
  std::shared_ptr<LightBlueWallBannerBlock> copy = std::make_shared<LightBlueWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
