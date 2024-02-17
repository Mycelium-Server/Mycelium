

#include "sandstone_wall_block.h"

SandstoneWallBlock::SandstoneWallBlock() = default;
SandstoneWallBlock::~SandstoneWallBlock() = default;

short SandstoneWallBlock::getId() const {
  return 14988 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> SandstoneWallBlock::clone() const {
  std::shared_ptr<SandstoneWallBlock> copy = std::make_shared<SandstoneWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
