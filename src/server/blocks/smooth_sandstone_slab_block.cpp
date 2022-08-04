#include "smooth_sandstone_slab_block.h"

SmoothSandstoneSlabBlock::SmoothSandstoneSlabBlock() = default;
SmoothSandstoneSlabBlock::~SmoothSandstoneSlabBlock() = default;

short SmoothSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11706;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11707;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11708;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11709;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11710;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11711;
  return 11709;
}
