

#include "magenta_wall_banner_block.h"

MagentaWallBannerBlock::MagentaWallBannerBlock() = default;
MagentaWallBannerBlock::~MagentaWallBannerBlock() = default;

short MagentaWallBannerBlock::getId() const {
  return 8902 + facing * 1;
}

std::shared_ptr<Block> MagentaWallBannerBlock::clone() const {
  std::shared_ptr<MagentaWallBannerBlock> copy = std::make_shared<MagentaWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
