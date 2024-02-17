

#include "black_wall_banner_block.h"

BlackWallBannerBlock::BlackWallBannerBlock() = default;
BlackWallBannerBlock::~BlackWallBannerBlock() = default;

short BlackWallBannerBlock::getId() const {
  return 8954 + facing * 1;
}

std::shared_ptr<Block> BlackWallBannerBlock::clone() const {
  std::shared_ptr<BlackWallBannerBlock> copy = std::make_shared<BlackWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
