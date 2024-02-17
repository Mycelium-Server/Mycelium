

#include "gray_banner_block.h"

GrayBannerBlock::GrayBannerBlock() = default;
GrayBannerBlock::~GrayBannerBlock() = default;

short GrayBannerBlock::getId() const {
  return 8750 + rotation * 1;
}

std::shared_ptr<Block> GrayBannerBlock::clone() const {
  std::shared_ptr<GrayBannerBlock> copy = std::make_shared<GrayBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
