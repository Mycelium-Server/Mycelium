#include "cut_sandstone_slab_block.h"

CutSandstoneSlabBlock::CutSandstoneSlabBlock() = default;
CutSandstoneSlabBlock::~CutSandstoneSlabBlock() = default;

short CutSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9101;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9102;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9103;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9104;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9105;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9106;
  return 9104;
}
