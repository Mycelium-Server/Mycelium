

#include "polished_deepslate_wall_block.h"

PolishedDeepslateWallBlock::PolishedDeepslateWallBlock() = default;
PolishedDeepslateWallBlock::~PolishedDeepslateWallBlock() = default;

short PolishedDeepslateWallBlock::getId() const {
  return 20279 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> PolishedDeepslateWallBlock::clone() const {
  std::shared_ptr<PolishedDeepslateWallBlock> copy = std::make_shared<PolishedDeepslateWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
