

#include "yellow_banner_block.h"

YellowBannerBlock::YellowBannerBlock() = default;
YellowBannerBlock::~YellowBannerBlock() = default;

short YellowBannerBlock::getId() const {
  return 8702 + rotation * 1;
}

std::shared_ptr<Block> YellowBannerBlock::clone() const {
  std::shared_ptr<YellowBannerBlock> copy = std::make_shared<YellowBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
