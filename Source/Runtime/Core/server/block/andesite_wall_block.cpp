

#include "andesite_wall_block.h"

AndesiteWallBlock::AndesiteWallBlock() = default;
AndesiteWallBlock::~AndesiteWallBlock() = default;

short AndesiteWallBlock::getId() const {
  return 14340 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> AndesiteWallBlock::clone() const {
  std::shared_ptr<AndesiteWallBlock> copy = std::make_shared<AndesiteWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
