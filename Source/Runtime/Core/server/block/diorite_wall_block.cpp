

#include "diorite_wall_block.h"

DioriteWallBlock::DioriteWallBlock() = default;
DioriteWallBlock::~DioriteWallBlock() = default;

short DioriteWallBlock::getId() const {
  return 15636 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> DioriteWallBlock::clone() const {
  std::shared_ptr<DioriteWallBlock> copy = std::make_shared<DioriteWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
