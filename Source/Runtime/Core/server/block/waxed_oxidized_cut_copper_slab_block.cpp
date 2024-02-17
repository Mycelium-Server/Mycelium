

#include "waxed_oxidized_cut_copper_slab_block.h"

WaxedOxidizedCutCopperSlabBlock::WaxedOxidizedCutCopperSlabBlock() = default;
WaxedOxidizedCutCopperSlabBlock::~WaxedOxidizedCutCopperSlabBlock() = default;

short WaxedOxidizedCutCopperSlabBlock::getId() const {
  return 19590 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> WaxedOxidizedCutCopperSlabBlock::clone() const {
  std::shared_ptr<WaxedOxidizedCutCopperSlabBlock> copy = std::make_shared<WaxedOxidizedCutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
