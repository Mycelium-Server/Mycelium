

#include "red_banner_block.h"

RedBannerBlock::RedBannerBlock() = default;
RedBannerBlock::~RedBannerBlock() = default;

short RedBannerBlock::getId() const {
  return 8862 + rotation * 1;
}

std::shared_ptr<Block> RedBannerBlock::clone() const {
  std::shared_ptr<RedBannerBlock> copy = std::make_shared<RedBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
