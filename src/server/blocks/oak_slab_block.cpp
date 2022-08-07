#include "oak_slab_block.h"

OakSlabBlock::OakSlabBlock() = default;
OakSlabBlock::~OakSlabBlock() = default;

short OakSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9041;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9042;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9043;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9044;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9045;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9046;
  return 9044;
}
