#include "weathered_cut_copper_slab_block.h"

WeatheredCutCopperSlabBlock::WeatheredCutCopperSlabBlock() = default;
WeatheredCutCopperSlabBlock::~WeatheredCutCopperSlabBlock() = default;

short WeatheredCutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19244;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19245;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19246;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19247;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19248;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19249;
  return 19247;
}
