

#include "mossy_stone_brick_wall_block.h"

MossyStoneBrickWallBlock::MossyStoneBrickWallBlock() = default;
MossyStoneBrickWallBlock::~MossyStoneBrickWallBlock() = default;

short MossyStoneBrickWallBlock::getId() const {
  return 12720 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> MossyStoneBrickWallBlock::clone() const {
  std::shared_ptr<MossyStoneBrickWallBlock> copy = std::make_shared<MossyStoneBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
