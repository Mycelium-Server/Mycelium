#include "polished_deepslate_slab_block.h"

PolishedDeepslateSlabBlock::PolishedDeepslateSlabBlock() = default;
PolishedDeepslateSlabBlock::~PolishedDeepslateSlabBlock() = default;

short PolishedDeepslateSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 20273;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 20274;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 20275;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 20276;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 20277;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 20278;
  return 20276;
}
