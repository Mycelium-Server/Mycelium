

#include "birch_leaves_block.h"

BirchLeavesBlock::BirchLeavesBlock() = default;
BirchLeavesBlock::~BirchLeavesBlock() = default;

short BirchLeavesBlock::getId() const {
  return 262 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> BirchLeavesBlock::clone() const {
  std::shared_ptr<BirchLeavesBlock> copy = std::make_shared<BirchLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
