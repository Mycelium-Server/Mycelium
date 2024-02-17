

#include "polished_blackstone_wall_block.h"

PolishedBlackstoneWallBlock::PolishedBlackstoneWallBlock() = default;
PolishedBlackstoneWallBlock::~PolishedBlackstoneWallBlock() = default;

short PolishedBlackstoneWallBlock::getId() const {
  return 17986 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> PolishedBlackstoneWallBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneWallBlock> copy = std::make_shared<PolishedBlackstoneWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
