

#include "granite_slab_block.h"

GraniteSlabBlock::GraniteSlabBlock() = default;
GraniteSlabBlock::~GraniteSlabBlock() = default;

short GraniteSlabBlock::getId() const {
  return 11718 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> GraniteSlabBlock::clone() const {
  std::shared_ptr<GraniteSlabBlock> copy = std::make_shared<GraniteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
