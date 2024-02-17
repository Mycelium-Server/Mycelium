

#include "stone_brick_wall_block.h"

StoneBrickWallBlock::StoneBrickWallBlock() = default;
StoneBrickWallBlock::~StoneBrickWallBlock() = default;

short StoneBrickWallBlock::getId() const {
  return 13368 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> StoneBrickWallBlock::clone() const {
  std::shared_ptr<StoneBrickWallBlock> copy = std::make_shared<StoneBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
