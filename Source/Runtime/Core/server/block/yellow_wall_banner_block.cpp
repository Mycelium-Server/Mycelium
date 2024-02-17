

#include "yellow_wall_banner_block.h"

YellowWallBannerBlock::YellowWallBannerBlock() = default;
YellowWallBannerBlock::~YellowWallBannerBlock() = default;

short YellowWallBannerBlock::getId() const {
  return 8910 + facing * 1;
}

std::shared_ptr<Block> YellowWallBannerBlock::clone() const {
  std::shared_ptr<YellowWallBannerBlock> copy = std::make_shared<YellowWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
