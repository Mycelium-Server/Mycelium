

#include "dark_oak_slab_block.h"

DarkOakSlabBlock::DarkOakSlabBlock() = default;
DarkOakSlabBlock::~DarkOakSlabBlock() = default;

short DarkOakSlabBlock::getId() const {
  return 9071 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> DarkOakSlabBlock::clone() const {
  std::shared_ptr<DarkOakSlabBlock> copy = std::make_shared<DarkOakSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
