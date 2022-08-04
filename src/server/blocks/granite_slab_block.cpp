#include "granite_slab_block.h"

GraniteSlabBlock::GraniteSlabBlock() = default;
GraniteSlabBlock::~GraniteSlabBlock() = default;

short GraniteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11718;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11719;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11720;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11721;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11722;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11723;
  return 11721;
}
