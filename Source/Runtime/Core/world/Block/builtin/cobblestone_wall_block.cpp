

#include "cobblestone_wall_block.h"

CobblestoneWallBlock::CobblestoneWallBlock() = default;
CobblestoneWallBlock::~CobblestoneWallBlock() = default;

short CobblestoneWallBlock::getId() const {
  return 6249 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> CobblestoneWallBlock::clone() const {
  std::shared_ptr<CobblestoneWallBlock> copy = std::make_shared<CobblestoneWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
