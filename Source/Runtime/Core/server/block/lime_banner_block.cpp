

#include "lime_banner_block.h"

LimeBannerBlock::LimeBannerBlock() = default;
LimeBannerBlock::~LimeBannerBlock() = default;

short LimeBannerBlock::getId() const {
  return 8718 + rotation * 1;
}

std::shared_ptr<Block> LimeBannerBlock::clone() const {
  std::shared_ptr<LimeBannerBlock> copy = std::make_shared<LimeBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
