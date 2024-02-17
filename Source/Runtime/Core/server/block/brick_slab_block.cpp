

#include "brick_slab_block.h"

BrickSlabBlock::BrickSlabBlock() = default;
BrickSlabBlock::~BrickSlabBlock() = default;

short BrickSlabBlock::getId() const {
  return 9119 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> BrickSlabBlock::clone() const {
  std::shared_ptr<BrickSlabBlock> copy = std::make_shared<BrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
