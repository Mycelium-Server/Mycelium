#include "warped_slab_block.h"

WarpedSlabBlock::WarpedSlabBlock() = default;
WarpedSlabBlock::~WarpedSlabBlock() = default;

short WarpedSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 16262;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 16263;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 16264;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 16265;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 16266;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 16267;
  return 16265;
}
