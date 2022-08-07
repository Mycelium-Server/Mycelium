#include "sandstone_slab_block.h"

SandstoneSlabBlock::SandstoneSlabBlock() = default;
SandstoneSlabBlock::~SandstoneSlabBlock() = default;

short SandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9095;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9096;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9097;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9098;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9099;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9100;
  return 9098;
}
