#include "dark_prismarine_slab_block.h"

DarkPrismarineSlabBlock::DarkPrismarineSlabBlock() = default;
DarkPrismarineSlabBlock::~DarkPrismarineSlabBlock() = default;

short DarkPrismarineSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 8597;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 8598;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 8599;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 8600;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 8601;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 8602;
  return 8600;
}
