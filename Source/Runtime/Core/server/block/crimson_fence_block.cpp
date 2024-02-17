

#include "crimson_fence_block.h"

CrimsonFenceBlock::CrimsonFenceBlock() = default;
CrimsonFenceBlock::~CrimsonFenceBlock() = default;

short CrimsonFenceBlock::getId() const {
  return 16272 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> CrimsonFenceBlock::clone() const {
  std::shared_ptr<CrimsonFenceBlock> copy = std::make_shared<CrimsonFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
