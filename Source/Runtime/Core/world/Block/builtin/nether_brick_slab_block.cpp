

#include "nether_brick_slab_block.h"

NetherBrickSlabBlock::NetherBrickSlabBlock() = default;
NetherBrickSlabBlock::~NetherBrickSlabBlock() = default;

short NetherBrickSlabBlock::getId() const {
  return 9137 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> NetherBrickSlabBlock::clone() const {
  std::shared_ptr<NetherBrickSlabBlock> copy = std::make_shared<NetherBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
