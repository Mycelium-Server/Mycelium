#include "polished_blackstone_slab_block.h"

PolishedBlackstoneSlabBlock::PolishedBlackstoneSlabBlock() = default;
PolishedBlackstoneSlabBlock::~PolishedBlackstoneSlabBlock() = default;

short PolishedBlackstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 17954;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 17955;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 17956;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 17957;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 17958;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 17959;
  return 17957;
}
