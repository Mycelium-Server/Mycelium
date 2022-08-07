#include "birch_slab_block.h"

BirchSlabBlock::BirchSlabBlock() = default;
BirchSlabBlock::~BirchSlabBlock() = default;

short BirchSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9053;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9054;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9055;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9056;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9057;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9058;
  return 9056;
}
