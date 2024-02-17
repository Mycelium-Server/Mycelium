

#include "white_wall_banner_block.h"

WhiteWallBannerBlock::WhiteWallBannerBlock() = default;
WhiteWallBannerBlock::~WhiteWallBannerBlock() = default;

short WhiteWallBannerBlock::getId() const {
  return 8894 + facing * 1;
}

std::shared_ptr<Block> WhiteWallBannerBlock::clone() const {
  std::shared_ptr<WhiteWallBannerBlock> copy = std::make_shared<WhiteWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
