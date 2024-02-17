

#include "pink_wall_banner_block.h"

PinkWallBannerBlock::PinkWallBannerBlock() = default;
PinkWallBannerBlock::~PinkWallBannerBlock() = default;

short PinkWallBannerBlock::getId() const {
  return 8918 + facing * 1;
}

std::shared_ptr<Block> PinkWallBannerBlock::clone() const {
  std::shared_ptr<PinkWallBannerBlock> copy = std::make_shared<PinkWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
