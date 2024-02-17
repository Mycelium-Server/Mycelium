

#include "spruce_slab_block.h"

SpruceSlabBlock::SpruceSlabBlock() = default;
SpruceSlabBlock::~SpruceSlabBlock() = default;

short SpruceSlabBlock::getId() const {
  return 9047 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> SpruceSlabBlock::clone() const {
  std::shared_ptr<SpruceSlabBlock> copy = std::make_shared<SpruceSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
