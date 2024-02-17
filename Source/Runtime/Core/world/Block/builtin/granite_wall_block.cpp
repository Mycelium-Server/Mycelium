

#include "granite_wall_block.h"

GraniteWallBlock::GraniteWallBlock() = default;
GraniteWallBlock::~GraniteWallBlock() = default;

short GraniteWallBlock::getId() const {
  return 13044 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> GraniteWallBlock::clone() const {
  std::shared_ptr<GraniteWallBlock> copy = std::make_shared<GraniteWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
