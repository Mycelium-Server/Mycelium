

#include "polished_deepslate_slab_block.h"

PolishedDeepslateSlabBlock::PolishedDeepslateSlabBlock() = default;
PolishedDeepslateSlabBlock::~PolishedDeepslateSlabBlock() = default;

short PolishedDeepslateSlabBlock::getId() const {
  return 20273 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PolishedDeepslateSlabBlock::clone() const {
  std::shared_ptr<PolishedDeepslateSlabBlock> copy = std::make_shared<PolishedDeepslateSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
