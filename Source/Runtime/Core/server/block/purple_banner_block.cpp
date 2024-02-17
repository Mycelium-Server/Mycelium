

#include "purple_banner_block.h"

PurpleBannerBlock::PurpleBannerBlock() = default;
PurpleBannerBlock::~PurpleBannerBlock() = default;

short PurpleBannerBlock::getId() const {
  return 8798 + rotation * 1;
}

std::shared_ptr<Block> PurpleBannerBlock::clone() const {
  std::shared_ptr<PurpleBannerBlock> copy = std::make_shared<PurpleBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
