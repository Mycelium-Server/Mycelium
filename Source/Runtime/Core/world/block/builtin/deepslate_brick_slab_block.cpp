

#include "deepslate_brick_slab_block.h"

DeepslateBrickSlabBlock::DeepslateBrickSlabBlock() = default;
DeepslateBrickSlabBlock::~DeepslateBrickSlabBlock() = default;

short DeepslateBrickSlabBlock::getId() const {
  return 21095 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> DeepslateBrickSlabBlock::clone() const {
  std::shared_ptr<DeepslateBrickSlabBlock> copy = std::make_shared<DeepslateBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
