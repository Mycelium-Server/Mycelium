

#include "brick_wall_block.h"

BrickWallBlock::BrickWallBlock() = default;
BrickWallBlock::~BrickWallBlock() = default;

short BrickWallBlock::getId() const {
  return 11748 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> BrickWallBlock::clone() const {
  std::shared_ptr<BrickWallBlock> copy = std::make_shared<BrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
