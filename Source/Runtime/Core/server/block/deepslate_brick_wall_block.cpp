

#include "deepslate_brick_wall_block.h"

DeepslateBrickWallBlock::DeepslateBrickWallBlock() = default;
DeepslateBrickWallBlock::~DeepslateBrickWallBlock() = default;

short DeepslateBrickWallBlock::getId() const {
  return 21101 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> DeepslateBrickWallBlock::clone() const {
  std::shared_ptr<DeepslateBrickWallBlock> copy = std::make_shared<DeepslateBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
