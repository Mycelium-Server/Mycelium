#include "prismarine_slab_block.h"

PrismarineSlabBlock::PrismarineSlabBlock() = default;
PrismarineSlabBlock::~PrismarineSlabBlock() = default;

short PrismarineSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 8585;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 8586;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 8587;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 8588;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 8589;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 8590;
  return 8588;
}
