

#include "black_banner_block.h"

BlackBannerBlock::BlackBannerBlock() = default;
BlackBannerBlock::~BlackBannerBlock() = default;

short BlackBannerBlock::getId() const {
  return 8878 + rotation * 1;
}

std::shared_ptr<Block> BlackBannerBlock::clone() const {
  std::shared_ptr<BlackBannerBlock> copy = std::make_shared<BlackBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
