#include "mossy_stone_brick_slab_block.h"

MossyStoneBrickSlabBlock::MossyStoneBrickSlabBlock() = default;
MossyStoneBrickSlabBlock::~MossyStoneBrickSlabBlock() = default;

short MossyStoneBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11682;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11683;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11684;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11685;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11686;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11687;
  return 11685;
}
