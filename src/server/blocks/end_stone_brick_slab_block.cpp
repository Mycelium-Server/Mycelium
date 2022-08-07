#include "end_stone_brick_slab_block.h"

EndStoneBrickSlabBlock::EndStoneBrickSlabBlock() = default;
EndStoneBrickSlabBlock::~EndStoneBrickSlabBlock() = default;

short EndStoneBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11700;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11701;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11702;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11703;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11704;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11705;
  return 11703;
}
