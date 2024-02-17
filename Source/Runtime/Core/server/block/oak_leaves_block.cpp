

#include "oak_leaves_block.h"

OakLeavesBlock::OakLeavesBlock() = default;
OakLeavesBlock::~OakLeavesBlock() = default;

short OakLeavesBlock::getId() const {
  return 206 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> OakLeavesBlock::clone() const {
  std::shared_ptr<OakLeavesBlock> copy = std::make_shared<OakLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
