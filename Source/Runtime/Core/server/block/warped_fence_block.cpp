

#include "warped_fence_block.h"

WarpedFenceBlock::WarpedFenceBlock() = default;
WarpedFenceBlock::~WarpedFenceBlock() = default;

short WarpedFenceBlock::getId() const {
  return 16304 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> WarpedFenceBlock::clone() const {
  std::shared_ptr<WarpedFenceBlock> copy = std::make_shared<WarpedFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
