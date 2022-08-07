#include "polished_diorite_slab_block.h"

PolishedDioriteSlabBlock::PolishedDioriteSlabBlock() = default;
PolishedDioriteSlabBlock::~PolishedDioriteSlabBlock() = default;

short PolishedDioriteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11688;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11689;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11690;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11691;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11692;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11693;
  return 11691;
}
