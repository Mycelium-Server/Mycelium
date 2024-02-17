

#include "red_wall_banner_block.h"

RedWallBannerBlock::RedWallBannerBlock() = default;
RedWallBannerBlock::~RedWallBannerBlock() = default;

short RedWallBannerBlock::getId() const {
  return 8950 + facing * 1;
}

std::shared_ptr<Block> RedWallBannerBlock::clone() const {
  std::shared_ptr<RedWallBannerBlock> copy = std::make_shared<RedWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
