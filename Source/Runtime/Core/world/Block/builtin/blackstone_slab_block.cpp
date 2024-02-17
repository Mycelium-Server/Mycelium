

#include "blackstone_slab_block.h"

BlackstoneSlabBlock::BlackstoneSlabBlock() = default;
BlackstoneSlabBlock::~BlackstoneSlabBlock() = default;

short BlackstoneSlabBlock::getId() const {
  return 17453 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> BlackstoneSlabBlock::clone() const {
  std::shared_ptr<BlackstoneSlabBlock> copy = std::make_shared<BlackstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
