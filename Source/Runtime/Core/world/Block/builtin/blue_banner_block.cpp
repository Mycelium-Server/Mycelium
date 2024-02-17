

#include "blue_banner_block.h"

BlueBannerBlock::BlueBannerBlock() = default;
BlueBannerBlock::~BlueBannerBlock() = default;

short BlueBannerBlock::getId() const {
  return 8814 + rotation * 1;
}

std::shared_ptr<Block> BlueBannerBlock::clone() const {
  std::shared_ptr<BlueBannerBlock> copy = std::make_shared<BlueBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
