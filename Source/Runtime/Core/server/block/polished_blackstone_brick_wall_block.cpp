

#include "polished_blackstone_brick_wall_block.h"

PolishedBlackstoneBrickWallBlock::PolishedBlackstoneBrickWallBlock() = default;
PolishedBlackstoneBrickWallBlock::~PolishedBlackstoneBrickWallBlock() = default;

short PolishedBlackstoneBrickWallBlock::getId() const {
  return 17549 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> PolishedBlackstoneBrickWallBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneBrickWallBlock> copy = std::make_shared<PolishedBlackstoneBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
