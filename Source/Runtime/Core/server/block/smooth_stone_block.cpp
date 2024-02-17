

#include "smooth_stone_block.h"

SmoothStoneBlock::SmoothStoneBlock() = default;
SmoothStoneBlock::~SmoothStoneBlock() = default;

short SmoothStoneBlock::getId() const {
  return 9167;
}

std::shared_ptr<Block> SmoothStoneBlock::clone() const {
  std::shared_ptr<SmoothStoneBlock> copy = std::make_shared<SmoothStoneBlock>();
  return copy;
}
