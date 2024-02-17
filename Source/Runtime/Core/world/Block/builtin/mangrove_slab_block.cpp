

#include "mangrove_slab_block.h"

MangroveSlabBlock::MangroveSlabBlock() = default;
MangroveSlabBlock::~MangroveSlabBlock() = default;

short MangroveSlabBlock::getId() const {
  return 9077 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> MangroveSlabBlock::clone() const {
  std::shared_ptr<MangroveSlabBlock> copy = std::make_shared<MangroveSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
