

#include "acacia_fence_block.h"

AcaciaFenceBlock::AcaciaFenceBlock() = default;
AcaciaFenceBlock::~AcaciaFenceBlock() = default;

short AcaciaFenceBlock::getId() const {
  return 9459 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> AcaciaFenceBlock::clone() const {
  std::shared_ptr<AcaciaFenceBlock> copy = std::make_shared<AcaciaFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
