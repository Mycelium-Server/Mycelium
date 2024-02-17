

#include "jungle_fence_block.h"

JungleFenceBlock::JungleFenceBlock() = default;
JungleFenceBlock::~JungleFenceBlock() = default;

short JungleFenceBlock::getId() const {
  return 9427 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> JungleFenceBlock::clone() const {
  std::shared_ptr<JungleFenceBlock> copy = std::make_shared<JungleFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
