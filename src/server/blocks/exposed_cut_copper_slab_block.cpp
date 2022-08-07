#include "exposed_cut_copper_slab_block.h"

ExposedCutCopperSlabBlock::ExposedCutCopperSlabBlock() = default;
ExposedCutCopperSlabBlock::~ExposedCutCopperSlabBlock() = default;

short ExposedCutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19250;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19251;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19252;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19253;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19254;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19255;
  return 19253;
}
