#include "cut_copper_slab_block.h"

CutCopperSlabBlock::CutCopperSlabBlock() = default;
CutCopperSlabBlock::~CutCopperSlabBlock() = default;

short CutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19256;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19257;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19258;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19259;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19260;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19261;
  return 19259;
}
