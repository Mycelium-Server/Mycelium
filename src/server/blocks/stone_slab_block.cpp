#include "stone_slab_block.h"

StoneSlabBlock::StoneSlabBlock() = default;
StoneSlabBlock::~StoneSlabBlock() = default;

short StoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9083;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9084;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9085;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9086;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9087;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9088;
  return 9086;
}
