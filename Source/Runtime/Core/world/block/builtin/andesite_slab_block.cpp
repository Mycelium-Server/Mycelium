

#include "andesite_slab_block.h"

AndesiteSlabBlock::AndesiteSlabBlock() = default;
AndesiteSlabBlock::~AndesiteSlabBlock() = default;

short AndesiteSlabBlock::getId() const {
  return 11724 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> AndesiteSlabBlock::clone() const {
  std::shared_ptr<AndesiteSlabBlock> copy = std::make_shared<AndesiteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
