

#include "red_nether_brick_wall_block.h"

RedNetherBrickWallBlock::RedNetherBrickWallBlock() = default;
RedNetherBrickWallBlock::~RedNetherBrickWallBlock() = default;

short RedNetherBrickWallBlock::getId() const {
  return 14664 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> RedNetherBrickWallBlock::clone() const {
  std::shared_ptr<RedNetherBrickWallBlock> copy = std::make_shared<RedNetherBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
