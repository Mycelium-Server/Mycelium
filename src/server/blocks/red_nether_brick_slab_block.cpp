#include "red_nether_brick_slab_block.h"

RedNetherBrickSlabBlock::RedNetherBrickSlabBlock() = default;
RedNetherBrickSlabBlock::~RedNetherBrickSlabBlock() = default;

short RedNetherBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11730;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11731;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11732;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11733;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11734;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11735;
  return 11733;
}
