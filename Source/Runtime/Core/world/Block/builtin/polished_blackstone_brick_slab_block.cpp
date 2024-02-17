

#include "polished_blackstone_brick_slab_block.h"

PolishedBlackstoneBrickSlabBlock::PolishedBlackstoneBrickSlabBlock() = default;
PolishedBlackstoneBrickSlabBlock::~PolishedBlackstoneBrickSlabBlock() = default;

short PolishedBlackstoneBrickSlabBlock::getId() const {
  return 17463 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PolishedBlackstoneBrickSlabBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneBrickSlabBlock> copy = std::make_shared<PolishedBlackstoneBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
