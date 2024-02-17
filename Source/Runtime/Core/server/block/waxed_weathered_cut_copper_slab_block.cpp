

#include "waxed_weathered_cut_copper_slab_block.h"

WaxedWeatheredCutCopperSlabBlock::WaxedWeatheredCutCopperSlabBlock() = default;
WaxedWeatheredCutCopperSlabBlock::~WaxedWeatheredCutCopperSlabBlock() = default;

short WaxedWeatheredCutCopperSlabBlock::getId() const {
  return 19596 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> WaxedWeatheredCutCopperSlabBlock::clone() const {
  std::shared_ptr<WaxedWeatheredCutCopperSlabBlock> copy = std::make_shared<WaxedWeatheredCutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
