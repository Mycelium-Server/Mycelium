

#include "mossy_stone_brick_slab_block.h"

MossyStoneBrickSlabBlock::MossyStoneBrickSlabBlock() = default;
MossyStoneBrickSlabBlock::~MossyStoneBrickSlabBlock() = default;

short MossyStoneBrickSlabBlock::getId() const {
  return 11682 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> MossyStoneBrickSlabBlock::clone() const {
  std::shared_ptr<MossyStoneBrickSlabBlock> copy = std::make_shared<MossyStoneBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
