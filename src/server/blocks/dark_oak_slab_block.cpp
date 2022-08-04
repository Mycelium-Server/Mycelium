#include "dark_oak_slab_block.h"

DarkOakSlabBlock::DarkOakSlabBlock() = default;
DarkOakSlabBlock::~DarkOakSlabBlock() = default;

short DarkOakSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9071;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9072;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9073;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9074;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9075;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9076;
  return 9074;
}
