

#include "quartz_block_block.h"

QuartzBlockBlock::QuartzBlockBlock() = default;
QuartzBlockBlock::~QuartzBlockBlock() = default;

short QuartzBlockBlock::getId() const {
  return 7355;
}

std::shared_ptr<Block> QuartzBlockBlock::clone() const {
  std::shared_ptr<QuartzBlockBlock> copy = std::make_shared<QuartzBlockBlock>();
  return copy;
}
