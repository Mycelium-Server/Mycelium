

#include "brown_wall_banner_block.h"

BrownWallBannerBlock::BrownWallBannerBlock() = default;
BrownWallBannerBlock::~BrownWallBannerBlock() = default;

short BrownWallBannerBlock::getId() const {
  return 8942 + facing * 1;
}

std::shared_ptr<Block> BrownWallBannerBlock::clone() const {
  std::shared_ptr<BrownWallBannerBlock> copy = std::make_shared<BrownWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
