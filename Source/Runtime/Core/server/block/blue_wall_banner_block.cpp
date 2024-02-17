

#include "blue_wall_banner_block.h"

BlueWallBannerBlock::BlueWallBannerBlock() = default;
BlueWallBannerBlock::~BlueWallBannerBlock() = default;

short BlueWallBannerBlock::getId() const {
  return 8938 + facing * 1;
}

std::shared_ptr<Block> BlueWallBannerBlock::clone() const {
  std::shared_ptr<BlueWallBannerBlock> copy = std::make_shared<BlueWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
