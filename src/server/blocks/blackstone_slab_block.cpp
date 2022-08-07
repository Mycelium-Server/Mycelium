#include "blackstone_slab_block.h"

BlackstoneSlabBlock::BlackstoneSlabBlock() = default;
BlackstoneSlabBlock::~BlackstoneSlabBlock() = default;

short BlackstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 17453;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 17454;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 17455;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 17456;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 17457;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 17458;
  return 17456;
}
