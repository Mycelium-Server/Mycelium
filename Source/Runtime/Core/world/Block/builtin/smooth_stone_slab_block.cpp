

#include "smooth_stone_slab_block.h"

SmoothStoneSlabBlock::SmoothStoneSlabBlock() = default;
SmoothStoneSlabBlock::~SmoothStoneSlabBlock() = default;

short SmoothStoneSlabBlock::getId() const {
  return 9089 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> SmoothStoneSlabBlock::clone() const {
  std::shared_ptr<SmoothStoneSlabBlock> copy = std::make_shared<SmoothStoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
