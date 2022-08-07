#include "crimson_slab_block.h"

CrimsonSlabBlock::CrimsonSlabBlock() = default;
CrimsonSlabBlock::~CrimsonSlabBlock() = default;

short CrimsonSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 16256;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 16257;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 16258;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 16259;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 16260;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 16261;
  return 16259;
}
