

#include "diorite_slab_block.h"

DioriteSlabBlock::DioriteSlabBlock() = default;
DioriteSlabBlock::~DioriteSlabBlock() = default;

short DioriteSlabBlock::getId() const {
  return 11742 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> DioriteSlabBlock::clone() const {
  std::shared_ptr<DioriteSlabBlock> copy = std::make_shared<DioriteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
