

#include "cobbled_deepslate_wall_block.h"

CobbledDeepslateWallBlock::CobbledDeepslateWallBlock() = default;
CobbledDeepslateWallBlock::~CobbledDeepslateWallBlock() = default;

short CobbledDeepslateWallBlock::getId() const {
  return 19868 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> CobbledDeepslateWallBlock::clone() const {
  std::shared_ptr<CobbledDeepslateWallBlock> copy = std::make_shared<CobbledDeepslateWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
