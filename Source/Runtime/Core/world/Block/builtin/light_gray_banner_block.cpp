

#include "light_gray_banner_block.h"

LightGrayBannerBlock::LightGrayBannerBlock() = default;
LightGrayBannerBlock::~LightGrayBannerBlock() = default;

short LightGrayBannerBlock::getId() const {
  return 8766 + rotation * 1;
}

std::shared_ptr<Block> LightGrayBannerBlock::clone() const {
  std::shared_ptr<LightGrayBannerBlock> copy = std::make_shared<LightGrayBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
