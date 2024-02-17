

#include "orange_banner_block.h"

OrangeBannerBlock::OrangeBannerBlock() = default;
OrangeBannerBlock::~OrangeBannerBlock() = default;

short OrangeBannerBlock::getId() const {
  return 8654 + rotation * 1;
}

std::shared_ptr<Block> OrangeBannerBlock::clone() const {
  std::shared_ptr<OrangeBannerBlock> copy = std::make_shared<OrangeBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
