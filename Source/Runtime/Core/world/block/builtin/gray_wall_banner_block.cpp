

#include "gray_wall_banner_block.h"

GrayWallBannerBlock::GrayWallBannerBlock() = default;
GrayWallBannerBlock::~GrayWallBannerBlock() = default;

short GrayWallBannerBlock::getId() const {
  return 8922 + facing * 1;
}

std::shared_ptr<Block> GrayWallBannerBlock::clone() const {
  std::shared_ptr<GrayWallBannerBlock> copy = std::make_shared<GrayWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
