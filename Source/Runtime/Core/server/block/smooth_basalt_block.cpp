

#include "smooth_basalt_block.h"

SmoothBasaltBlock::SmoothBasaltBlock() = default;
SmoothBasaltBlock::~SmoothBasaltBlock() = default;

short SmoothBasaltBlock::getId() const {
  return 21431;
}

std::shared_ptr<Block> SmoothBasaltBlock::clone() const {
  std::shared_ptr<SmoothBasaltBlock> copy = std::make_shared<SmoothBasaltBlock>();
  return copy;
}
