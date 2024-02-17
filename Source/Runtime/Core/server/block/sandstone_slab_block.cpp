

#include "sandstone_slab_block.h"

SandstoneSlabBlock::SandstoneSlabBlock() = default;
SandstoneSlabBlock::~SandstoneSlabBlock() = default;

short SandstoneSlabBlock::getId() const {
  return 9095 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> SandstoneSlabBlock::clone() const {
  std::shared_ptr<SandstoneSlabBlock> copy = std::make_shared<SandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
