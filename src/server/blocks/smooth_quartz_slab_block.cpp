#include "smooth_quartz_slab_block.h"

SmoothQuartzSlabBlock::SmoothQuartzSlabBlock() = default;
SmoothQuartzSlabBlock::~SmoothQuartzSlabBlock() = default;

short SmoothQuartzSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11712;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11713;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11714;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11715;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11716;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11717;
  return 11715;
}
