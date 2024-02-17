

#include "oak_slab_block.h"

OakSlabBlock::OakSlabBlock() = default;
OakSlabBlock::~OakSlabBlock() = default;

short OakSlabBlock::getId() const {
  return 9041 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> OakSlabBlock::clone() const {
  std::shared_ptr<OakSlabBlock> copy = std::make_shared<OakSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
