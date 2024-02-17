

#include "polished_granite_slab_block.h"

PolishedGraniteSlabBlock::PolishedGraniteSlabBlock() = default;
PolishedGraniteSlabBlock::~PolishedGraniteSlabBlock() = default;

short PolishedGraniteSlabBlock::getId() const {
  return 11670 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PolishedGraniteSlabBlock::clone() const {
  std::shared_ptr<PolishedGraniteSlabBlock> copy = std::make_shared<PolishedGraniteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
