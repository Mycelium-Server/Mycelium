

#include "pink_banner_block.h"

PinkBannerBlock::PinkBannerBlock() = default;
PinkBannerBlock::~PinkBannerBlock() = default;

short PinkBannerBlock::getId() const {
  return 8734 + rotation * 1;
}

std::shared_ptr<Block> PinkBannerBlock::clone() const {
  std::shared_ptr<PinkBannerBlock> copy = std::make_shared<PinkBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
