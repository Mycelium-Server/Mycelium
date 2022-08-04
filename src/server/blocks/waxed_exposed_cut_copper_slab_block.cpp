#include "waxed_exposed_cut_copper_slab_block.h"

WaxedExposedCutCopperSlabBlock::WaxedExposedCutCopperSlabBlock() = default;
WaxedExposedCutCopperSlabBlock::~WaxedExposedCutCopperSlabBlock() = default;

short WaxedExposedCutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19602;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19603;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19604;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19605;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19606;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19607;
  return 19605;
}
