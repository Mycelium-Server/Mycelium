

#include "end_stone_brick_slab_block.h"

EndStoneBrickSlabBlock::EndStoneBrickSlabBlock() = default;
EndStoneBrickSlabBlock::~EndStoneBrickSlabBlock() = default;

short EndStoneBrickSlabBlock::getId() const {
  return 11700 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> EndStoneBrickSlabBlock::clone() const {
  std::shared_ptr<EndStoneBrickSlabBlock> copy = std::make_shared<EndStoneBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
