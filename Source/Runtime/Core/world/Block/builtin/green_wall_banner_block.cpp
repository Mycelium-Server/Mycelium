

#include "green_wall_banner_block.h"

GreenWallBannerBlock::GreenWallBannerBlock() = default;
GreenWallBannerBlock::~GreenWallBannerBlock() = default;

short GreenWallBannerBlock::getId() const {
  return 8946 + facing * 1;
}

std::shared_ptr<Block> GreenWallBannerBlock::clone() const {
  std::shared_ptr<GreenWallBannerBlock> copy = std::make_shared<GreenWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
