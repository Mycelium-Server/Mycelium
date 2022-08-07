#include "purpur_slab_block.h"

PurpurSlabBlock::PurpurSlabBlock() = default;
PurpurSlabBlock::~PurpurSlabBlock() = default;

short PurpurSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9161;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9162;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9163;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9164;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9165;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9166;
  return 9164;
}
