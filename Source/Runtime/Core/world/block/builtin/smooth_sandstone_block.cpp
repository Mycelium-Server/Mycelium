

#include "smooth_sandstone_block.h"

SmoothSandstoneBlock::SmoothSandstoneBlock() = default;
SmoothSandstoneBlock::~SmoothSandstoneBlock() = default;

short SmoothSandstoneBlock::getId() const {
  return 9168;
}

std::shared_ptr<Block> SmoothSandstoneBlock::clone() const {
  std::shared_ptr<SmoothSandstoneBlock> copy = std::make_shared<SmoothSandstoneBlock>();
  return copy;
}
