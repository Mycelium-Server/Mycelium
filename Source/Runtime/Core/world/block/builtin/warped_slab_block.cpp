

#include "warped_slab_block.h"

WarpedSlabBlock::WarpedSlabBlock() = default;
WarpedSlabBlock::~WarpedSlabBlock() = default;

short WarpedSlabBlock::getId() const {
  return 16262 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> WarpedSlabBlock::clone() const {
  std::shared_ptr<WarpedSlabBlock> copy = std::make_shared<WarpedSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
