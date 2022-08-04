#include "cobblestone_slab_block.h"

CobblestoneSlabBlock::CobblestoneSlabBlock() = default;
CobblestoneSlabBlock::~CobblestoneSlabBlock() = default;

short CobblestoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9113;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9114;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9115;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9116;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9117;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9118;
  return 9116;
}
