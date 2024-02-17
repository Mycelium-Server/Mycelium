

#include "dark_oak_leaves_block.h"

DarkOakLeavesBlock::DarkOakLeavesBlock() = default;
DarkOakLeavesBlock::~DarkOakLeavesBlock() = default;

short DarkOakLeavesBlock::getId() const {
  return 346 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> DarkOakLeavesBlock::clone() const {
  std::shared_ptr<DarkOakLeavesBlock> copy = std::make_shared<DarkOakLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
