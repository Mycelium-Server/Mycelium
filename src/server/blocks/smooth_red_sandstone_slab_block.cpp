#include "smooth_red_sandstone_slab_block.h"

SmoothRedSandstoneSlabBlock::SmoothRedSandstoneSlabBlock() = default;
SmoothRedSandstoneSlabBlock::~SmoothRedSandstoneSlabBlock() = default;

short SmoothRedSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11676;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11677;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11678;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11679;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11680;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11681;
  return 11679;
}
