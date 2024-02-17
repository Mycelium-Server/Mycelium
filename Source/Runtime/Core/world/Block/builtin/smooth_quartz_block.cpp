

#include "smooth_quartz_block.h"

SmoothQuartzBlock::SmoothQuartzBlock() = default;
SmoothQuartzBlock::~SmoothQuartzBlock() = default;

short SmoothQuartzBlock::getId() const {
  return 9169;
}

std::shared_ptr<Block> SmoothQuartzBlock::clone() const {
  std::shared_ptr<SmoothQuartzBlock> copy = std::make_shared<SmoothQuartzBlock>();
  return copy;
}
