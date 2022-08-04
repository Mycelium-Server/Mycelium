#include "red_sandstone_slab_block.h"

RedSandstoneSlabBlock::RedSandstoneSlabBlock() = default;
RedSandstoneSlabBlock::~RedSandstoneSlabBlock() = default;

short RedSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9149;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9150;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9151;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9152;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9153;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9154;
  return 9152;
}
