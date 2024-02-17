

#include "polished_andesite_slab_block.h"

PolishedAndesiteSlabBlock::PolishedAndesiteSlabBlock() = default;
PolishedAndesiteSlabBlock::~PolishedAndesiteSlabBlock() = default;

short PolishedAndesiteSlabBlock::getId() const {
  return 11736 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PolishedAndesiteSlabBlock::clone() const {
  std::shared_ptr<PolishedAndesiteSlabBlock> copy = std::make_shared<PolishedAndesiteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
