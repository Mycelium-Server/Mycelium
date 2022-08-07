#include "polished_andesite_slab_block.h"

PolishedAndesiteSlabBlock::PolishedAndesiteSlabBlock() = default;
PolishedAndesiteSlabBlock::~PolishedAndesiteSlabBlock() = default;

short PolishedAndesiteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11736;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11737;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11738;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11739;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11740;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11741;
  return 11739;
}
