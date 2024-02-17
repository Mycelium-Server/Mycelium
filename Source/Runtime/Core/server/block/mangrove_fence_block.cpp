

#include "mangrove_fence_block.h"

MangroveFenceBlock::MangroveFenceBlock() = default;
MangroveFenceBlock::~MangroveFenceBlock() = default;

short MangroveFenceBlock::getId() const {
  return 9523 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> MangroveFenceBlock::clone() const {
  std::shared_ptr<MangroveFenceBlock> copy = std::make_shared<MangroveFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
