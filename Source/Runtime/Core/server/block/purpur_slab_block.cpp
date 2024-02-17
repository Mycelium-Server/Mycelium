

#include "purpur_slab_block.h"

PurpurSlabBlock::PurpurSlabBlock() = default;
PurpurSlabBlock::~PurpurSlabBlock() = default;

short PurpurSlabBlock::getId() const {
  return 9161 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PurpurSlabBlock::clone() const {
  std::shared_ptr<PurpurSlabBlock> copy = std::make_shared<PurpurSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
