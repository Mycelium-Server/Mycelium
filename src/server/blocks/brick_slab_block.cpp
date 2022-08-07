#include "brick_slab_block.h"

BrickSlabBlock::BrickSlabBlock() = default;
BrickSlabBlock::~BrickSlabBlock() = default;

short BrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9119;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9120;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9121;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9122;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9123;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9124;
  return 9122;
}
