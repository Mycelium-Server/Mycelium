#include "acacia_slab_block.h"

AcaciaSlabBlock::AcaciaSlabBlock() = default;
AcaciaSlabBlock::~AcaciaSlabBlock() = default;

short AcaciaSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9065;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9066;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9067;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9068;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9069;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9070;
  return 9068;
}
