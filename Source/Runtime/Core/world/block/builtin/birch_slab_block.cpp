

#include "birch_slab_block.h"

BirchSlabBlock::BirchSlabBlock() = default;
BirchSlabBlock::~BirchSlabBlock() = default;

short BirchSlabBlock::getId() const {
  return 9053 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> BirchSlabBlock::clone() const {
  std::shared_ptr<BirchSlabBlock> copy = std::make_shared<BirchSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
