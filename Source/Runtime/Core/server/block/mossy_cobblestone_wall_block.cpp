

#include "mossy_cobblestone_wall_block.h"

MossyCobblestoneWallBlock::MossyCobblestoneWallBlock() = default;
MossyCobblestoneWallBlock::~MossyCobblestoneWallBlock() = default;

short MossyCobblestoneWallBlock::getId() const {
  return 6573 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> MossyCobblestoneWallBlock::clone() const {
  std::shared_ptr<MossyCobblestoneWallBlock> copy = std::make_shared<MossyCobblestoneWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
