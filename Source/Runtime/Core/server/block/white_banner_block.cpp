

#include "white_banner_block.h"

WhiteBannerBlock::WhiteBannerBlock() = default;
WhiteBannerBlock::~WhiteBannerBlock() = default;

short WhiteBannerBlock::getId() const {
  return 8638 + rotation * 1;
}

std::shared_ptr<Block> WhiteBannerBlock::clone() const {
  std::shared_ptr<WhiteBannerBlock> copy = std::make_shared<WhiteBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
