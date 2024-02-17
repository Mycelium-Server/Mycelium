

#include "cut_copper_slab_block.h"

CutCopperSlabBlock::CutCopperSlabBlock() = default;
CutCopperSlabBlock::~CutCopperSlabBlock() = default;

short CutCopperSlabBlock::getId() const {
  return 19256 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> CutCopperSlabBlock::clone() const {
  std::shared_ptr<CutCopperSlabBlock> copy = std::make_shared<CutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
