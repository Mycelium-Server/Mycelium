#include "deepslate_brick_slab_block.h"

DeepslateBrickSlabBlock::DeepslateBrickSlabBlock() = default;
DeepslateBrickSlabBlock::~DeepslateBrickSlabBlock() = default;

short DeepslateBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 21095;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 21096;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 21097;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 21098;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 21099;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 21100;
  return 21098;
}
