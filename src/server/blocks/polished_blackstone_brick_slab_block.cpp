#include "polished_blackstone_brick_slab_block.h"

PolishedBlackstoneBrickSlabBlock::PolishedBlackstoneBrickSlabBlock() = default;
PolishedBlackstoneBrickSlabBlock::~PolishedBlackstoneBrickSlabBlock() = default;

short PolishedBlackstoneBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 17463;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 17464;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 17465;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 17466;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 17467;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 17468;
  return 17466;
}
