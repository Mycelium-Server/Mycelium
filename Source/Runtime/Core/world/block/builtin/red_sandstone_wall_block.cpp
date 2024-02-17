

#include "red_sandstone_wall_block.h"

RedSandstoneWallBlock::RedSandstoneWallBlock() = default;
RedSandstoneWallBlock::~RedSandstoneWallBlock() = default;

short RedSandstoneWallBlock::getId() const {
  return 12396 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> RedSandstoneWallBlock::clone() const {
  std::shared_ptr<RedSandstoneWallBlock> copy = std::make_shared<RedSandstoneWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
