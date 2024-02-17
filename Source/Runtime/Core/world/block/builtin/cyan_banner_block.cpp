

#include "cyan_banner_block.h"

CyanBannerBlock::CyanBannerBlock() = default;
CyanBannerBlock::~CyanBannerBlock() = default;

short CyanBannerBlock::getId() const {
  return 8782 + rotation * 1;
}

std::shared_ptr<Block> CyanBannerBlock::clone() const {
  std::shared_ptr<CyanBannerBlock> copy = std::make_shared<CyanBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
