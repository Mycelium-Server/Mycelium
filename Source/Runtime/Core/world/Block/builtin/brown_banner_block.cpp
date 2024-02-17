

#include "brown_banner_block.h"

BrownBannerBlock::BrownBannerBlock() = default;
BrownBannerBlock::~BrownBannerBlock() = default;

short BrownBannerBlock::getId() const {
  return 8830 + rotation * 1;
}

std::shared_ptr<Block> BrownBannerBlock::clone() const {
  std::shared_ptr<BrownBannerBlock> copy = std::make_shared<BrownBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
