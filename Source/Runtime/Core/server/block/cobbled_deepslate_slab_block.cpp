

#include "cobbled_deepslate_slab_block.h"

CobbledDeepslateSlabBlock::CobbledDeepslateSlabBlock() = default;
CobbledDeepslateSlabBlock::~CobbledDeepslateSlabBlock() = default;

short CobbledDeepslateSlabBlock::getId() const {
  return 19862 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> CobbledDeepslateSlabBlock::clone() const {
  std::shared_ptr<CobbledDeepslateSlabBlock> copy = std::make_shared<CobbledDeepslateSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
