

#include "dark_oak_fence_block.h"

DarkOakFenceBlock::DarkOakFenceBlock() = default;
DarkOakFenceBlock::~DarkOakFenceBlock() = default;

short DarkOakFenceBlock::getId() const {
  return 9491 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> DarkOakFenceBlock::clone() const {
  std::shared_ptr<DarkOakFenceBlock> copy = std::make_shared<DarkOakFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
