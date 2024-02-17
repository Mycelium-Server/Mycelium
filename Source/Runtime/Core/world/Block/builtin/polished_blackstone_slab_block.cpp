

#include "polished_blackstone_slab_block.h"

PolishedBlackstoneSlabBlock::PolishedBlackstoneSlabBlock() = default;
PolishedBlackstoneSlabBlock::~PolishedBlackstoneSlabBlock() = default;

short PolishedBlackstoneSlabBlock::getId() const {
  return 17954 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PolishedBlackstoneSlabBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneSlabBlock> copy = std::make_shared<PolishedBlackstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
