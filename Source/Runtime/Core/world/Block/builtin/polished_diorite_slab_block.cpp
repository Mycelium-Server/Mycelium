

#include "polished_diorite_slab_block.h"

PolishedDioriteSlabBlock::PolishedDioriteSlabBlock() = default;
PolishedDioriteSlabBlock::~PolishedDioriteSlabBlock() = default;

short PolishedDioriteSlabBlock::getId() const {
  return 11688 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PolishedDioriteSlabBlock::clone() const {
  std::shared_ptr<PolishedDioriteSlabBlock> copy = std::make_shared<PolishedDioriteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
