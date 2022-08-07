#include "polished_granite_slab_block.h"

PolishedGraniteSlabBlock::PolishedGraniteSlabBlock() = default;
PolishedGraniteSlabBlock::~PolishedGraniteSlabBlock() = default;

short PolishedGraniteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11670;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11671;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11672;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11673;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11674;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11675;
  return 11673;
}
