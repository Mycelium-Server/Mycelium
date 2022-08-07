#include "mangrove_slab_block.h"

MangroveSlabBlock::MangroveSlabBlock() = default;
MangroveSlabBlock::~MangroveSlabBlock() = default;

short MangroveSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9077;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9078;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9079;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9080;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9081;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9082;
  return 9080;
}
