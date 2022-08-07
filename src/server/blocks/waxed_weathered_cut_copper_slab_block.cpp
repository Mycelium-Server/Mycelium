#include "waxed_weathered_cut_copper_slab_block.h"

WaxedWeatheredCutCopperSlabBlock::WaxedWeatheredCutCopperSlabBlock() = default;
WaxedWeatheredCutCopperSlabBlock::~WaxedWeatheredCutCopperSlabBlock() = default;

short WaxedWeatheredCutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19596;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19597;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19598;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19599;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19600;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19601;
  return 19599;
}
