

#include "birch_fence_block.h"

BirchFenceBlock::BirchFenceBlock() = default;
BirchFenceBlock::~BirchFenceBlock() = default;

short BirchFenceBlock::getId() const {
  return 9395 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> BirchFenceBlock::clone() const {
  std::shared_ptr<BirchFenceBlock> copy = std::make_shared<BirchFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
