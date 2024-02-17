

#include "orange_wall_banner_block.h"

OrangeWallBannerBlock::OrangeWallBannerBlock() = default;
OrangeWallBannerBlock::~OrangeWallBannerBlock() = default;

short OrangeWallBannerBlock::getId() const {
  return 8898 + facing * 1;
}

std::shared_ptr<Block> OrangeWallBannerBlock::clone() const {
  std::shared_ptr<OrangeWallBannerBlock> copy = std::make_shared<OrangeWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
