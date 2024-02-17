

#include "stone_brick_slab_block.h"

StoneBrickSlabBlock::StoneBrickSlabBlock() = default;
StoneBrickSlabBlock::~StoneBrickSlabBlock() = default;

short StoneBrickSlabBlock::getId() const {
  return 9125 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> StoneBrickSlabBlock::clone() const {
  std::shared_ptr<StoneBrickSlabBlock> copy = std::make_shared<StoneBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
