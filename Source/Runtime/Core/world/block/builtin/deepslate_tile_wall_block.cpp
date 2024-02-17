

#include "deepslate_tile_wall_block.h"

DeepslateTileWallBlock::DeepslateTileWallBlock() = default;
DeepslateTileWallBlock::~DeepslateTileWallBlock() = default;

short DeepslateTileWallBlock::getId() const {
  return 20690 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> DeepslateTileWallBlock::clone() const {
  std::shared_ptr<DeepslateTileWallBlock> copy = std::make_shared<DeepslateTileWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
