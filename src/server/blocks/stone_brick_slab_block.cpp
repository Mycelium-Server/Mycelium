#include "stone_brick_slab_block.h"

StoneBrickSlabBlock::StoneBrickSlabBlock() = default;
StoneBrickSlabBlock::~StoneBrickSlabBlock() = default;

short StoneBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9125;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9126;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9127;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9128;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9129;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9130;
  return 9128;
}
