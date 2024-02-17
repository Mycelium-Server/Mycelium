

#include "spruce_fence_block.h"

SpruceFenceBlock::SpruceFenceBlock() = default;
SpruceFenceBlock::~SpruceFenceBlock() = default;

short SpruceFenceBlock::getId() const {
  return 9363 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> SpruceFenceBlock::clone() const {
  std::shared_ptr<SpruceFenceBlock> copy = std::make_shared<SpruceFenceBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
