

#include "green_banner_block.h"

GreenBannerBlock::GreenBannerBlock() = default;
GreenBannerBlock::~GreenBannerBlock() = default;

short GreenBannerBlock::getId() const {
  return 8846 + rotation * 1;
}

std::shared_ptr<Block> GreenBannerBlock::clone() const {
  std::shared_ptr<GreenBannerBlock> copy = std::make_shared<GreenBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
