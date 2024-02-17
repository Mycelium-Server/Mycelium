

#include "blackstone_wall_block.h"

BlackstoneWallBlock::BlackstoneWallBlock() = default;
BlackstoneWallBlock::~BlackstoneWallBlock() = default;

short BlackstoneWallBlock::getId() const {
  return 17129 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> BlackstoneWallBlock::clone() const {
  std::shared_ptr<BlackstoneWallBlock> copy = std::make_shared<BlackstoneWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
