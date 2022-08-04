#include "diorite_slab_block.h"

DioriteSlabBlock::DioriteSlabBlock() = default;
DioriteSlabBlock::~DioriteSlabBlock() = default;

short DioriteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11742;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11743;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11744;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11745;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11746;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11747;
  return 11745;
}
