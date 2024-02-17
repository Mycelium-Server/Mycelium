

#include "red_nether_brick_slab_block.h"

RedNetherBrickSlabBlock::RedNetherBrickSlabBlock() = default;
RedNetherBrickSlabBlock::~RedNetherBrickSlabBlock() = default;

short RedNetherBrickSlabBlock::getId() const {
  return 11730 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> RedNetherBrickSlabBlock::clone() const {
  std::shared_ptr<RedNetherBrickSlabBlock> copy = std::make_shared<RedNetherBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
