

#include "waxed_exposed_cut_copper_slab_block.h"

WaxedExposedCutCopperSlabBlock::WaxedExposedCutCopperSlabBlock() = default;
WaxedExposedCutCopperSlabBlock::~WaxedExposedCutCopperSlabBlock() = default;

short WaxedExposedCutCopperSlabBlock::getId() const {
  return 19602 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> WaxedExposedCutCopperSlabBlock::clone() const {
  std::shared_ptr<WaxedExposedCutCopperSlabBlock> copy = std::make_shared<WaxedExposedCutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
