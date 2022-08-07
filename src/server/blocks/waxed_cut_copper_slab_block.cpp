#include "waxed_cut_copper_slab_block.h"

WaxedCutCopperSlabBlock::WaxedCutCopperSlabBlock() = default;
WaxedCutCopperSlabBlock::~WaxedCutCopperSlabBlock() = default;

short WaxedCutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19608;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19609;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19610;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19611;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19612;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19613;
  return 19611;
}
