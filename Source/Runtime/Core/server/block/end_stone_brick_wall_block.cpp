

#include "end_stone_brick_wall_block.h"

EndStoneBrickWallBlock::EndStoneBrickWallBlock() = default;
EndStoneBrickWallBlock::~EndStoneBrickWallBlock() = default;

short EndStoneBrickWallBlock::getId() const {
  return 15312 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> EndStoneBrickWallBlock::clone() const {
  std::shared_ptr<EndStoneBrickWallBlock> copy = std::make_shared<EndStoneBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
