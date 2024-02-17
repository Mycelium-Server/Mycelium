

#include "sculk_vein_block.h"

SculkVeinBlock::SculkVeinBlock() = default;
SculkVeinBlock::~SculkVeinBlock() = default;

short SculkVeinBlock::getId() const {
  return 18770 + west * 1 + waterlogged * 2 + up * 4 + south * 8 + north * 16 + east * 32 + down * 64;
}

std::shared_ptr<Block> SculkVeinBlock::clone() const {
  std::shared_ptr<SculkVeinBlock> copy = std::make_shared<SculkVeinBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
