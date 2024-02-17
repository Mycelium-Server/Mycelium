

#include "light_blue_banner_block.h"

LightBlueBannerBlock::LightBlueBannerBlock() = default;
LightBlueBannerBlock::~LightBlueBannerBlock() = default;

short LightBlueBannerBlock::getId() const {
  return 8686 + rotation * 1;
}

std::shared_ptr<Block> LightBlueBannerBlock::clone() const {
  std::shared_ptr<LightBlueBannerBlock> copy = std::make_shared<LightBlueBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
