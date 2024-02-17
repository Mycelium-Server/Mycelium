

#include "lime_wall_banner_block.h"

LimeWallBannerBlock::LimeWallBannerBlock() = default;
LimeWallBannerBlock::~LimeWallBannerBlock() = default;

short LimeWallBannerBlock::getId() const {
  return 8914 + facing * 1;
}

std::shared_ptr<Block> LimeWallBannerBlock::clone() const {
  std::shared_ptr<LimeWallBannerBlock> copy = std::make_shared<LimeWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
