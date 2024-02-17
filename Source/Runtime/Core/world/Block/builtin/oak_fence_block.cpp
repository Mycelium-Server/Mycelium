

#include "oak_fence_block.h"

OakFenceBlock::OakFenceBlock() = default;
OakFenceBlock::~OakFenceBlock() = default;

short OakFenceBlock::getId() const {
  return 4275 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> OakFenceBlock::clone() const {
  std::shared_ptr<OakFenceBlock> copy = std::make_shared<OakFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
