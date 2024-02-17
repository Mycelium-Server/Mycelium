

#include "nether_brick_wall_block.h"

NetherBrickWallBlock::NetherBrickWallBlock() = default;
NetherBrickWallBlock::~NetherBrickWallBlock() = default;

short NetherBrickWallBlock::getId() const {
  return 14016 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> NetherBrickWallBlock::clone() const {
  std::shared_ptr<NetherBrickWallBlock> copy = std::make_shared<NetherBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
