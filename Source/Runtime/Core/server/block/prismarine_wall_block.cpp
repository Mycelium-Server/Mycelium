

#include "prismarine_wall_block.h"

PrismarineWallBlock::PrismarineWallBlock() = default;
PrismarineWallBlock::~PrismarineWallBlock() = default;

short PrismarineWallBlock::getId() const {
  return 12072 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> PrismarineWallBlock::clone() const {
  std::shared_ptr<PrismarineWallBlock> copy = std::make_shared<PrismarineWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
