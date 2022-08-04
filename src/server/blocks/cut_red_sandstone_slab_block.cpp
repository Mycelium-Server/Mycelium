#include "cut_red_sandstone_slab_block.h"

CutRedSandstoneSlabBlock::CutRedSandstoneSlabBlock() = default;
CutRedSandstoneSlabBlock::~CutRedSandstoneSlabBlock() = default;

short CutRedSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9155;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9156;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9157;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9158;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9159;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9160;
  return 9158;
}
