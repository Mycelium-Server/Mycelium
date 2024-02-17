

#include "nether_brick_fence_block.h"

NetherBrickFenceBlock::NetherBrickFenceBlock() = default;
NetherBrickFenceBlock::~NetherBrickFenceBlock() = default;

short NetherBrickFenceBlock::getId() const {
  return 5603 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> NetherBrickFenceBlock::clone() const {
  std::shared_ptr<NetherBrickFenceBlock> copy = std::make_shared<NetherBrickFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
