

#include "waxed_cut_copper_slab_block.h"

WaxedCutCopperSlabBlock::WaxedCutCopperSlabBlock() = default;
WaxedCutCopperSlabBlock::~WaxedCutCopperSlabBlock() = default;

short WaxedCutCopperSlabBlock::getId() const {
  return 19608 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> WaxedCutCopperSlabBlock::clone() const {
  std::shared_ptr<WaxedCutCopperSlabBlock> copy = std::make_shared<WaxedCutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
