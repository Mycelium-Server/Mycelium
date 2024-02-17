

#include "smooth_red_sandstone_block.h"

SmoothRedSandstoneBlock::SmoothRedSandstoneBlock() = default;
SmoothRedSandstoneBlock::~SmoothRedSandstoneBlock() = default;

short SmoothRedSandstoneBlock::getId() const {
  return 9170;
}

std::shared_ptr<Block> SmoothRedSandstoneBlock::clone() const {
  std::shared_ptr<SmoothRedSandstoneBlock> copy = std::make_shared<SmoothRedSandstoneBlock>();
  return copy;
}
