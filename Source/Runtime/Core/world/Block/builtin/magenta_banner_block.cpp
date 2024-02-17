

#include "magenta_banner_block.h"

MagentaBannerBlock::MagentaBannerBlock() = default;
MagentaBannerBlock::~MagentaBannerBlock() = default;

short MagentaBannerBlock::getId() const {
  return 8670 + rotation * 1;
}

std::shared_ptr<Block> MagentaBannerBlock::clone() const {
  std::shared_ptr<MagentaBannerBlock> copy = std::make_shared<MagentaBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
