#include "cobbled_deepslate_slab_block.h"

CobbledDeepslateSlabBlock::CobbledDeepslateSlabBlock() = default;
CobbledDeepslateSlabBlock::~CobbledDeepslateSlabBlock() = default;

short CobbledDeepslateSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19862;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19863;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19864;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19865;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19866;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19867;
  return 19865;
}
